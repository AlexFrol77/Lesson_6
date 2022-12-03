#include<iostream>
#include"Triangle.h"


Triangle::Triangle(int a, int b, int c, int A, int B, int C) : 
	a_(a), b_(b), c_(c), A_(A), B_(B), C_(C) { 
	Set_name("Треугольник: "); 
}


	void Triangle::Set_name(std::string name) {
		name_ = name;
	}

	int Triangle::Get_a() {
		return a_;
	}
	int Triangle::Get_b() {
		return b_;
	}
	int Triangle::Get_c() {
		return c_;
	}
	int Triangle::Get_A() {
		return A_;
	}
	int Triangle::Get_B() {
		return B_;
	}
	int Triangle::Get_C() {
		return C_;
	}
	std::string Triangle::GetName() {
		return name_;
	}

	void Triangle::Print() {
		std::cout << GetName() << std::endl;
		std::cout << "Стороны: " << "a=" << Get_a() << " " << "b=" << Get_b() << " " << "c=" << Get_c() << std::endl;
		std::cout << "Углы: " << "A=" << Get_A() << " " << "B=" << Get_B() << " " << "C=" << Get_C() << std::endl;
		std::cout << std::endl;
	}
