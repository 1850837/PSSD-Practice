#ifndef MINIMUMDIFFERENCE_HPP
#define MINIMUMDIFFERENCE_HPP

#include <math.h>
#include <vector>
#include <iostream>
using namespace std;

class MinimalDifference{
    public:
    int findNumber(int A, int B, int C){
        int cDifference = absoluteSum(C);
        int currentSmallest = __INT_MAX__;
        int currentNum = -1;

        int temp;
        int tempDif;
        for (int i = A; i < B+1; i++){
            temp = absoluteSum(i);
            tempDif = abs(temp-cDifference);

            if (tempDif < currentSmallest){
                currentSmallest = tempDif;
                currentNum = i;
            }
        }

        return currentNum;
    }

    int absoluteSum(int D){
        vector<int> digits = {};

        while(D > 0){
            digits.push_back(D%10);
            D /= 10;
        }

        int answer = 0;

        for (int i = 0; i < digits.size(); i++){
            answer += digits[i];
        }

        return answer;
    }
};

#endif