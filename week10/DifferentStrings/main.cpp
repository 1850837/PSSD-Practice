#include "DifferentStrings.hpp"
#include <iostream>
using namespace std;

int main() {

    DifferentStrings a;

    cout << "Expecting: 1, recieved: " << a.minimize("koder", "topcoder") << "\n";
    cout << "Expecting: 1, recieved: " << a.minimize("hello", "xello") << "\n";
    cout << "Expecting: 0, recieved: " << a.minimize("abc", "topabcoder") << "\n";
    cout << "Expecting: 2, recieved: " << a.minimize("adaabc", "aababbc") << "\n";
    cout << "Expecting: 6, recieved: " << a.minimize("giorgi", "igroig") << "\n";

    return 0;
}