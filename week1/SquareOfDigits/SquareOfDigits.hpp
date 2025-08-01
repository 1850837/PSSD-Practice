#ifndef SQUAREOFDIGITS_HPP
#define SQUAREOFDIGITS_HPP

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class SquareOfDigits{
    public:
    int getMax(vector<string> data){
        //int max = 1;
        //vector<int> counts = {0,0,0,0,0,0,0,0,0,0};
        //int row = 0;

        //while ((data.size()-row)*(data.size()-row) > max){      //we stop counting the second we have the largest possible answer

        //     for (int j = 0; j < data[0].size(); j++){       //creating the counts array for this row
        //         if (data[row][j] == '0'){
        //             counts[0]++;
        //         }
        //         if (data[row][j] == '1'){
        //             counts[1]++;
        //         }
        //         if (data[row][j] == '2'){
        //             counts[2]++;
        //         }
        //         if (data[row][j] == '3'){
        //             counts[3]++;
        //         }
        //         if (data[row][j] == '4'){
        //             counts[4]++;
        //         }
        //         if (data[row][j] == '5'){
        //             counts[5]++;
        //         }
        //         if (data[row][j] == '6'){
        //             counts[6]++;
        //         }
        //         if (data[row][j] == '7'){
        //             counts[7]++;
        //         }
        //         if (data[row][j] == '8'){
        //             counts[8]++;
        //         }
        //         if (data[row][j] == '9'){
        //             counts[9]++;
        //         }
        //     }

        //     for (int j = 0; j < 10; j++){                   //checking each number
        //         if (counts[j] > 1){                         //if there are two numbers of the same type in a row
        //             int a = 99;
        //             int b = 99;
        //             for (int k = 0; k < data[row].size(); k++){           //going once through all 10 numbers
        //                 if (static_cast<int>(data[row][k]) - 48 == j && a == 99){
        //                     a = k;                          //a is the location of the first corner
        //                 }
        //                 else if (static_cast<int>(data[row][k]) - 48 == j && b == 99){
        //                     b = k;                          //b is location of the second corner
        //                 }                                   //no other statement goes off
        //             }

        //             int side = b - a + 1;
        //             if (side*side > max && (row + side - 1) < data.size()){                   //if the square would be larger than the current square registered
        //                 if (static_cast<int>(data[row + side - 1][a]) - 48 == j && static_cast<int>(data[row + side - 1][b]) - 48 == j){
        //                     max = side * side;
        //                 }
        //             }
        //         }
        //     }
        //     row++;
        // }

        int max = 1;

            for (int rows = 0; rows < data.size() - 1; rows++){     //iterating through all but the final row
                for (int cols = 0; cols < data[rows].size() - 1; cols++) {        //iterating through all but the final col
                    for (int secondCol = cols + 1; secondCol < data[rows].size(); secondCol++){
                        if (data[rows][cols] == data[rows][secondCol]){
                            int side = secondCol - cols + 1;
                            if (side * side > max){                 //if this square would be greater than max
                                if (rows + side - 1 < data.size()) {//if this square could possibly have bottom corners
                                    if (data[rows][cols] == data[rows + side - 1][cols] && data[rows][secondCol] == data[rows + side - 1][secondCol]){
                                        max = side * side;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        return max;   
    }
};

#endif