#include<iostream>
#include"Quadrilateral.h"


Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) : 
	a_(a), b_(b), c_(c), d_(d), A_(A), B_(B), C_(C), D_(D) {
	Set_name("Четырёхугольник: ");
}
void Quadrilateral::Set_name(std::string name) {
	name_ = name;
}
int Quadrilateral::Get_a() {
	return a_;
}
int Quadrilateral::Get_b() {
	return b_;
}
int Quadrilateral::Get_c() {
	return c_;
}
int Quadrilateral::Get_d() {
	return d_;
}
int Quadrilateral::Get_A() {
	return A_;
}
int Quadrilateral::Get_B() {
	return B_;
}
int Quadrilateral::Get_C() {
	return C_;
}
int Quadrilateral::Get_D() {
	return D_;
}
std::string Quadrilateral::Get_name() {
	return name_;
}
void Quadrilateral::Print() {
	std::cout << Get_name() << std::endl;
	std::cout << "Стороны: " << "a=" << Get_a() << " " << "b=" << Get_b() << " " << "c=" << Get_c() << " " << "d=" << Get_d() << std::endl;
	std::cout << "Углы: " << "A=" << Get_A() << " " << "B=" << Get_B() << " " << "C=" << Get_C() << " " << "D=" << Get_D() << std::endl;
	std::cout << std::endl;
}