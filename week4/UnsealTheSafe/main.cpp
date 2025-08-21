#include "UnsealTheSafe.hpp"
#include <iostream>
using namespace std;

int main() {

    UnsealTheSafe a;

    cout << "Expecting: 26, recieved: " << a.countPasswords(2) << "\n";
    cout << "Expecting: 74, recieved: " << a.countPasswords(3) << "\n";
    cout << "Expecting: 768478331222, recieved: " << a.countPasswords(25) << "\n";

    return 0;
}