#ifndef ARROWS_HPP
#define ARROWS_HPP

#include <string>
#include <iostream>
using namespace std;

class Arrows {
    public:
    int longestArrow(string s){
        int longest = 0;
        int counter = 0;
        bool counting = false;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '<'){
                counting = true;
                if (counter > longest){
                    longest = counter;
                }
                counter = 1;
            }

            else if (s[i] == '-' || s[i] == '='){
                if (i != 0){
                    if (s[i-1] == s[i] || s[i-1] == '<'){
                        if (counting == true){
                            counter++;
                        }
                    }

                    else {
                        if (counter > longest){
                            longest = counter;
                        }
                        counter = 0;
                        counting = false;
                    }
                }
            }

            else {
                if (counter > longest) {
                    longest = counter;
                }
                counter = 0;
                counting = false;
            }

            if (counter > longest) {
                longest = counter;
            }
        }

        if (counter > longest) {
            longest = counter;
        }
        counter = 0;
        counting = false;

        for (int i = s.size() - 1; i >= 0; i--){
            if (s[i] == '>'){
                counting = true;
                if (counter > longest){
                    longest = counter;
                }
                counter = 1;
            }

            else if (s[i] == '-' || s[i] == '='){
                if (i != s.size() - 1){
                    if (s[i+1] == s[i] || s[i+1] == '>'){
                        if (counting == true){
                            counter++;
                        }
                    }

                    else {
                        if (counter > longest){
                            longest = counter;
                        }
                        counter = 0;
                        counting = false;
                    }
                }
            }

            else {
                if (counter > longest) {
                    longest = counter;
                }
                counter = 0;
                counting = false;
            }

            if (counter > longest) {
                longest = counter;
            }
        }
        
        if (longest == 0){
            return -1;
        }
        return longest;
    }
};

#endif