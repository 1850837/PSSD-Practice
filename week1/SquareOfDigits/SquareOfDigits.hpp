#ifndef SQUAREOFDIGITS_HPP
#define SQUAREOFDIGITS_HPP

#include <vector>
#include <string>
using namespace std;

class SquareOfDigits{
    public:
    int getMax(vector<string> data){
        int max = 1;
        vector<int> counts = {0,0,0,0,0,0,0,0,0,0};
        int i = 0;

        while ((data.size()-i)*(data.size()-i) > max){      //we stop counting the second we have the largest possible answer

            for (int j = 0; j < data[0].size(); j++){       //creating the counts array for this row
                if (data[i][j] == '0'){
                    counts[0]++;
                }
                if (data[i][j] == '1'){
                    counts[1]++;
                }
                if (data[i][j] == '2'){
                    counts[2]++;
                }
                if (data[i][j] == '3'){
                    counts[3]++;
                }
                if (data[i][j] == '4'){
                    counts[4]++;
                }
                if (data[i][j] == '5'){
                    counts[5]++;
                }
                if (data[i][j] == '6'){
                    counts[6]++;
                }
                if (data[i][j] == '7'){
                    counts[7]++;
                }
                if (data[i][j] == '8'){
                    counts[8]++;
                }
                if (data[i][j] == '9'){
                    counts[9]++;
                }
            }

            for (int j = 0; j < 10; j++){                   //checking each number
                if (counts[j] > 1){                         //if there are two numbers of the same type in a row
                    
                }
            }
        }
        
    }
};

#endif