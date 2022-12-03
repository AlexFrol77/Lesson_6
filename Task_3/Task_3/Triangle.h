#pragma once
#include<string>

class Triangle {
private:
	std::string name_;
	int a_,
		b_,
		c_,
		A_,
		B_,
		C_;
public:

	Triangle(int a, int b, int c, int A, int B, int C);
	void Print();
	int Get_a();
	int Get_b();
	int Get_c();
	int Get_A();
	int Get_B();
	int Get_C();
	void Set_name(std::string name);
	std::string GetName();
protected:
	
};