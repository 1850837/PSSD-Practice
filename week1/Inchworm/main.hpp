#include "inchworm.hpp"
#include <iostream>

int main(){
    Inchworm a;

    std::cout << "Branch: 11, rest: 2, leaf: 4, expecting: 3, got: " << a.lunchtime(11, 2, 4) << "\n";
    std::cout << "Branch: 12, rest: 6, leaf: 4, expecting: 2, got: " << a.lunchtime(12, 6, 4) << "\n";
    std::cout << "Branch: 20, rest: 3, leaf: 7, expecting: 1, got: " << a.lunchtime(20, 3, 7) << "\n";
    std::cout << "Branch: 21, rest: 3, leaf: 7, expecting: 2, got: " << a.lunchtime(21, 3, 7) << "\n";
    std::cout << "Branch: 15, rest: 16, leaf: 5, expecting: 1, got: " << a.lunchtime(15, 16, 5) << "\n";
    std::cout << "Branch: 1000, rest: 3, leaf: 7, expecting: 48, got: " << a.lunchtime(1000, 3, 7) << "\n";
    std::cout << "Branch: 1000, rest: 7, leaf: 3, expecting: 48, got: " << a.lunchtime(1000, 7, 3) << "\n";  

    return 0;
}