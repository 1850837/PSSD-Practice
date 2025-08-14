#include "QuickSums.hpp"
#include <iostream>

using namespace std;

int main(){

    QuickSums a;

    cout << "Expecting: 4, recieved: " << a.minSums("99999", 45) << "\n";
    cout << "Expecting: 3, recieved: " << a.minSums("1110", 3) << "\n";
    cout << "Expecting: 8, recieved: " << a.minSums("0123456789", 45) << "\n";
    cout << "Expecting: -1, recieved: " << a.minSums("99999", 100) << "\n";
    cout << "Expecting: 2, recieved: " << a.minSums("382834", 100) << "\n";
    cout << "Expecting: 4, recieved: " << a.minSums("9230560001", 71) << "\n";

    cout << "Expecting: 0, recieved: " << a.minSums("1", 1) << "\n";

    return 0;
}