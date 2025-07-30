#include "ThrowTheBall.hpp"
#include <iostream>

int main(){
    ThrowTheBall a;

    std::cout << "N: 5, M: 3, L: 2, expected; 10, got: " << a.timesThrown(5, 3, 2) << "\n";
    std::cout << "N: 4, M: 1, L: 3, expected; 0, got: " << a.timesThrown(4, 1, 3) << "\n";
    std::cout << "N: 10, M: 3, L: 5, expected; 4, got: " << a.timesThrown(10, 3, 5) << "\n";
    std::cout << "N: 15, M: 4, L: 9, expected; 15, got: " << a.timesThrown(15, 4, 9) << "\n";

    return 0;
}