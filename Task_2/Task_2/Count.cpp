#include"Count.h"
#include<iostream>

Count::Count(int temp) : count_(temp){};

void Count::countPlus(int& count_) {
	count_++;
}
void Count::countMinus(int& count_) {
	count_--;
}
void Count::print(int& count_) {
	std::cout << count_ << std::endl;
}