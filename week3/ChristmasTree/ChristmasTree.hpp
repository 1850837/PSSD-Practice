#ifndef CHRISTMASTREE_HPP
#define CHRISTMASTREE_HPP

#include <vector>
using namespace std;

class ChristmasTree {
    public:
    long countOfWays = 0;
    vector<char> tree = {};

    long decorationWays(int N, int red, int green, int blue){
        recursiveWays(N, red, green, blue);

        return countOfWays;
    }

    void recursiveWays(int N, int red, int green, int blue){

        if (red == 0 && green == 0 && blue == 0){
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

        int redUsed = 0;
        int greenUsed = 0;
        int blueUsed = 0;
        for (int i = 0; i < tree.size(); i++){
            if (tree[i] == 'r'){
                redUsed++;
            }
            if (tree[i] == 'g'){
                greenUsed++;
            }
            if (tree[i] == 'b'){
                blueUsed++;
            }
        }

        //check if this is the end of a row
        if (level != 0){
            //check if this latest row is valid

            int redRowCount = 0;
            int greenRowCount = 0;
            int blueRowCount = 0;
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

        //call for using a red bauble next
        tree.push_back('r');
        recursiveWays(N, red - 1, green, blue);

        //call for using a blue bauble next
        tree.push_back('g');
        recursiveWays(N, red, green - 1, blue);

        //call for using a green bauble next
        tree.push_back('b');
        recursiveWays(N, red, green, blue - 1);

    }
};

#endif