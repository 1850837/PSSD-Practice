#ifndef RGBSTREET_HPP
#define RGBSTREET_HPP

#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class RGBStreet {
    public:
    int minCost = __INT_MAX__;

    int estimateCost(vector<string> houses){
        minCost = __INT_MAX__;

        //extract ints from string
        vector<int> costs = {};
        for (int i = 0; i < houses.size(); i++){
            stringstream ss;
            for (char c : houses[i]){
                if (isdigit(c)) ss << c;
                else ss << ' ';
            }
            int num = 0;
            while (ss >> num){
                costs.push_back(num);
            }
        }

        // cout << "Costs = ";
        // for (int i = 0; i < costs.size(); i++){
        //     cout << costs[i] << " ";
        // }
        // cout << "\n";

        //recursive calls
        recursiveCost(0, 0, 0, costs);
        recursiveCost(0, 1, 0, costs);
        recursiveCost(0, 2, 0, costs);

        // cout << "In the original function, minCost = " << minCost << "\n";

        return minCost;

    }

    void recursiveCost(int i, int choice, int currentCost, vector<int> costs){

        //updating cost
        currentCost = currentCost + costs[i*3 + choice];

        //base case (here so we skip an extra set of stack frames)
        if (i+1 >= costs.size()/3){
            // cout << "currentCost = " << currentCost << " and minCost = " << minCost << "\n";

            if (currentCost < minCost) {
                minCost = currentCost;
            }

            return;
        }

        // recursive calls
        if (choice == 0){
            recursiveCost(i+1, 1, currentCost, costs);
            recursiveCost(i+1, 2, currentCost, costs);
        }
        if (choice == 1){
            recursiveCost(i+1, 0, currentCost, costs);
            recursiveCost(i+1, 2, currentCost, costs);
        }
        if (choice == 2){
            recursiveCost(i+1, 0, currentCost, costs);
            recursiveCost(i+1, 1, currentCost, costs);
        }

        return;
    }
};

#endif