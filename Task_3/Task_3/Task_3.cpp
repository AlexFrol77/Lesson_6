#include<iostream>
#include"Triangle.h"
#include"RightTr.h"
#include"IsoscelesTr.h"
#include"EquilateralTr.h"
#include"Quadrilateral.h"
#include"Rectangle.h"
#include"Square.h"
#include"Parallelogram.h"
#include"Rhomb.h"

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "ru");

	Triangle triangle(10, 20, 30, 40, 50, 60);
	triangle.Print();
	RightTr rightTr(50, 60, 70, 50, 60);
	rightTr.Print();
	IsoscelesTr isosscelesTr(10, 20, 50, 70);
	isosscelesTr.Print();
	EquilateralTr equilateralTr(34);
	equilateralTr.Print();

	Quadrilateral quadrilateral(10, 20, 30, 40, 50, 60, 70, 80);
	quadrilateral.Print();
	Rectangle rectangle(35, 45);
	rectangle.Print();
	Square square(97);
	square.Print();
	Parallelogram parallelogram(100, 200, 50, 60);
	parallelogram.Print();
	Rhomb rhomb(102, 95, 93);
	rhomb.Print();

	return 0;
}