#ifndef ALTERNATECOLORS_HPP
#define ALTERNATECOLORS_HPP

#include <string>
#include <vector>
#include <algorithm>

#include <iostream>
using namespace std;

class AlternateColors{
    public:
    string getColor(long r, long g, long b, long k){

        vector<long> list = {r, g, b};
        sort(list.begin(), list.end());

        long remaining = k;
        
        string longest;
        if (list[2] == r){
            longest == "RED";
        }
        if (list[2] == g){
            longest == "GREEN";
        }
        if (list[2] == b){
            longest == "BLUE";
        }

        //if in section 1
        if (k <= 3 * list[0]){
            if (k % 3 == 1){
                return "RED";
            }
            if (k % 3 == 2){
                return "GREEN";
            }
            if (k % 3 == 0){
                return "BLUE";
            }
        }

        //if in section 2

        list[2] = list[2] - list[0];
        list[1] = list[1] - list[0];
        remaining = remaining - (3 * list[0]);
        list[0] = 0;

        if (k <= 2 * list[1]){
            //if red was taken out
            if (list[0] == r){
                if (k % 2 == 0){
                    return "GREEN";
                }
                if (k % 2 == 1){
                    return "BLUE";
                }
            }
            //if green was taken out
            else if (list[0] == g){
                if (k % 2 == 0){
                    return "BLUE";
                }
                if (k % 2 == 1){
                    return "RED";
                }
            }
            //if blue was taken out
            else if (list[0] == b){
                if (k % 2 == 0){
                    return "RED";
                }
                if (k % 2 == 1){
                    return "GREEN";
                }
            }
        }

        //if in section 3

        list[2] = list[2] - list[1];
        remaining = remaining - 2 * list[1];
        list[1] = 0;

            // cout << "\nList[2] = " << list[2] << " and r - 2 * g - 3 * b and r - 2 * b - 3 * g are " << r - 2 * g - 3 * b << ", " << r - 2 * b - 3 * g << "\n";

            // if (list[2] == (r - 2 * g - 3 * b) || list[2] == (r - 2 * b - 3 * g)){
            //     return "RED";
            // }
            // if (list[2] == (g - 2 * r - 3 * b) || list[2] == (g - 3 * r - 2 * b)){
            //     return "GREEN";
            // }
            // if (list[2] == (b - 2 * r - 3 * g) || list[2] == (b - 3 * r - 2 * g)){
            //     return "BLUE";
            // }

        return longest;

        // return "shit";
    }
};

#endif