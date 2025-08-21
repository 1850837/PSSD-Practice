#ifndef MONSTERSVALLEY2_HPP
#define MONSTERSVALLEY2_HPP

#include <vector>
#include <iostream>
using namespace std;

class MonstersValley2 {
    public:
    int priceMin = __INT_MAX__;
    int minimumPrice(vector<int> dread, vector<int> price){
        priceMin = __INT_MAX__;

        //the first call should always be to pay, so I'm not calling the option to walk past
        recursiveMonsters(0, 0, 0, 'p', dread, price);

        return priceMin;
    }

    void recursiveMonsters(int i, long partyDread, int pricePaid, char choice, vector<int> dread, vector<int> price){
        //base case of no more monsters
        if (i >= dread.size()){
            if (pricePaid < priceMin){
                priceMin = pricePaid;
            }

            return;
        }
        
        //case where you pay
        if (choice == 'p'){
            pricePaid = pricePaid + price[i];   //updating price
            partyDread = partyDread + dread[i]; //updating party dread

            //calls
            recursiveMonsters(i+1, partyDread, pricePaid, 'p', dread, price);
            recursiveMonsters(i+1, partyDread, pricePaid, 'w', dread, price);
        }

        //case where you walk past
        if (choice == 'w'){
            //case where dread isn't big enough
            if (partyDread < dread[i]){
                return;
            }

            //calls
            recursiveMonsters(i+1, partyDread, pricePaid, 'p', dread, price);
            recursiveMonsters(i+1, partyDread, pricePaid, 'w', dread, price);
        }
    }
};

#endif