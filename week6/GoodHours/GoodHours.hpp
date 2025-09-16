#ifndef GOODHOURS_HPP
#define GOODHOURS_HPP

#include <string>
#include <iostream>
#include <math.h>
using namespace std;

class GoodHours {
    public:
    int howMany(string beforeTime, string afterTime){
        int beforeTimeHr = stoi(beforeTime.substr(0,2));
        int beforeTimeMin = stoi(beforeTime.substr(3,2));
        int afterTimeHr = stoi(afterTime.substr(0,2));
        int afterTimeMin = stoi(afterTime.substr(3,2));

        int currentTimeHr = beforeTimeHr;
        int currentTimeMin = beforeTimeMin;

        int counter = 0;

        while(1){
            int a = floor(currentTimeHr/10);
            int b = currentTimeHr%10;
            int c = floor(currentTimeMin/10);
            int d = currentTimeMin%10;

            if (a == b*c*d || a*b == c*d || a*b*c == d){
                counter++;
            }

            if (currentTimeHr == afterTimeHr && currentTimeMin == afterTimeMin){
                break;
            }

            currentTimeMin++;

            if (currentTimeMin >= 60){
                currentTimeMin = 0;
                currentTimeHr++;
            }

            if (currentTimeHr >= 24){
                currentTimeHr = 0;
            }
            // cout << "a = " << a << " b = " << b << " c = " << c << " d = " << d << "\n";
        }

        return counter;
    }

};

#endif