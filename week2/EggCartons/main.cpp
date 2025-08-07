#include "EggCartons.hpp"
#include <iostream>

using namespace std;

int main(){

    EggCartons a;

    cout << "Expected: 3, recieved: " << a.minCartons(20) << "\n";
    cout << "Expected: 3, recieved: " << a.minCartons(24) << "\n";
    cout << "Expected: -1, recieved: " << a.minCartons(15) << "\n";
    cout << "Expected: -1, recieved: " << a.minCartons(4) << "\n";
    cout << "Expected: 9, recieved: " << a.minCartons(70) << "\n";

    return 0;
}