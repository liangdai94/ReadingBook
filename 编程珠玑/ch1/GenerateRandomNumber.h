#ifndef GENERATE_RANDOM_NUMBER_H_
#define GENERATE_RANDOM_NUMBER_H_
//生成随机数
#include<ctime>
#include<iostream>
#include<fstream>
#include<random>
#include<string>

bool GenerateRandom(int num, std::string fileName);
bool GenerateRandom(int num, std::string fileName, unsigned long len);

#endif
