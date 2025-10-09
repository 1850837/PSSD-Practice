#include "SimpleDuplicateRemover.hpp"
#include <iostream>
using namespace std;

int main(){

    SimpleDuplicateRemover a;


    vector<int> b = a.process({1,5,5,1,6,1});
    cout << "Expecting: {5, 6, 1 }, recieved: {";
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "\n";

    b = a.process({2,4,2,4,4});
    cout << "Expecting: {2, 4 }, recieved: {";
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "\n";

    b = a.process({6,6,6,6,6,6});
    cout << "Expecting: {6 }, recieved: {";
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "\n";

    b = a.process({1,2,3,4,2,2,3});
    cout << "Expecting: {1, 4, 2, 3 }, recieved: {";
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "\n";

    b = a.process({100,100,100,99,99,99,100,100,100});
    cout << "Expecting: {99, 100 }, recieved: {";
    for (int i = 0; i < b.size(); i++){
        cout << b[i] << ", ";
    }
    cout << "\n";


    return 0;
}