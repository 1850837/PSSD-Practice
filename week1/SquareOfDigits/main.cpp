#include "SquareOfDigits.hpp"
#include <iostream>

int main(){
    SquareOfDigits a;

    std::cout << "Data: {'12','34'}, expected; 1, got: " << a.getMax({"12","34"}) << "\n";
    std::cout << "Data: {'1255','3455'}, expected; 4, got: " << a.getMax({"1255","3455"}) << "\n";
    std::cout << "Data: {'42101','22100','22101'}, expected; 9, got: " << a.getMax({"42101","22100","22101"}) << "\n";
    std::cout << "Data: that long shit, expected; 49, got: " << 
    a.getMax({"9785409507","2055103694","0861396761","3073207669","1233049493","2300248968","9769239548","7984130001","1670020095","8894239889","4053971072"}) << "\n";

    return 0;
}