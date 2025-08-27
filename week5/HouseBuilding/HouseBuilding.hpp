#ifndef HOUSEBUILDING_HPP
#define HOUSEBUILDING_HPP

#include <vector>
#include <string>
#include <iostream>
#include <climits>
using namespace std;

class HouseBuilding{
    public:
    int getMinimum(vector<string> area){
        //create vector of ints
        vector<int> areaInts = {};

        for (int i = 0; i < area.size(); i++){
            for (int j = 0; j < area[i].size(); j++){
                areaInts.push_back(area[i][j] - 48);
            }
        }

        //checking how often each value appears
        vector<int> counters = {0,0,0,0,0,0,0,0,0,0};
        for (int i = 0; i < areaInts.size(); i++){
            counters[areaInts[i]]++;
        }

        // //finding the max
        // int maxCount = 0;
        // for (int i = 0; i < 10; i++){
        //     if (counters[i] > maxCount){
        //         maxCount = counters[i];         //now holds the maximum numbers of times a character appears
        //     }
        // }

        //actually checking the levelling
        vector<int> effortCounts = {};          //this will hold all the effort counts, and will eventually return the min
        for (int i = 1; i < 10; i++){           //looping through for (i-1,i)

            int currentCount = 0;


            // if (counters[i] == maxCount){       //any element that appears the max number of times gets to get looped
            //                                     //i holds the level

            //     int currentCount = 0;

            //     // cout << "\ni = " << i << "\n";

            //     //do (i-1,i) if possible
            //     if (i!=0){
            //         for (int j = 0; j < areaInts.size(); j++){
            //             if (areaInts[j] < i-1){
            //                 currentCount = currentCount + i - 1 - areaInts[j];
            //             }

            //             if (areaInts[j] > i){
            //                 currentCount = currentCount + areaInts[j] - i;
            //             }
            //         }

            //         effortCounts.push_back(currentCount);
            //     }

            //     currentCount = 0;

            //     //do (i,i+1) if possible
            //     if (i!=9){
            //         for (int j = 0; j < areaInts.size(); j++){
            //             if (areaInts[j] < i){
            //                 currentCount = currentCount + i - areaInts[j];
            //             }

            //             if (areaInts[j] > i){
            //                 currentCount = currentCount + areaInts[j] - i - 1;
            //             }
            //         }

            //         effortCounts.push_back(currentCount);
            //     }
            // }

            for (int j = 0; j < 10; j++){   //looping through counters
                // cout << "\nj = " << j << "\n";

                if (j < i - 1){
                    currentCount = currentCount + (i-1-j)*counters[j];
                }
                if (j > i){
                    currentCount = currentCount + (j-i)*counters[j];
                    // cout << "(j-1)*currentCount[j] = " << (j-i)*counters[j] << "\n";
                }
            }

            // cout << "currentCount = " << currentCount << "\n";

            effortCounts.push_back(currentCount);
            
        }

        //extracting the min
        int min = INT_MAX;

        // cout << "The areaInts array is: ";
        for (int i = 0; i < effortCounts.size(); i++){
            

            if (effortCounts[i] < min){
                min = effortCounts[i];
            }
        }

        return min;
    }
};

#endif