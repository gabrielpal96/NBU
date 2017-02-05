/*
6а.
Да се напише програма за бързо циклично преместване на буквите в дадена дума. 

Вход:
На входа се задава дума (низ, съдържащ само n букви от латинската азбука) и на следващия ред редица от m цели числа  k - брой на исканите циклични премествания на буквите в думата. Входът съдържа N примери.

Изход:
За всяко циклично преместване на нов ред се отпечатва получената дума.

Ограничения: 
 0 < n < 1000000
 0 < m < 1000000
-1 < k < 1000000
  0 < N < 100

Пример:
abracadabra
4 1 0
Floccinaucinihilipilification
10 20

Решение на примера:
cadabraabra
bracadabraa 
abracadabra
inihilipilificationFloccinauc
ificationFloccinaucinihilipil

Забележка: "Циклично преместване на k позиции елементите на масив m от n елемента" означава k пъти да преместим първия елемент от първо на последно място. Затова няма ограничение k < n, т.е. програмата трябва да работи и в случай k > n. 
*/

#include <iostream>
#include <string>
#include<vector>
#include <sstream>
using namespace std;

int main()
{
	string txt;
	while (cin >> txt)
	{
		int cur;
		vector<int> Vec;
		while (cin >> cur) {

			Vec.push_back(cur);
			if (cin.get() == '\n') {
				break;
			}
		}
		for (size_t i = 0; i < Vec.size(); i++)
		{
			if (Vec[i] >= Vec.size())
			{
				continue;
			}
			else if (Vec[i] == 0)
			{
				for (size_t j = 0; j < txt.size(); j++)
				{
					cout << txt[j];
				}
				cout << endl;
			}
			else {
				for (size_t j = Vec[i]; j < txt.size(); j++)
				{
					cout << txt[j];
				}
				for (size_t k = 0; k < Vec[i]; k++)
				{
					cout << txt[k];
				}
				cout << endl;
			}
		}
	}
	//	cout << endl;
	return 0;
}