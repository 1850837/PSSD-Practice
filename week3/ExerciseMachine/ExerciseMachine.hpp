#ifndef EXERCISEMACHINE_HPP
#define EXERCISEMACHINE_HPP

#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class ExerciseMachine {
    public:
    int getPercentages(string time){

        int seconds = 60 * 60 * stoi(time.substr(0,2)) + 60 * stoi(time.substr(3,2)) + stoi(time.substr(6,2));

        int num = 0;

        for (int i = 1; i < 100; i++){
            if (((seconds*i)%100) == 0){
                num++;
            }
        }

        return num;
    }
};

#endif