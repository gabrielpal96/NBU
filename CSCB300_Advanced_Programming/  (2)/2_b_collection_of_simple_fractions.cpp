/*
2b. Да се напише програма за събиране на прости дроби. Резултатът да се представи като несъкратима дроб.

Стандартен вход:
Всеки пример се задава със сума на две дроби на отделен ред:  m/n +  p/q, където m,  n, p, q са естествени числа, по-малки от 10000 . Входът съдържа няколко примера.
Стандартен изход:
За всеки пример на изхода се записва сумата на двете дроби като несъкратимата дроб по същия начин, както зададените на входа дроби. Когато решението е цяло число, то се записва по нормалния начин.

Пример:
1/2 + 1/3
10/4 + 2/4 

Решение на примера:
5/6
3
*/
#include <iostream>
using namespace std;

int nod(int a, int b)
{

	int r;
	while (b != 0)
	{
		r = a%b;
		a = b;
		b = r;
	}
	return a;
}

int nok(int a, int b)
{
	int nokab = (a*b) / nod(a, b);
	return nokab;
}
int i = 1;
void print(int a, int b) {
	int nodd = nod(a, b);
	a = a / nodd;
	b = b / nodd;
	if (b == 1)
	{
		cout << a << endl;
	}
	else if (b == 0)
	{
		cout << "0" << endl;
	}
	else {
		cout << a << "/" << b << endl;
	}
}

int main() {
		cout<<"test print"<<endl;
	int m, n, p, q;
	char symbol, symbol1, symbol2;
	int sum;
	int del;
	while (cin >> m >> symbol1 >> n >> symbol2 >> p >> symbol >> q)
	{

		if (n == q)
		{
			sum = m + p;
			print(sum, n);
		}
		else	if (n != q)
		{
			int x, x1;
			del = nok(q, n);
			x = del / n;
			x1 = del / q;
			sum = (m*x) + (p*x1);
			print(sum, del);
		}
	}
	return 0;
}