#include "Arrows.hpp"
#include <iostream>
using namespace std;

int main() {

    Arrows a;

    cout << "Expecting: 4, recieved: " << a.longestArrow("<--->--==>") << "\n";
    cout << "Expecting: 1, recieved: " << a.longestArrow("<<<<<<<<<<") << "\n";
    cout << "Expecting: -1, recieved: " << a.longestArrow("----==-") << "\n";
    cout << "Expecting: 6, recieved: " << a.longestArrow("<----=====>") << "\n";
    cout << "Expecting: 4, recieved: " << a.longestArrow("<---") << "\n";

    return 0;
}