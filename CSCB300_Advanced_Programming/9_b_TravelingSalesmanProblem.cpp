/*
9b. [5.4.4, стр. 282] tsp.c
Да се реши задачата за търговския пътник (Хамилтонов цикъл с минимална дължина) за неориентиран граф с не повече от 40 върха.

Вход:
На входа се задава най-напред броя на ребрата на неориентиран граф, а после списък от тези ребра и техните дължини. Списъкът се състои от не повече от 1000 ребра, зададени с двойки номера на върхове и дължината на реброто. Върховете на графа са номерирани с последователни цели положителни числа, започвайки от 1. Входът съдържа много примери.

Изход:
За всеки пример на един ред се отпечатва списък (редица) от върховете на графа, получени при обхождането му. Първият член на редицата трябва да бъде 1. Ако не съществува цикъл се отпечатва -1.

Пример:
5
1 2 1
2 3 2
1 4 2
2 4 4
3 4 1
3
1 2 1
2 3 2
1 4 2

Решение на примера:
1 2 3 4
-1
*/

#include <stdio.h>
#include<iostream>
using namespace std;
#define MAXN 150

unsigned n ;
int A[MAXN][MAXN];

const int MAX_VALUE = 10000;

char used[MAXN];
unsigned minCycle[MAXN], cycle[MAXN];
int curSum, minSum;
/*
5
1 2 1 2 3 2 1 4 2 2 4 4 3 4 1
*/
void printCycle(void)
{
	unsigned i;
	int flag = 0;
	for (size_t i = 0; i < n-1; i++)
	{
		if (minCycle[i] + 1 == 1)flag++;

	}
	if (flag == n-1)
	{
		cout << "-1";
	}
	else {
		cout << "1 ";
		for (size_t i = 0; i <n-1; i++) {
			cout << minCycle[i] + 1 << " ";
		}
	}
}
void hamilton(unsigned i, unsigned level)
{
	unsigned k;
	if ((0 == i) && (level > 0)) {
		if (level == n) {
			minSum = curSum;
			for (k = 0; k < n; k++) minCycle[k] = cycle[k];
		}
		return;
	}
	if (used[i]) return;
	used[i] = 1;
	for (k = 0; k < n; k++)
		if (A[i][k] && k != i) {
			cycle[level] = k;
			curSum += A[i][k];
			if (curSum < minSum) 
				hamilton(k, level + 1);
			curSum -= A[i][k];
		}
	used[i] = 0;
}

int main(void) {
	int nn;
	while (cin >> nn)
	{



		unsigned k;
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				A[i][j] = 0/*false*/;

			}
		}

		int *arr = new int[nn * 3];
		int	max = 0;
		for (size_t i = 0; i < nn * 3; i++)
		{
			cin >> arr[i];
			arr[i] -= 1;
			if (i == 0) max = arr[i];
			else if (arr[i] > max)max = arr[i];

		}
		max += 1;
		n = max;
		for (size_t i = 0; i < (nn * 3) - 1; i += 1)
		{
			A[arr[i]][arr[i + 1]] = 1/* true*/;
		}

		for (k = 0; k < n; k++) used[k] = 0;
		minSum = MAX_VALUE;
		curSum = 0;
		cycle[0] = 1;
		hamilton(0, 0);
		printCycle();
		cout << endl;
		for (size_t i = 0; i < n - 1; i++)
		{
			minCycle[i] = 0;
		}
	}
	return 0;
}