/*
4а.
Дадено е цяло положително n-цифрено число. Да се намери най-голямото n-цифрено число, което може да се получи чрез размяна на произволен брой цифри на даденото число. 

Вход:
Задава се редица от числа, по-малки от 10200.

Изход:
За всяко число от редицата, на отделен ред се отпечатва най-голямото n-цифрено число, получено по описания начин.

Пример:
100 238 

Решение на примера:
100 
832
*/
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{	
	string number;
	while (cin >> number)
	{
		int n = number.size();
		sort(number.begin(),number.begin()+n);
		for (size_t i = n-1; i < n; i--)
		{
			cout << number[i] << "";
		}cout << endl;
	}
	return 0;
}
