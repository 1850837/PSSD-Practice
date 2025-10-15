#ifndef BRIDGESORT_HPP
#define BRIDGESORT_HPP

#include <string>
using namespace std;

class BridgeSort{
    public:
    string sortedHand(string hand){
        string clubs = "NNNNNNNNNNNNN";
        string diamonds = "NNNNNNNNNNNNN";
        string hearts = "NNNNNNNNNNNNN";
        string spades = "NNNNNNNNNNNNN";

        string unsortedClubs = "";
        string unsortedDiamonds = "";
        string unsortedHearts = "";
        string unsortedSpades = "";

        // splitting hand into different parts
        for (int i = 0; i < hand.size(); i = i+2){
            if (hand[i] == 'C'){
                unsortedClubs.push_back(hand[i]);
                unsortedClubs.push_back(hand[i+1]);
            }
            if (hand[i] == 'D'){
                unsortedDiamonds.push_back(hand[i]);
                unsortedDiamonds.push_back(hand[i+1]);
            }
            if (hand[i] == 'H'){
                unsortedHearts.push_back(hand[i]);
                unsortedHearts.push_back(hand[i+1]);
            }
            if (hand[i] == 'S'){
                unsortedSpades.push_back(hand[i]);
                unsortedSpades.push_back(hand[i+1]);
            }
        }

        // sorting clubs
        for (int i = 1; i < unsortedClubs.size(); i = i+2){
            if (unsortedClubs[i] == '2'){
                clubs[0] = '2';
            }
            if (unsortedClubs[i] == '3'){
                clubs[1] = '3';
            }
            if (unsortedClubs[i] == '4'){
                clubs[2] = '4';
            }
            if (unsortedClubs[i] == '5'){
                clubs[3] = '5';
            }
            if (unsortedClubs[i] == '6'){
                clubs[4] = '6';
            }
            if (unsortedClubs[i] == '7'){
                clubs[5] = '7';
            }
            if (unsortedClubs[i] == '8'){
                clubs[6] = '8';
            }
            if (unsortedClubs[i] == '9'){
                clubs[7] = '9';
            }
            if (unsortedClubs[i] == 'T'){
                clubs[8] = 'T';
            }
            if (unsortedClubs[i] == 'J'){
                clubs[9] = 'J';
            }
            if (unsortedClubs[i] == 'Q'){
                clubs[10] = 'Q';
            }
            if (unsortedClubs[i] == 'K'){
                clubs[11] = 'K';
            }
            if (unsortedClubs[i] == 'A'){
                clubs[12] = 'A';
            }
        }

        // sorting diamonds
        for (int i = 1; i < unsortedDiamonds.size(); i = i+2){
            if (unsortedDiamonds[i] == '2'){
                diamonds[0] = '2';
            }
            if (unsortedDiamonds[i] == '3'){
                diamonds[1] = '3';
            }
            if (unsortedDiamonds[i] == '4'){
                diamonds[2] = '4';
            }
            if (unsortedDiamonds[i] == '5'){
                diamonds[3] = '5';
            }
            if (unsortedDiamonds[i] == '6'){
                diamonds[4] = '6';
            }
            if (unsortedDiamonds[i] == '7'){
                diamonds[5] = '7';
            }
            if (unsortedDiamonds[i] == '8'){
                diamonds[6] = '8';
            }
            if (unsortedDiamonds[i] == '9'){
                diamonds[7] = '9';
            }
            if (unsortedDiamonds[i] == 'T'){
                diamonds[8] = 'T';
            }
            if (unsortedDiamonds[i] == 'J'){
                diamonds[9] = 'J';
            }
            if (unsortedDiamonds[i] == 'Q'){
                diamonds[10] = 'Q';
            }
            if (unsortedDiamonds[i] == 'K'){
                diamonds[11] = 'K';
            }
            if (unsortedDiamonds[i] == 'A'){
                diamonds[12] = 'A';
            }
        }

        // sorting hearts
        for (int i = 1; i < unsortedHearts.size(); i = i+2){
            if (unsortedHearts[i] == '2'){
                hearts[0] = '2';
            }
            if (unsortedHearts[i] == '3'){
                hearts[1] = '3';
            }
            if (unsortedHearts[i] == '4'){
                hearts[2] = '4';
            }
            if (unsortedHearts[i] == '5'){
                hearts[3] = '5';
            }
            if (unsortedHearts[i] == '6'){
                hearts[4] = '6';
            }
            if (unsortedHearts[i] == '7'){
                hearts[5] = '7';
            }
            if (unsortedHearts[i] == '8'){
                hearts[6] = '8';
            }
            if (unsortedHearts[i] == '9'){
                hearts[7] = '9';
            }
            if (unsortedHearts[i] == 'T'){
                hearts[8] = 'T';
            }
            if (unsortedHearts[i] == 'J'){
                hearts[9] = 'J';
            }
            if (unsortedHearts[i] == 'Q'){
                hearts[10] = 'Q';
            }
            if (unsortedHearts[i] == 'K'){
                hearts[11] = 'K';
            }
            if (unsortedHearts[i] == 'A'){
                hearts[12] = 'A';
            }
        }

        // sorting spades
        for (int i = 1; i < unsortedSpades.size(); i = i+2){
            if (unsortedSpades[i] == '2'){
                spades[0] = '2';
            }
            if (unsortedSpades[i] == '3'){
                spades[1] = '3';
            }
            if (unsortedSpades[i] == '4'){
                spades[2] = '4';
            }
            if (unsortedSpades[i] == '5'){
                spades[3] = '5';
            }
            if (unsortedSpades[i] == '6'){
                spades[4] = '6';
            }
            if (unsortedSpades[i] == '7'){
                spades[5] = '7';
            }
            if (unsortedSpades[i] == '8'){
                spades[6] = '8';
            }
            if (unsortedSpades[i] == '9'){
                spades[7] = '9';
            }
            if (unsortedSpades[i] == 'T'){
                spades[8] = 'T';
            }
            if (unsortedSpades[i] == 'J'){
                spades[9] = 'J';
            }
            if (unsortedSpades[i] == 'Q'){
                spades[10] = 'Q';
            }
            if (unsortedSpades[i] == 'K'){
                spades[11] = 'K';
            }
            if (unsortedSpades[i] == 'A'){
                spades[12] = 'A';
            }
        }

        // creating the final string
        string unsorted = clubs + diamonds + hearts + spades;
        string sorted = "";

        for (int i = 0; i < unsorted.size(); i++){
            if (unsorted[i] != 'N'){

                // clubs
                if (i < 13){
                    sorted.push_back('C');
                    sorted.push_back(unsorted[i]);
                }

                // diamonds
                else if (i < 26){
                    sorted.push_back('D');
                    sorted.push_back(unsorted[i]);
                }

                // hearts
                else if (i < 39){
                    sorted.push_back('H');
                    sorted.push_back(unsorted[i]);
                }

                // spades
                else {
                    sorted.push_back('S');
                    sorted.push_back(unsorted[i]);
                }
            }
        }

        return sorted;
    }
};

#endif