// 1. Препроцессорные директивы.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#define MODE 1 // Определили идентификатор MODE значением 1

int ADD(int a,int b) {
	return a + b;
}
int main()
{
	setlocale(LC_ALL, "RU");

#ifdef MODE
	// код, который выполняется, если макрос MODE определен
#if MODE == 0
	std::cout << "Работаю в режиме тренировки" << std::endl;
#elif MODE==1	
	std::cout << "Работаю в боевом режиме" << std::endl;
	std::cout << "Введите число 1:" << std::endl;
	int num;
	std::cin >> num;
	std::cout << "Введите число 2:" << std::endl;
	int num1;
	std::cin >> num1;
	std::cout << "Результат сложения :" << std::endl;
	std::cout << ADD(num, num1) << std::endl;
#endif
#endif

#ifndef MODE
// код, который выполняется, если макрос MODE не определен
#error "Неизвестный режим. Завершение работы." 
#endif


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
