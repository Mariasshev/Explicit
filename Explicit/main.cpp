﻿/*1. +Створити Клас ArrayValueCalculator

2. +Створити метод doCalc. На вхід до методу подається двомірний рядковий масив розміром 4х4.

3. +При передачі масиву іншого розміру в метод doCalc необхідно викинути виняток ArraySizeException.

4. Метод doCalc повинен пройтися за всіма елементами масиву і перетворити в int (використовувати Integer#parseInt) 
і підсумувати. Після загального підсумовування метод повертає фінальний результат у вигляді int.

5.Якщо в якомусь елементі масиву перетворення не вдалося (наприклад, в комірці лежить символ або текст замість числа),
тоді викинути виняток ArrayDataException, з деталізацією в якому саме комірці лежать невірні дані.

6. У методі main() викликати отриманий метод, обробити можливі винятки ArraySizeException та ArrayDataException, 
та вивести результат розрахунку.

7. * Необхідно дотримуватись усіх правил збереження контексту викинутого виключення.

8. * При вилові винятків у процесі перетворення, взяти до уваги винятки, що викидаються іншими (сторонніми) методами, 
що використовуються.*/

#include "ArraySizeException.h"
#include "ArrayDataException.h"
#include "ArrayValueCalculator.h"
#include <iostream>
using namespace std;

int main() {
	try 
	{
		ArrayValueCalculator a;
		a.Input();			//if rows != 4 || cols ! = 4 ---> exception!!!
		cout << "Sum: " << a.doCalc();		//if there is a symbol(or text) ---> exception!

	}
	catch (ArraySizeException exception)
	{
		cout << exception.GetMessage() << endl;
	}
	catch (ArrayDataException dataException) {
		cout << dataException.GetMessage() << endl;
	}
}