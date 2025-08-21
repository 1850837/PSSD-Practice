#ifndef UNSEALTHESAFE_HPP
#define UNSEALTHESAFE_HPP

#include <iostream>
using namespace std;

class UnsealTheSafe {
    public:
    long countPasswords(int N){
        long table[10][30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

        //setting the first column
        for (int i = 0; i < 10; i++){
            table[i][0] = 1;
            // table[0][i] = 1;
        }

        // cout << "table is currently:\n";
        // for (int i = 0; i < 10; i++){
        //     for (int j = 0; j < 30; j++){
        //         cout << table[i][j] << ", ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";

        //setting up every row after that, up to N so no unnecesary computation
        for (int i = 1; i < N; i++){
            //need to have a specific line for each of the 10 values
            table[0][i] = table[7][i-1];
            table[1][i] = table[2][i-1] + table[4][i-1];
            table[2][i] = table[1][i-1] + table[3][i-1] + table[5][i-1];
            table[3][i] = table[2][i-1] + table[6][i-1];
            table[4][i] = table[1][i-1] + table[5][i-1] + table[7][i-1];
            table[5][i] = table[2][i-1] + table[4][i-1] + table[6][i-1] + table[8][i-1];
            table[6][i] = table[3][i-1] + table[5][i-1] + table[9][i-1];
            table[7][i] = table[4][i-1] + table[8][i-1] + table[0][i-1];
            table[8][i] = table[5][i-1] + table[7][i-1] + table[9][i-1];
            table[9][i] = table[6][i-1] + table[8][i-1];

            // table[i][0] = table[i-1][7];
            // table[i][1] = table[i-1][2] + table[i-1][4];
            // table[i][2] = table[i-1][1] + table[i-1][3] + table[i-1][5];
            // table[i][3] = table[i-1][2] + table[i-1][6];
            // table[i][4] = table[i-1][1] + table[i-1][5] + table[i-1][7];
            // table[i][5] = table[i-1][2] + table[i-1][4] + table[i-1][6] + table[i-1][8];
            // table[i][6] = table[i-1][3] + table[i-1][5] + table[i-1][9];
            // table[i][7] = table[i-1][4] + table[i-1][8] + table[i-1][0];
            // table[i][8] = table[i-1][5] + table[i-1][7] + table[i-1][9];
            // table[i][9] = table[i-1][6] + table[i-1][8];
        }

    //    cout << "table is currently:\n";
    //     for (int i = 0; i < 10; i++){
    //         for (int j = 0; j < 30; j++){
    //             cout << table[i][j] << ", ";
    //         }
    //         cout << "\n";
    //     }
    //     cout << "\n";

        long result = 0;
        for (int i = 0; i < 10; i++){
            // cout << "\ntable[N-1][i] = " << table[N-1][i] <<"\n";
            result = result + table[i][N-1];
        }
        // cout << "We get here\n";
        return result;
    }
};

#endif