#include <iostream>
#include <string>
#include<windows.h>
#include"Count.h"

int main(int argv, char** argc) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int temp = 1;
	char oper;
	std::string answer;
	std::string answerTempBig = "Да";
	std::string answerTempSmall = "да";
	std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
	std::cin >> answer;
	if (answer == answerTempBig || answer == answerTempSmall) {   // Проверка ответа пользователя на введение начального значения
		std::cout << "Введите начальное значение счётчика: ";
		std::cin >> temp;
	} 

	Count count(temp);

	do {
		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
		std::cin >> oper;
		switch (oper) {
		case '+':
			count.countPlus();
			break;
		case '-':
			count.countMinus();
			break;
		case '=':
			count.print();
		}
	} while (oper != 'x' && oper != 'ч');

	std::cout << "До свидания!" << std::endl;

	return 0;
}
