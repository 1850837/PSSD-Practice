#ifndef FAIRWORKLOAD_HPP
#define FAIRWORKLOAD_HPP

#include <vector>
#include <math.h>
#include <iostream>
using namespace std;

class FairWorkload{
    public:
    int getMostWork(vector<int> folders, int workers){

        // if there is a single pile
        if (workers == 1){
            int count = 0;
            for (int i = 0; i < folders.size(); i++){
                count += folders[i];
            }

            return count;
        }

        if (workers == folders.size()){
            int max = 0;
            for (int i = 0; i < folders.size(); i++){
                if (folders[i] > max){
                    max = folders[i];
                }
            }

            return max;
        }

        vector<int> piles = {};

        for (int i = 0; i < workers; i++){
            piles.push_back(0);
        }

        double average = 0;
        for (int i = 0; i < folders.size(); i++){
            average += folders[i];
        }
        average /= workers;

        int pileNum = 0;

        int diffA = 0;
        int diffB = 0;
        for (int i = 0; i < folders.size(); i++){
            diffA = abs(piles[pileNum] - average);
            diffB = abs(piles[pileNum] + folders[i] - average);

            // if A > B, add to current pile, or if it's the last pile
            if (diffA >= diffB || pileNum == piles.size()-1){
                if ((pileNum < piles.size()-1) && (i == folders.size()-1)){
                    pileNum++;
                    piles[pileNum] += folders[i];
                }
                else {
                    piles[pileNum] += folders[i];
                }
            }

            // if A < B, increase pileNum and add to next pile
            else {
                pileNum++;
                piles[pileNum] += folders[i];
            }
        }

        int maxVal = 0;
        for (int i = 0; i < piles.size(); i++){
            if (piles[i] > maxVal){
                maxVal = piles[i];
            }
        }

        // second go around
        vector<int> piles2 = {};

        for (int i = 0; i < workers; i++){
            piles2.push_back(0);
        }

        int pileNum2 = piles2.size() - 1;

        for (int i = folders.size() - 1; i >= 0; i--){
            diffA = abs(piles2[pileNum2] - average);
            diffB = abs(piles2[pileNum2] + folders[i] - average);

            // if A > B, add to current pile, or if it's the last pile
            if (diffA >= diffB || pileNum2 == 0){
                if ((pileNum2 > 0) && (i == 1)){
                    pileNum2--;
                    piles2[pileNum2] += folders[i];
                }
                else {
                    piles2[pileNum2] += folders[i];
                }
            }

            // if A < B, increase pileNum and add to next pile
            else {
                pileNum2--;
                piles2[pileNum2] += folders[i];
            }
        }

        int maxVal2 = 0;
        for (int i = 0; i < piles2.size(); i++){
            if (piles2[i] > maxVal2){
                maxVal2 = piles2[i];
            }
        }

        // // testing
        // cout << "\n";
        // for (int i = 0; i < piles.size(); i++){
        //     cout << piles[i] << " ";
        // }
        // cout << "\n";

        // for (int i = 0; i < piles2.size(); i++){
        //     cout << piles2[i] << " ";
        // }
        // cout << "\n";

        if (maxVal2 < maxVal){
            return maxVal2;
        }

        return maxVal;
    }
};

#endif