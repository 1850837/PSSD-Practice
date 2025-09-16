#include "CountExpressions.hpp"
#include <iostream>
using namespace std;

int main() {

    CountExpressions a;

    // vector<int> b = a.extractIntegerWords("12fndk4fn2 23 k453");
    // for (int i = 0; i < b.size(); i++){
    //     cout << b[i] << " ";
    // }
    // cout << "\n";

    cout << "Expecting: 9, recieved: " << a.calcExpressions(7,8,16) << "\n";
    cout << "Expecting: 5, recieved: " << a.calcExpressions(3,5,7) << "\n";
    cout << "Expecting: 6, recieved: " << a.calcExpressions(99,100,98010000) << "\n";
    cout << "Expecting: 2, recieved: " << a.calcExpressions(-99,42,-1764) << "\n";
    cout << "Expecting: 0, recieved: " << a.calcExpressions(100,-100,-100000000) << "\n";
    cout << "Expecting: 17, recieved: " << a.calcExpressions(1,2,5) << "\n";
    cout << "Expecting: 1, recieved: " << a.calcExpressions(48,-65,-153985) << "\n";

    return 0;
}