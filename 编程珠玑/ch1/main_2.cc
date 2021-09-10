#include"limits.h"
#include"time.h"
#include<iostream>
#include<vector>
#include<functional>
#include<algorithm>
#include<fstream>
#include"GenerateRandomNumber.h"

#define NUMFILE "main2.txt"
#define RESFILE "res2.txt"
#define NUMSIZE 1000000
#define AVE     (UINT_MAX/10)

using namespace std;

int main(){
        GenerateRandom(NUMSIZE, NUMFILE);

        fstream infile;

        try{
                infile.open(NUMFILE, ios::in);
                if(infile.is_open() == false){
                        throw "open infile fail\n";
                }
        }
        catch(const char * msg){
                cout << msg;
                return -1;
        }

        unsigned int start = 0;
        unsigned int end = 0;
        int i = 0;
        unsigned int tmp;
        vector<unsigned int> nums;
        fstream outfile;

        clock_t begin = clock();

        try{
                outfile.open(RESFILE, ios::out);
                if(!outfile){
                        throw "open outfile error\n";
                }
        }
        catch(const char * msg){
                cout << msg;
                return -1;
        }

        for(i = 0; i < 10; i++){
                start = i * AVE;
                end = (i + 1) * AVE;

                nums.clear();
                while(!infile.eof()){
                        infile >> tmp;
                        if(tmp >= start && tmp < end){
                                nums.push_back(tmp);
                        }
                }

                sort(nums.begin(), nums.end());
                for(auto it:nums){
                        outfile << it << endl;
                }

                infile.seekp(0);
        }
        cout << static_cast<double>(clock() - begin)/CLOCKS_PER_SEC << endl;
        infile.close();
        outfile.close();
}
