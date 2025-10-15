#include "BridgeSort.hpp"
#include <iostream>
using namespace std;

int main() {

    BridgeSort a;

    cout << "Expecting: C4D5H2H3HAST, recieved: " << a.sortedHand("HAH2H3C4D5ST") << "\n";
    cout << "Expecting: H3HASA, recieved: " << a.sortedHand("H3SAHA") << "\n";

    return 0;
}