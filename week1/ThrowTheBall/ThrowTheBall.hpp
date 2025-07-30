#ifndef THROWTHEBALL_HPP
#define THROWTHEBALL_HPP

#include <vector>
using namespace std;

class ThrowTheBall {
    public:
    int timesThrown(int N, int M, int L){
        int count = 0;
        int playerTracker = 0;              //start with player 1, who is at element 0
        vector<int> players = {1};

        for (int i = 0; i < N - 1; i++){    //creating the array of players
            players.push_back(0);
        }

        while (players[playerTracker] < M){
            //checking if even
            if (players[playerTracker]%2 == 0){
                playerTracker = playerTracker + L;
            }
            else {  //or odd
                playerTracker = playerTracker - L;
            }

            //ensuring it's outside of the range
            if (playerTracker < 0){
                playerTracker = playerTracker + N;
            }
            else if (playerTracker > N - 1){
                playerTracker = playerTracker - N;
            }

            //tracking the catch for that player
            players[playerTracker]++;

            //tracking the catch
            count++;
        }

        return count;
    }
};

#endif