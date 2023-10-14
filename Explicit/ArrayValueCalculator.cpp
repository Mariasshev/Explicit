#include "ArrayValueCalculator.h"
#include <iostream>
#include <cstring>
#include "ArraySizeException.h"
#include "ArrayDataException.h"

using namespace std;

ArrayValueCalculator::ArrayValueCalculator()
{
	rows = cols = 0;
}

ArrayValueCalculator::ArrayValueCalculator(int r, int c)
{
	rows = r;
	cols = c;
	arr = new string *[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new string[cols];
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			arr[i][j] = rand() % 10;
		}
	}
}

void ArrayValueCalculator::Input()
{
	cout << "Enter rows: ";
	cin >> rows;
	cout << "Enter cols: ";
	cin >> cols;
	if (GetRows() != 4 || GetCols() != 4)
	{
		throw ArraySizeException("Wrong size!");
	}
	arr = new string * [rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new string[cols];
	}
	for (int i = 0; i < rows; i++) {
		cout << "Enter number: ";
		for (int j = 0; j < cols; j++) {
			cin >> arr[i][j];
		}
	}
}

int ArrayValueCalculator::doCalc()
{
	int result = 0;
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < cols; j++) 
		{
			for (int k = 0; k < arr[i][j].length(); k++) {
				if (!isdigit(arr[i][j][k]))
				{
					throw ArrayDataException(i, j,"there is a symbol!" );
				}
			}
			result += stoi(arr[i][j]);
		}
	}
	return result;
}
