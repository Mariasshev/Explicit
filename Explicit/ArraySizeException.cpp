#include "ArraySizeException.h"
#include <iostream>
using namespace std;

ArraySizeException::ArraySizeException(const char* mes)
{
	strcpy_s(message, mes);
}

const char* ArraySizeException::GetMessage()
{
	return message;
}
