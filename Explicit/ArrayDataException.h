#pragma once
#include <iostream>
using namespace std;
class ArrayDataException
{
private:
	char message[50];
public:
	ArrayDataException(int i, int j, const char* mes);
	const char* GetMessage();
};