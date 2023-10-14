#pragma once
#include <iostream>
using namespace std;
class ArraySizeException
{
private:
	char message[50];
public:
	ArraySizeException(const char* mes);
	const char* GetMessage();
};

