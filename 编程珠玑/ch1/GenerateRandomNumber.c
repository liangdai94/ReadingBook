#include"GenerateRandomNumber.h"

using namespace std;
bool GenerateRandom(int num, string fileName){
        ofstream outfile;

        try{
                outfile.open(fileName);
                if(!outfile){
                        throw "open file error";
                }

                srand(static_cast<unsigned int>(time(nullptr)));

                while(num--){
                        outfile << rand() << endl;
                }
        }
        catch(const char * msg){
                cout << msg << endl;
                return false;
        }

        return true;
}
