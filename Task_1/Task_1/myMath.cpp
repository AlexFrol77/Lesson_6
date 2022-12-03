#include"myMath.h"

int calc(int& a, int& b, int oper) {
	switch (oper) {
		case 1:
			return a + b;
			break;
		case 2:
			return a - b;
			break;
		case 3:
			return a * b;
			break;
		case 4:
			return a / b;
			break;
		case 5:
			int temp = a;
			for (int i = 1; i < b; i++) {
				temp = temp * a;
			}
			return temp;
			break;
	}
}

std::string Oper(int oper) {
	switch (oper) {
		case 1:
			return "+";
			break;
		case 2:
			return "-";
			break;
		case 3:
			return "*";
			break;
		case 4:
			return "/";
			break;
		case 5:
			return "в степени";
			break;
	}
}
