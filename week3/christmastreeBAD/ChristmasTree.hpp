#ifndef CHRISTMASTREE_HPP
#define CHRISTMASTREE_HPP

#include <vector>
#include <iostream>
using namespace std;

class ChristmasTree {
    public:
    long countOfWays = 0;

    long decorationWays(int N, int red, int green, int blue){
        countOfWays = 0;

        recursiveWays(N, red - 1, green, blue, {}, 'r');
        recursiveWays(N, red, green - 1, blue, {}, 'g');
        recursiveWays(N, red, green, blue - 1, {}, 'b');

        return countOfWays;
    }

    void recursiveWays(int N, int red, int green, int blue, vector<char> tree, char bauble){

        tree.push_back(bauble);

        if (red < 0 || green < 0 || blue < 0){
            return;
        }

        int sumOfN = 0;
        int level = 0;

        if (tree.size() != 0){
            for (int i = 1; i <= N; i++){
                sumOfN = sumOfN + i;

                if (tree.size() == sumOfN){
                    level = i;
                }
            }
        }

        //check if this is the end of a row
        if (level != 0){
            //check if this latest row is valid

            long redRowCount = 0;
            long greenRowCount = 0;
            long blueRowCount = 0;

            //seg fault here
            for (int i = tree.size() - level; i < tree.size(); i++){
                if (tree[i] == 'r'){
                    redRowCount++;
                }
                if (tree[i] == 'g'){
                    greenRowCount++;
                }
                if (tree[i] == 'b'){
                    blueRowCount++;
                }
            }

            //going through all seven success cases
            bool successfulRow = false;
            if (redRowCount == greenRowCount && redRowCount == blueRowCount){
                successfulRow = true;
            }
            if (redRowCount == greenRowCount && blueRowCount == 0){
                successfulRow = true;
            }
            if (redRowCount == blueRowCount && greenRowCount == 0){
                successfulRow = true;
            }
            if (greenRowCount == blueRowCount && redRowCount == 0){
                successfulRow = true;
            }
            if (redRowCount == 0 && greenRowCount == 0){
                successfulRow = true;
            }
            if (redRowCount == 0 && blueRowCount == 0){
                successfulRow = true;
            }
            if (greenRowCount == 0 && blueRowCount == 0){
                successfulRow = true;
            }

            //if this row doesn't work, no point continuing
            if (successfulRow == false){
                return;
            }

            //if it's the final row and it worked
            if (successfulRow == true && level == N){
                countOfWays++;
            }

        }

        int sumRemaining = red + green + blue;
        if (sumRemaining < 1){
            return;
        }

        //call for using a red bauble next
        recursiveWays(N, red - 1, green, blue, tree, 'r');

        //call for using a blue bauble next
        recursiveWays(N, red, green - 1, blue, tree, 'g');

        //call for using a green bauble next
        recursiveWays(N, red, green, blue - 1, tree, 'b');

        return;

    }
};

#endif