#ifndef EGGCARTONS_HPP
#define EGGCARTONS_HPP

#include <iostream>
using namespace std;

class EggCartons {
    public:
    int minCartons(int n){
        // if n is odd
        if (n % 2 != 0){
            return -1;
        }

        //if n < 6
        if (n < 6){
            return -1;
        }

        //actual algorithm
        int i = 0;
        double b;
        while (6 * i <= n){
            b = n;
            b = b - (6 * i);
            b = b/8;

            if (b == static_cast<int>(b)){
                int c = b + i;
                return c;
            }
            
            i++;
        }

        return -1;
    }
};

#endif