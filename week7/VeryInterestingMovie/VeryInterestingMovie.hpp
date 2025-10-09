#ifndef VERYINTERESTINGMOVIE_HPP
#define VERYINTERESTINGMOVIE_HPP

#include <vector>
#include <string>
using namespace std;

class VeryInterestingMovie{
    public:
    int maximumPupils(vector<string> seats){
        int count = 0;

        for (int row = 0; row < seats.size(); row++){
            for (int seat = 0; seat < seats[0].size(); seat++){
                // case for the first seat
                if (seat == 0){
                    if (seats[row][seat] != 'N'){
                        count++;
                        seats[row][seat] = 'U';         //set as used
                    }
                }

                // case for the other seats
                else {
                    if (seats[row][seat] != 'N' && seats[row][seat-1] != 'U'){
                        count++;
                        seats[row][seat] = 'U';
                    }
                }
            }
        }

        return count;
    }
};

#endif