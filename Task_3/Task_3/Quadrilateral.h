#pragma once
#include<string>

class Quadrilateral {
private:
	std::string name_;
	int a_,
		b_,
		c_,
		d_,
		A_,
		B_,
		C_,
		D_;
public:
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void Set_name(std::string name);
	int Get_a();
	int Get_b();
	int Get_c();
	int Get_d();
	int Get_A();
	int Get_B();
	int Get_C();
	int Get_D();
	std::string Get_name();
	void Print();
};