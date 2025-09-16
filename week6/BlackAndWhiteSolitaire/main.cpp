#include "BlackAndWhiteSolitaire.hpp"
#include <iostream>

int main(){

    BlackAndWhiteSolitaire a;

    cout << "Expecting: 1, recieved: " << a.minimumTurns("BBBW") << "\n";
    cout << "Expecting: 0, recieved: " << a.minimumTurns("WBWBW") << "\n";
    cout << "Expecting: 4, recieved: " << a.minimumTurns("WWWWWWWWW") << "\n";
    cout << "Expecting: 10, recieved: " << a.minimumTurns("BBWBWWBWBWWBBBWBWBWBBWBBW") << "\n";

    return 0;
}