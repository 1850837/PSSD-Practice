#ifndef ROCKSTAR_HPP
#define ROCKSTAR_HPP

using namespace std;

class RockStar {
    public:
    int getNumSongs(int ff, int fs, int sf, int ss){
        
        if (fs > sf){
            return ff + 2*sf + ss + 1;
        }

        if (fs == 0){
            if (ff > 0){
                return ff;
            }
            
            int a = 1;
            if (sf < a){
                a = sf;
            }

            return ss + a;
        }

        return ff + 2*fs + ss;
    }
};

#endif