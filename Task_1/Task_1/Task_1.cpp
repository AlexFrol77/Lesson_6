#include<iostream>
#include"myMath.h"

int main(int argc, char** argv) {

	setlocale(LC_ALL, "ru");

	int a,
		b,
		oper;
	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	std::cin >> oper;
	std::cout << a << " " << Oper(oper) << " " << b << " = " << calc(a, b, oper) << std::endl;
	return 0;
}