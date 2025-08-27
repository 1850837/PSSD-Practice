#include "ElevatorLimit.hpp"
#include <iostream>
using namespace std;

int main(){

    ElevatorLimit a;
    vector<int> result;

//     result = a.getRange({1,0}, {0,1}, 1);
//     cout << "Expecting: {0,0}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }
    
//     result = a.getRange({1,0}, {0,1}, 2);
//     cout << "Expecting: {0,1}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }
    
//     result = a.getRange({0,1}, {1,0}, 1);
//     cout << "Expecting: {1,1}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }

//     result = a.getRange({0,2}, {1,0}, 1);
//     cout << "Expecting: {}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }

//     result = a.getRange({6, 85, 106, 1, 199, 76, 162, 141}, {38, 68, 62, 83, 170, 12, 61, 114}, 668);
//     cout << "Expecting: {223,500}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }

//     result = a.getRange({179, 135, 104, 90, 97, 186, 187, 47, 152, 100, 119, 28, 193, 11, 103, 100,
//  179, 11, 80, 163, 50, 131, 103, 50, 142, 51, 112, 62, 69, 72, 88, 3, 162,
//  93, 190, 85, 79, 86, 146, 71, 65, 131, 179, 119, 66, 111}, {134, 81, 178, 168, 86, 128, 1, 165, 62, 46, 188, 70, 104, 111, 3, 47, 144,
//  69, 163, 21, 101, 126, 169, 84, 146, 165, 198, 1, 65, 181, 135, 99, 100,
//  195, 171, 47, 16, 54, 79, 69, 6, 97, 154, 80, 151, 76}, 954);
//     cout << "Expecting: {453,659}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }

//     result = a.getRange({2}, {3}, 2);
//     cout << "Expecting: {}, recieved: {";
//     if (result.size() > 0){
//         cout << result[0] << "," << result[1] << "}\n";
//     }
//     else {
//         cout << "\n";
//     }

    result = a.getRange({295,752,84,439,607,581}, {558,664,644,2,564,451}, 948);
    cout << "Expecting: {927,948}, recieved: {";
    if (result.size() > 0){
        cout << result[0] << "," << result[1] << "}\n";
    }
    else {
        cout << "}\n";
    }


    return 0;
}