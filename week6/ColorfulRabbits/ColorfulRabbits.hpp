#ifndef COLORFULRABBITS_HPP
#define COLORFULRABBITS_HPP

#include <vector>
#include <unordered_map>
using namespace std;

class ColorfulRabbits{
    public:
    int getMinimum(vector<int> replies){
        int counter = 0;
        unordered_map<int,int> a;

        for (int i = 0; i < replies.size(); i++){
            auto search = a.find(replies[i]);

            // if the key is not in the map
            if (search == a.end()){
                counter = counter + replies[i] + 1;
                a.insert({replies[i], replies[i]});
            }

            // if the key is in the map
            else {
                // if the value associated is 0
                if (search->second <= 0){
                    counter = counter + search->first + 1;
                    search->second = search->first;
                }

                // if the value associated is not 0
                else {
                    search->second--;
                }
            }
        }

        return counter;
    }
};

#endif