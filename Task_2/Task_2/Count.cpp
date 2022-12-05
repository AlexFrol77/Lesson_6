#include"Count.h"
#include<iostream>

Count::Count(int temp) : count_(temp){};

void Count::countPlus() {
	count_++;
}
void Count::countMinus() {
	count_--;
}
void Count::print() {
	std::cout << count_ << std::endl;
}