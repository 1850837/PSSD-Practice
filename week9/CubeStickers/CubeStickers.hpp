#ifndef CUBESTICKERS_HPP
#define CUBESTICKERS_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <iostream>
using namespace std;

class CubeStickers {
    public:
    string isPossible(vector<string> sticker){
        vector<string> colours = {};
        vector<int> counts = {};

        // counting up the colours
        for (int i = 0; i < sticker.size(); i++){

            // if the colour is already there
            int found = -1;
            for (int j = 0; j < colours.size(); j++){
                if (colours[j] == sticker[i]){
                    found = j;
                    break;
                }
            }
            if (found != -1){
                counts[found]++;
            }

            // if the colour is not there
            else {
                colours.push_back(sticker[i]);
                counts.push_back(1);
            }
        }

        // for (int i = 0; i < colours.size(); i++){
        //     cout << colours[i] << ": " << counts[i] << "\n";
        // }

        // doing the cases

        // size is 6 or more
        if (counts.size() >= 6){
            return "YES";
        }

        // size is 5 and at least one value is greater than 1
        if (counts.size() == 5){
            // cout << "here1\n";
            bool found = false;

            for (int i = 0; i < 5; i++){
                // cout << colours[i] << ": " << counts[i] << "\n";

                if (counts[i] > 1){
                    found = true;
                    // cout << "here2\n";
                    break;
                }
            }

            if (found == true){
                return "YES";
            }
            else {
                return "NO";
            }
        }

        // size is 4 and at least two values are greater than 1
        if (counts.size() == 4){
            int numFound = 0;

            for (int i = 0; i < 4; i++){
                if (counts[i] > 1){
                    numFound++;
                }
            }

            if (numFound >= 2){
                return "YES";
            }
            else {
                return "NO";
            }
        }

        // size is 3 and all three vals are greater than 1
        if (counts.size() == 3){
            if (counts[0] > 1 && counts[1] > 1 && counts[2] > 1){
                return "YES";
            }
            else {
                return "NO";
            }
        }

        return "NO";
    }
};

#endif