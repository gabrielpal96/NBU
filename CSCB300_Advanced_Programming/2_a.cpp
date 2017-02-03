	/*
	 2а.Обобщена редица на Фибоначи дефинираме по следния начин:
                      F(n) = aF(n-1) + bF(n-2)
за n > 2 при зададени  
                    F(1) = F(2) = 1.  
Да се напише програма за проверка дали дадено число е елемент от такава редица и ако е елемент, да се намери индексът му в редицата.

Вход:
От стандартния вход се четат последователно числата a, b,  0 < a, b < 100, броят на числата за проверка, по-малък от 10000, и самите числа в интервала [0, 1000000]. Входът съдържа по-малко от 100 примери, всеки задаващ различна обобщена редица на Фибоначи.

Изход:
За всяко проверено число на нов ред се извежда индексът му, ако числото е от съответната обобщена редица на Фибоначи или 0 - ако не е.

Пример:
1 1
4
13 14 9 5
1 2
1
341

Решение на примера:
7
0
0
5
10
*/
#include <iostream>
using namespace std;

int main()
{
	
	long long unsigned a, b;
	int counter;
	while (cin >> a >> b >> counter)
	{

		long long unsigned *arrNumbers = new long long unsigned[counter];
		for (size_t i = 0; i < counter; i++)
		{
			cin >> arrNumbers[i];
		}
		long long unsigned num1 = a;
		long long unsigned num2 = b;
		long long unsigned num_next = 1;
		const unsigned n = 10000;
		long long unsigned arrFib[n];
		unsigned *arr = new unsigned[counter];

		arrFib[0] = 1; arrFib[1] = 1;
		for (int i = 2; i<n; i++)
		{
			arrFib[i] = (a*arrFib[i - 1]) + (b * arrFib[i - 2]);
		}
		for (size_t i = 0; i < counter; i++)
		{
			arr[i] = 0;
			for (size_t j = 1; j < n; j++)
			{
				if (arrNumbers[i] == arrFib[j])
				{
					arr[i] = j + 1;
				}
			}
		}
		for (size_t i = 0; i < counter; i++)
		{
			cout << arr[i] << endl;
		}
	}
	return 0;
}