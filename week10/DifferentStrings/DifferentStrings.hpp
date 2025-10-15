#ifndef DIFFERENTSTRINGS_HPP
#define DIFFERENTSTRINGS_HPP

#include <string>
#include <iostream>
using namespace std;

class DifferentStrings {
    public:
    int minimize(string A, string B){
        
        // case where they're the same size
        if (A.size() == B.size()){
            int count = 0;
            for (int i = 0; i < A.size(); i++){
                if (A[i] != B[i]){
                    count++;
                }
            }

            return count;
        }

        // all other cases
        int min = __INT_MAX__;
        int currentMin = 0;
        for (int i = 0; i <= B.size() - A.size(); i++){
            currentMin = 0;

            for (int j = 0; j < A.size(); j++){
                // cout << "Currently comparing: " << A[j] << " and " << B[j+i] << "\n";

                if (A[j] != B[j+i]){
                    currentMin++;
                    // cout << "NO match! CurrentMin = " << currentMin << "\n";
                }
            }

            if (currentMin < min){
                min = currentMin;
            }

            // cout << "min = " << min << "\n";
        }

        return min;
    }
};

#endif