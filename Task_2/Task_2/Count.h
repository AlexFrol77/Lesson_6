#pragma once

class Count {
public:
	Count(int temp);
	void countPlus(int& count_);
	void countMinus(int& count_);
	void print(int& count_);
private:
	int count_;
};