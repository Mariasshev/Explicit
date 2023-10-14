#pragma once
#include <iostream>
#include <string>
using namespace std;

class ArrayValueCalculator
{
public:
	int rows;
	int cols;
	string** arr;
public:
	ArrayValueCalculator();
	ArrayValueCalculator(int r, int c);
	void Input();
	int doCalc();
	int GetRows() {
		return rows;
	}
	int GetCols() {
		return cols;
	}
};

