#ifndef SIMPLEDUPLICATEREMOVER_HPP
#define SIMPLEDUPLICATEREMOVER_HPP

#include <vector>
#include <algorithm>
using namespace std;

class SimpleDuplicateRemover{
    public:
    vector<int> process(vector<int> sequence){
        // create vector of 1000 elements
        vector<int> counts(1000,0);

        // loop backwards through sequence
        for (int i = sequence.size()-1; i >= 0; i--){

            // add to counts
            counts[sequence[i] - 1]++;

            // check if it's greater than one
            if (counts[sequence[i] - 1] > 1){
                sequence[i] = -1;
            }
        }

        // create new vector
        vector<int> final = {};

        for (int i = 0; i < sequence.size(); i++){
            if (sequence[i] != -1){
                final.push_back(sequence[i]);
            }
        }

        return final;
    }
};

#endif