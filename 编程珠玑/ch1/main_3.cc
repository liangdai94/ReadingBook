#include<limits.h>
#include<bitset>
#include<iostream>
#include<fstream>
#include"GenerateRandomNumber.h"

#define NUMSIZE 1000000
#define MAXNUM 10000000
#define NUMFILE "num3.txt"
#define RESFILE "res3"

using namespace std;

int main(){
        GenerateRandom(NUMSIZE, NUMFILE, MAXNUM);

        bitset<MAXNUM> nums;

        fstream infile;
        fstream outfile;

        try{
                infile.open(NUMFILE, ios::in);
                outfile.open(RESFILE, ios::out);
                if(!infile | ! outfile){
                        throw "open file error\n";
                }
        }
        catch(const char * msg){
                cout << msg;
                return -1;
        }

        unsigned int tmp;
        while(!infile.eof()){
                infile >> tmp;
                nums[tmp] = 1;
        }

        for(unsigned int it = 0; it < MAXNUM; it++){
                if(nums[it] == 1){
                        outfile << it << endl;
                }
        }

        return 0;
}
