#ifndef COUNTEXPRESSIONS_HPP
#define COUNTEXPRESSIONS_HPP

#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <regex>
using namespace std;

class CountExpressions{
    public:
    vector<string> validExpressions;

    int calcExpressions(int x, int y, int val){
        validExpressions = {};

        // doing a first
        recursiveCall(to_string(x), {x}, {}, "a", x, y, val);

        // doing c first
        recursiveCall(to_string(y), {y}, {}, "c", x, y, val);

        return validExpressions.size();
    }

    void recursiveCall(string current, vector<int> numbers, vector<int> operations, string choices, int ab, int cd, int val){

        // base case: all of a, b, c and d are present
        if (choices.find('a') != string::npos && choices.find('b') != string::npos && choices.find('c') != string::npos && choices.find('d') != string::npos){

            // testing
            // cout << "current = " << current << " choices " << choices;

            // evaluate the value
            int currentCalc = numbers[0];

            // cout << "numbers = " << numbers[0] << " " << numbers[1] << " " << numbers[2] << " " << numbers[3];

            for (int i = 1; i < 4; i++){
                if (operations[i-1] == '+'){
                    currentCalc = currentCalc + numbers[i];
                }
                if (operations[i-1] == '-'){
                    currentCalc = currentCalc - numbers[i];
                }
                if (operations[i-1] == 'x'){
                    currentCalc = currentCalc * numbers[i];
                }

                // if (current == "48x48--65x-65"){
                //     cout << "currentCalc = " << currentCalc << "\n";
                // }
            }

            // cout << " currentCalc = " << currentCalc << "\n";

            // if correct, add to vector
            // CHECK IF IT'S THE SAME AS ANY OTHERS!!
            if (currentCalc == val){
                validExpressions.push_back(current);
            }

            // return
            return;
        }

        // recursive calls: the case where the last choice was an operation
        if (choices[choices.size() - 1] == '+' || choices[choices.size() - 1] == '-' || choices[choices.size() - 1] == 'x'){

            // if a hasn't been done
            if (choices.find('a') == string::npos){
                vector<int> e = numbers;
                e.push_back(ab);
                recursiveCall(current + to_string(ab), e, operations, choices + 'a', ab, cd, val);
            }

            // if a has been done but b hasn't
            if (choices.find('a') != string::npos && choices.find('b') == string::npos){
                vector<int> e = numbers;
                e.push_back(ab);
                recursiveCall(current + to_string(ab), e, operations, choices + 'b', ab, cd, val);
            }

            // if c hasn't been done
            if (choices.find('c') == string::npos){
                vector<int> e = numbers;
                e.push_back(cd);
                recursiveCall(current + to_string(cd), e, operations, choices + 'c', ab, cd, val);
            }

            // if c has been done but d hasn't
            if (choices.find('c') != string::npos && choices.find('d') == string::npos){
                vector<int> e = numbers;
                e.push_back(cd);
                recursiveCall(current + to_string(cd), e, operations, choices + 'd', ab, cd, val);
            }
        }
        // recursive calls: the case where the last choice was a number
        else {
            vector<int> e = operations;
            e.push_back('+');

            recursiveCall(current + '+', numbers, e, choices + '+', ab, cd, val);

            e.pop_back();
            e.push_back('-');

            recursiveCall(current + '-', numbers, e, choices + '-', ab, cd, val);

            e.pop_back();
            e.push_back('x');

            recursiveCall(current + 'x', numbers, e, choices + 'x', ab, cd, val);
        }

        return;
    }
};

#endif