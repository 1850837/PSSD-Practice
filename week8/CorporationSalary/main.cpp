#include "CorporationSalary.hpp"
#include <iostream>
using namespace std;

int main() {

    CorporationSalary a;

    cout << "Expecting: 1, recieved: " << a.totalSalary({"N"}) << "\n";
    cout << "Expecting: 5, recieved: " << a.totalSalary({"NNYN","NNYN","NNNN","NYYN"}) << "\n";
    cout << "Expecting: 17, recieved: " << a.totalSalary({"NNNNNN",
 "YNYNNY",
 "YNNNNY",
 "NNNNNN",
 "YNYNNN",
 "YNNYNN"}) << "\n";
    cout << "Expecting: 8, recieved: " << a.totalSalary({"NYNNYN",
 "NNNNNN",
 "NNNNNN",
 "NNYNNN",
 "NNNNNN",
 "NNNYYN"}) << "\n";
    cout << "Expecting: 4, recieved: " << a.totalSalary({"NNNN",
 "NNNN",
 "NNNN",
 "NNNN"}) << "\n";

    return 0;
}