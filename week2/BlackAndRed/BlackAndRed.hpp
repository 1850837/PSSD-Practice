#ifndef BLACKANDRED_HPP
#define BLACKANDRED_HPP

#include <string>
using namespace std;

class BlackAndRed {
    public:
    int cut(string deck){
        int redCount = 0;
        int blackCount = 0;
        int cutPlace = 0;

        for (int i = 0; i < deck.size(); i++){
            if (deck[i] == 'B'){
                blackCount++;
            }
            else {
                redCount++;
            }

            if (redCount > blackCount){
                redCount = 0;
                blackCount = 0;
                cutPlace = i + 1;
            }
        }

        if (cutPlace == 0){
            return 0;
        }

        return cutPlace;
    }
};

#endif