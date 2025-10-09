#ifndef CELLREMOVAL_HPP
#define CELLREMOVAL_HPP

#include <algorithm>
#include <vector>
using namespace std;

class CellRemoval {
    public:
    int cellsLeft(vector<int> parent, int deletedCell){
        vector<int> deleted = {deletedCell};
        // bool found = true;

        // deleting all the related cells
        // while (found == true){

            // reseting found
            // found = false;

            // loop through parents
            for (int i = 0; i < parent.size(); i++){

                // loop through deleted
                for (int j = 0; j < deleted.size(); j++){
                    if (parent[i] == deleted[j]){
                        deleted.push_back(i);
                        // found = true;
                    }
                }
            }
        // }

        // loop through to create count of final cells
        int final = 0;
        for (int i = 0; i < parent.size(); i++){

            // if i is not in the array of deleted
            if (find(deleted.begin(), deleted.end(), i) == deleted.end()){
                
                // if it's a final cell
                if (find(parent.begin(), parent.end(), i) != deleted.end()){
                    final++;
                }
            }
        }

        return final;
    }
};

#endif