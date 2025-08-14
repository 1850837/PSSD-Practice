#ifndef STRANGECOMPUTER_HPP
#define STRANGECOMPUTER_HPP

#include <string>
#include <iostream>

using namespace std;

class StrangeComputer {
    public:
    int setMemory(string mem){
        int count = 0;

        for (int i = mem.length() - 2; i >= 0; i--){
            if (mem[i] != mem[i+1]){
                count++;
            }
        }

        if (mem[0] == '0'){
            return count;
        }

        if (mem[0] == '1'){
            return count + 1;
        }

        return count;
    }
};

#endif