#ifndef THIMBLES_HPP
#define THIMBLES_HPP

#include <string>
#include <vector>
using namespace std;

class Thimbles {
    public:
    int thimbleWithBall(vector<string> swaps){
        string currentStr = "1";    // starting in the first cup
        for (int i = 0; i < swaps.size(); i++){
            // check if the current element is the first cup being swapped
            if (swaps[i][0] == currentStr[0]){
                currentStr = swaps[i][2];
            }

            // check if the current element is the second cup being swapped
            else if (swaps[i][2] == currentStr[0]){
                currentStr = swaps[i][0];
            }
        }

        return stoi(currentStr);

    }
};

#endif