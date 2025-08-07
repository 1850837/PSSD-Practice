#include "BlackAndRed.hpp"
#include <iostream>

using namespace std;

int main() {

    BlackAndRed a;

    cout << "Expected: 0, recieved: " << a.cut("BRBRBR") << "\n";
    cout << "Expected: 1, recieved: " << a.cut("RBRBRB") << "\n";
    cout << "Expected: 0, recieved: " << a.cut("BR") << "\n";
    cout << "Expected: 9, recieved: " << a.cut("RBRBBRRRRBBBRBBRRBRBBRRRBRBBBRBRBRBRBRRB") << "\n";

    return 0;
}