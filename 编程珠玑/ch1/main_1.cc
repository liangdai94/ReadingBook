#include<limits.h>
#include<iostream>
#include<functional>
#include<memory>
#include<fstream>
#include<algorithm>
#include<array>
#include<vector>
#include"GenerateRandomNumber.h"

#define FILENAME "test.txt"
#define NUMSIZE 1000000
#define TMPFILE "tmp"

using namespace std;

int main(){
        GenerateRandom(NUMSIZE, FILENAME);

        fstream infile;
        try{
                infile.open(FILENAME, ios::in);
                if(!infile){
                        throw "open file error";
                }
        }
        catch(const char * msg){
                cout << msg << endl;
                return -1;
        }

        array<unsigned int, NUMSIZE/10> nums;
        int i = 0;
        int j = 0;
        unsigned int tmp;

        while(infile.peek() != EOF){
                j = 0;
                while(infile >> tmp){
                        nums[j] = tmp;
                        j++;
                        if(j >= NUMSIZE/10)
                                break;
                }

                for(; j < NUMSIZE/10; j++){
                        nums[j] = UINT_MAX;
                }

                fstream outfile;
                try{
                        outfile.open(TMPFILE + to_string(i), ios::out | ios::in);
                        if(!outfile){
                                throw "open tmp error";
                        }
                }
                catch(const char * msg){
                        cout << msg << endl;
                        return -1;
                }
                sort(nums.begin(), nums.end());
                for(auto it : nums){
                        outfile << it << endl;
                }
                outfile.close();
                i++;
                //outfile.close();
        }

        int len = i;
        unsigned int cnt = NUMSIZE;
        fstream res;

        try{
                res.open("res", ios::out);
                if(!res){
                        throw "open res error\n";
                }
        }
        catch(const char * msg){
                cout << msg;
        }

        vector<shared_ptr<fstream>> files;

        vector<unsigned int> outfileNums(len, 0);
        vector<bool> flag(len, true);
        int index = 0;
        bool mark = true;

        for(int fileindex = 0; fileindex < len; fileindex++){
                files.push_back(make_shared<fstream>());
                files[fileindex]->open(TMPFILE + to_string(fileindex), ios::out | ios::in);
                if(files[fileindex]->is_open() == false){
                        cout << "open outfile error\n";
                }
        }

        for(int fileindex = 0; fileindex < len; fileindex++){
                *files[fileindex] >> outfileNums[fileindex];
        }

        tmp = outfileNums[0];

        //cout << tmp << endl;

        do{
                for(int k = 0; k < len; k++){
                        if(flag[k] && tmp > outfileNums[k]){
                                index = k;
                                tmp = outfileNums[k];
                        }
                }

                res << tmp << endl;
                *files[index] >> tmp;

                outfileNums[index] = tmp;

                if(files[index]->fail()){
                        flag[index] = false;
                        tmp = UINT_MAX;
                }

                for_each(files.begin(), files.end(), [&](shared_ptr<fstream> file){mark &= file->eof();});
                if(mark == true){
                        break;
                }
                mark = true;
        }while(mark && --cnt);
        return 0;
}
