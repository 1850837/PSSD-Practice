#ifndef BIGBURGER_HPP
#define BIGBURGER_HPP

#include <vector>
#include <iostream>
using namespace std;

class BigBurger {
    public:
    int maxWait(vector<int> arrival, vector<int> service){

            // case for only a single customer
        if (arrival.size() == 1){
            return 0;
        }

        // cout << "leaving: ";
            // all other cases
        // creating a vector of leaving times
        vector<int> leaving = {arrival[0]+service[0]};
        // cout << leaving[0] << " ";
        for (int i = 1; i < arrival.size(); i++){
            if (leaving[i-1] > arrival[i]){
                leaving.push_back(leaving[i-1] + service[i]);
            }
            else {
                leaving.push_back(arrival[i] + service[i]);
            }
            // cout << leaving[i] << " ";
        }
        // cout << "\n";

        // looping through to find the max wait time
        int maxTime = 0;
        // cout << "times are: ";
        for (int i = 1; i < arrival.size(); i++){
            // cout << leaving[i-1] - arrival[i] << " ";

            if ((leaving[i-1] - arrival[i]) > maxTime){
                maxTime = leaving[i-1] - arrival[i];
            }
        }
        // cout << "\n";

        return maxTime;
    }
};

#endif