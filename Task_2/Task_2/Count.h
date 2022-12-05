#pragma once

class Count {
public:
	Count(int temp);
	void countPlus();
	void countMinus();
	void print();
private:
	int count_;
};