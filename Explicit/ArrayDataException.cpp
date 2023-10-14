#include "ArrayDataException.h"
#include <iostream>
using namespace std;

ArrayDataException::ArrayDataException(int i, int j, const char* mes)
{
	strcpy_s(message, mes);
	cout << "In arr[" << i << "][" << j << "] ";
}

const char* ArrayDataException::GetMessage()
{
	return message;
}
