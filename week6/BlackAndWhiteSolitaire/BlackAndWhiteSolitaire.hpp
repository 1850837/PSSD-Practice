#ifndef BLACKANDWHITESOLITAIRE_HPP
#define BLACKANDWHITESOLITAIRE_HPP

#include <string>
#include <iostream>
using namespace std;

class BlackAndWhiteSolitaire{
    public:
    int minimumTurns(string cardFront){
        string currentString = "";
        int firstCount = 0;
        int secondCount = 1;

        //pass 1
        currentString.push_back(cardFront[0]);

        for (int i = 1; i < cardFront.size(); i++){
            if (cardFront[i] != currentString[i-1]){
                currentString.push_back(cardFront[i]);
            }
            else {
                firstCount++;
                if (cardFront[i] == 'B'){
                    currentString.push_back('W');
                }
                else {
                    currentString.push_back('B');
                }
            }
        }

        //pass 2
        currentString = "";

        if (cardFront[0] == 'W'){
            currentString.push_back('B');
        }
        else{
            currentString.push_back('W');
        }

        for (int i = 1; i < cardFront.size(); i++){
            if (cardFront[i] != currentString[i-1]){
                currentString.push_back(cardFront[i]);
            }
            else {
                secondCount++;
                if (cardFront[i] == 'B'){
                    currentString.push_back('W');
                }
                else {
                    currentString.push_back('B');
                }
            }
        }

        //returning appropriate val
        if (firstCount > secondCount){
            return secondCount;
        }
        return firstCount;

    }
};

#endif