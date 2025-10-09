#ifndef CATGAME_HPP
#define CATGAME_HPP

#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class CatGame {
    public:
    int getNumber(vector<int> coordinates, int X){
        // cout << "\n";
        // for (int i = 0; i < coordinates.size(); i++){
        //     cout << coordinates[i] << "     " << coordinates[i]+X << "      " << coordinates[i]-X << "\n";
        // }

        sort(coordinates.begin(), coordinates.end());

        // for (int i = 0; i < coordinates.size(); i++){
        //     cout << coordinates[i] << "\n";
        // }

        // case where there is only a single element in coordinates
        if (coordinates.size() == 1){
            return 0;
        }

        // all other cases
        vector<int> changedCoords = coordinates;
        // double ave = 0;

        // cout << "\n";
        // for (int j = 0; j < changedCoords.size(); j++){
        //     cout << changedCoords[j] << " ";
        // }

        // every element is +X
        for (int i = 0; i < changedCoords.size(); i++){
            changedCoords[i] -= X;
        }

        // // cout << "here\n";
        // cout << "\n";
        // for (int j = 0; j < changedCoords.size(); j++){
        //     cout << changedCoords[j] << " ";
        // }
        // cout << "here2\n";

        int currentVal = changedCoords[changedCoords.size()-1] - changedCoords[0];
        int minVal = currentVal;

        int currentMin = 100000000;
        int currentMax = -100000000;

        // cout << "here3\n";
        for (int i = 0; i < changedCoords.size(); i++){

            currentMin = 100000000;
            currentMax = -100000000;

            // make current element a -X
            changedCoords[i] += 2*X;

            // recheck difference
            // cout << "here4\n";
            for (int j = 0; j < changedCoords.size(); j++){
                // cout << "here5\n";
                if (changedCoords[j] > currentMax){
                    currentMax = changedCoords[j];
                }
                if (changedCoords[j] < currentMin){
                    currentMin = changedCoords[j];
                }
            }
            // cout << "min max = " << currentMin << " " << currentMax << "\n";

            currentVal = currentMax - currentMin;
            // cout << "currentVal = " << currentVal << "\n";

            // cout << "here6\n";

            // see if it's good enough
            if (currentVal < minVal){
                minVal = currentVal;
                // cout << "minval = " << minVal << "\n";
            }

            // cout << "\n";
            // for (int j = 0; j < changedCoords.size(); j++){
            //     cout << changedCoords[j] << " ";
            // }
            // cout << "\n";
        }
        

        // // finding the average
        // for (int i = 0; i < coordinates.size(); i++){
        //     ave += coordinates[i];
        // }
        // ave = ave / coordinates.size();
        // cout << "ave = " << ave << "\n";

        // // int current;
        // // array to create the changed elements
        // for (int i = 0; i < coordinates.size(); i++){
        //     // current = coordinates[i] - ave;
        //     // cout << ave << " ";

        //     // case where we need to add
        //     if (ave > coordinates[i]){
        //         changedCoords.push_back(coordinates[i] + X);
        //     }

        //     // case where we need to subtract
        //     else {
        //         changedCoords.push_back(coordinates[i] - X);
        //     }

        //     // cout << changedCoords[i] << " ";
        // }
        // // cout << "\n";

        // sort(changedCoords.begin(), changedCoords.end());

        // return changedCoords[changedCoords.size() - 1] - changedCoords[0];

        return minVal;

    }

};

#endif