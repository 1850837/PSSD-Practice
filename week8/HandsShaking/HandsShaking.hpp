#ifndef HANDSSHAKING_HPP
#define HANDSSHAKING_HPP

#include <math.h>
#include <iostream>
using namespace std;

class HandsShaking{
    public: 
    long countPerfect(int n){
        long results[51];
        long current = 0;
        
        results[0] = 1;
        if (n >= 2){
            results[2] = 1;
        }
        if (n >= 4){
            results[4] = 2;
        }

        // tabulating everything else
        // if (n > 5){
        for (int i = 6; i < n+1; i = i+2){
            current = 0;

            for (int j = 0; j < i; j = j+2){
                current = current + (results[j] * results[i-j-2]);
            }

            results[i] = current;
            // cout << "\nresults[" << i << "] = " << results[i] << "\n";
            // cout << "current = " << current << "\n";
            // }
        }

        if (n == 2){
            return results[2];
        }
        if (n == 4) {
            return results[4];
        }

        return current;
        // return -1;
    }
};

#endif