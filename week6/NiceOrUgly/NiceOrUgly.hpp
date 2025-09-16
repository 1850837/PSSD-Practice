#ifndef NICEORUGLY_HPP
#define NICEORUGLY_HPP

#include <string>
#include <iostream>
using namespace std;

class NiceOrUgly{
    public:
    string describe(string s){
        //case where s is little
        if (s.size() <= 2){
            return "NICE";
        }
        
        //creating the string to be used
        string betterS = "";
        for (int i = 0; i < s.size(); i++){
            if (s[i] == '?'){
                betterS.push_back('?');
            }
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
                betterS.push_back('v');
            }
            else {
                betterS.push_back('c');
            }
        }

        string lastThree;
        string lastFive;
        string lastSeven;
        bool nice = true;
        bool ugly = false;
        bool uglyQuest = false;

        string bestS = "";

        //going through the string
        for (int i = 0; i < s.size(); i++){

            if (betterS[i] == 'c' || betterS[i] == 'v'){
                bestS.push_back(betterS[i]);
            }
            if (betterS[i] == '?'){
                //checking if a particular value is required for niceness
                if (i >=2){
                    if (bestS[i-1] == bestS[i-2] && bestS[i-1] == 'v'){
                        bestS.push_back('c'); //avoiding 3 vowels
                    }

                    if (i >= 4){
                        if (bestS[i-1] == bestS[i-2] && bestS[i-2] == bestS[i-3] && bestS[i-3] == bestS[i-4] && bestS[i-4] == 'c'){
                            bestS.push_back('v');   //avoiding 5 consonants
                        }
                    }

                    if (bestS.size() < i + 1){
                        bestS.push_back('?');
                    }
                }
                else {
                    bestS.push_back('?');
                }
            }

            //checking for strings of three vowels
            if (i >= 2){
                lastThree = betterS.substr(i-2,3);
                if (lastThree == "vvv"){
                    ugly = true;
                }
                if (lastThree == "?vv" || lastThree == "v?v" || lastThree == "vv?" || 
                    lastThree == "??v" || lastThree == "v??" || lastThree == "?v?" || lastThree == "???"){
                    uglyQuest = true;
                }
            }

            //checking for strings of five consonants
            if (i >= 4){
                lastFive = betterS.substr(i-4,5);

                if (lastFive == "ccccc"){
                    ugly = true;
                }
                if (lastFive == "?cccc" || lastFive == "c?ccc" || lastFive == "cc?cc" || lastFive == "ccc?c" || lastFive == "cccc?" ||
                lastFive == "??ccc" || lastFive == "c??cc" || lastFive == "cc??c" || lastFive == "ccc??" || 
                lastFive == "???cc" || lastFive == "c???c" || lastFive == "cc???" ||
                lastFive == "????c" || lastFive == "c????" || lastFive == "?????"){
                    uglyQuest = true;
                }
            }

            //checking for the impossible seven
            if (i >= 6){
                lastSeven = betterS.substr(i-6,7);

                if (lastSeven == "vv?cccc" || lastSeven == "cccc?vv"){
                    nice = false;
                }
            }

            //Now again but in the best case!

            //checking for strings of three vowels
            if (i >= 2){
                lastThree = bestS.substr(i-2,3);
                if (lastThree == "vvv"){
                    ugly = true;
                }
                if (lastThree == "?vv" || lastThree == "v?v" || lastThree == "vv?" || 
                    lastThree == "??v" || lastThree == "v??" || lastThree == "?v?" || lastThree == "???"){
                    uglyQuest = true;
                }
            }

            //checking for strings of five consonants
            if (i >= 4){
                lastFive = bestS.substr(i-4,5);

                if (lastFive == "ccccc"){
                    ugly = true;
                }
                if (lastFive == "?cccc" || lastFive == "c?ccc" || lastFive == "cc?cc" || lastFive == "ccc?c" || lastFive == "cccc?" ||
                lastFive == "??ccc" || lastFive == "c??cc" || lastFive == "cc??c" || lastFive == "ccc??" || lastFive == "c?c?c" ||
                lastFive == "?c?cc" || lastFive == "cc?c?" ||
                lastFive == "???cc" || lastFive == "c???c" || lastFive == "cc???" || lastFive == "c??c?" || lastFive == "c?c??" ||
                lastFive == "????c" || lastFive == "c????" || lastFive == "?????"){
                    uglyQuest = true;
                }
            }

            //checking for the impossible seven
            if (i >= 6){
                lastSeven = bestS.substr(i-6,7);

                if (lastSeven == "vv?cccc" || lastSeven == "cccc?vv"){
                    nice = false;
                }
            }
        }

        // cout << "\nbetterS = " << betterS << "\n";
        // cout << "betterS.size = " << betterS.size() << "\n";
        // cout << "BestS = " << bestS << "\n";
        // cout << "bestS.size = " << bestS.size() << "\n";
        // cout << "nice = " << nice << " ugly = " << ugly << " uglyQuest = " << uglyQuest << "\n";

        //evaluating the results
        if (nice == true && ugly == false && uglyQuest == false){
            return "NICE";
        }
        if (nice == true && uglyQuest == true && ugly == false){
            return "42";
        }
        if (nice == false && ugly == true && uglyQuest == true){
            return "UGLY";
        }
        if (nice == false && ugly == true && uglyQuest == false){
            return "UGLY";
        }
        if (nice == false && ugly == false && uglyQuest == true){
            return "UGLY";
        }
        if (nice == true && ugly == true && uglyQuest == false){
            return "UGLY";
        }
        if (nice == true && ugly == true && uglyQuest == true){
            return "UGLY";
        }
        return "shit";
    }
};

#endif