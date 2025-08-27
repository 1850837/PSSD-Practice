#ifndef ELEVATORLIMIT_HPP
#define ELEVATORLIMIT_HPP

#include <vector>
#include <iostream>
using namespace std;

class ElevatorLimit{
    public:
    vector<int> getRange(vector<int> enter, vector<int> exit, int physicalLimit){
        int min = 1001;
        int max = -1001;
        int currentCount = 0;
        vector<int> result = {};

        for (int i = 0; i < enter.size(); i++){
            //people leaving
            currentCount = currentCount - exit[i];

            if (currentCount < min){
                min = currentCount;
            }

            //people entering
            if (enter[i] > physicalLimit){
                return result;
            }

            currentCount = currentCount + enter[i];

            if (currentCount > max){
                max = currentCount;
            }

            //returning early if overloaded
            if (currentCount > physicalLimit){
                return result;
            }
        }

        //calculate the big versions
        int BigMin = -1 * min;
        cout << "\nBigmin = " << BigMin << "\n";
        if (BigMin < 0){
            BigMin = 0;
        }
        if (BigMin > physicalLimit){
            return result;
        }

        int BigMax = physicalLimit - max;
        if (max < 0){
            BigMax = physicalLimit;
        }

        cout << "\nBigMax = " << BigMax << "\n";
        if (BigMax < 0 || BigMax > physicalLimit){
            return result;
        }

        if (BigMin > BigMax){
            return result;
        }

        result = {BigMin, BigMax};

        return result;

    }
};

#endif