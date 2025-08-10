#include "DerivativeSequence.hpp"
#include <iostream>

using namespace std;

int main() {

    DerivativeSequence a;

    vector<int> b = a.derSeq({5,6,3,9,-1},1);
    cout << "Expecting: {1, -3, 6, -10 }, returned: {";
        for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "}\n";

    b = a.derSeq({5,6,3,9,-1},2);
    cout << "Expecting: {-4, 9, -16 }, returned: {";
        for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "}\n";

    b = a.derSeq({5,6,3,9,-1},4);
    cout << "Expecting: {-38 }, returned: {";
        for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "}\n";

    b = a.derSeq({4,4,4,4,4,4,4,4},3);
    cout << "Expecting: {0, 0, 0, 0, 0 }, returned: {";
        for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "}\n";

    b = a.derSeq({-100,100},0);
    cout << "Expecting: {-100,100}, returned: {";
        for (int i = 0; i < b.size(); i++){
            cout << b[i] << " ";
        }
        cout << "}\n";

    return 0;
}