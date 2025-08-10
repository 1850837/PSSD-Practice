#ifndef DERIVATIVESEQUENCE_HPP
#define DERIVATIVESEQUENCE_HPP

#include <vector>
using namespace std;

class DerivativeSequence {
    public:
    vector<int> derSeq(vector<int> a, int n){
        vector<int> odd = a;
        //odd.pop_back();
        vector<int> even = a;

        for (int i = 1; i < n + 1; i++){
            if (i%2 == 0){
                for (int j = 0; j < a.size() - i; j++){
                    even[j] = odd[j+1] - odd[j];
                }
            }
            else {
                for (int j = 0; j < a.size() - i; j++){
                    odd[j] = even[j+1] - even[j];
                }
            }
        }

        vector<int> result = {};

        if (n%2 == 0){
            for (int i = 0; i < even.size() - n; i++){
                result.push_back(even[i]);
            }    
        }
        else {
            for (int i = 0; i < odd.size() - n; i++){
                result.push_back(odd[i]);
            }
        }

        return result;;
    }
};

#endif