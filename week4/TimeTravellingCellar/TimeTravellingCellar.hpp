#ifndef TIMETRAVELLINGCELLAR_HPP
#define TIMETRAVELLINGCELLAR_HPP

#include <vector>
using namespace std;

class TimeTravellingCellar{
    public:
    int determineProfit(vector<int> profit, vector<int> decay){
        int biggest = 0;
        int biggestI = -1;
        int smallest = __INT_MAX__;
        int smallestI = -1;

        for (int i = 0; i < profit.size(); i++){
            if (profit[i] > biggest){
                biggest = profit[i];
                biggestI = i;
            }
        }

        for (int i = 0; i < decay.size(); i++){
            if (decay[i] < smallest){
                smallest = decay[i];
                smallestI = i;
            }
        }

        if (smallestI == biggestI){
            //find second biggest and second smallest
            int biggest2 = 0;
            int smallest2 = __INT_MAX__;

            for (int i = 0; i < profit.size(); i++){
                if (profit[i] > biggest2 && i != biggestI){
                    biggest2 = profit[i];
                }
            }

            for (int i = 0; i < decay.size(); i++){
                if (decay[i] < smallest2 && i != smallestI){
                    smallest2 = decay[i];
                }
            }

            int option1 = biggest - smallest2;
            int option2 = biggest2 - smallest;

            if (option1 > option2){
                return option1;
            }
            return option2;
        }

        return biggest - smallest;
    }
};

#endif