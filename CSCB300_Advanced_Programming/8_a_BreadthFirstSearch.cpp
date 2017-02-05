/*
8а. [5.3.1] bfs.c
Напишете програма за обхождане на граф в ширина (BFS(1))

Вход:
На входа се задава най-напред броя на дъгите на ориентиран граф, а после списък от тези дъги. Списъкът се състои от не повече от 1000 дъги, зададени с двойки номера на върхове - начало, край. Върховете на графа са номерирани с последователни цели положителни числа, започвайки от 1.

Изход:
Отпечатва се списък (редица) от върховете на графа, получени при обхождането му в ширина. Първият член на редицата трябва да бъде 1.

Пример:
3
1 2
2 3
1 4

Решение на примера:
1 2 4 3
*/

#include<iostream>
using namespace std;

const int n = 10000;
int matrix[n][n];
int main() {
	while (true)
	{
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = 0; j < n; j++)
			{
				matrix[i][j] = 0/*false*/;

			}
		}
		int nn;
		cin >> nn;
		int *arr = new int[nn * 2];
		int	max = 0;
		for (size_t i = 0; i < nn * 2; i++)
		{
			cin >> arr[i];
			arr[i] -= 1;
			if (i == 0) max = arr[i];
			else if (arr[i] > max)max = arr[i];

		}
		for (size_t i = 0; i < (nn * 2) - 1; i += 2)
		{
			matrix[arr[i]][arr[i + 1]] = 1/* true*/;
		}
		max += 1;
		cout << arr[0]+1<<" ";
		int *proverka = new int[max];
		bool pr =true;
		int ii = 0;
		for (size_t i = 0; i < max; i++)
		{
			for (size_t j = 0; j <max; j++)
			{
				if (matrix[i][j] == 1 )
				{
					for (size_t k = 0; k < ii; k++)
					{
						if (proverka[k] == (j + 1)) { pr = false; break; }
					}
					if (pr==true)
					{
						proverka[ii] = j + 1;
						ii++;
						cout << j + 1 << " ";
					}
					pr = true;
				}
			}
		}
		cout << endl;
		delete arr;
		delete proverka;
	}
	/*
	5
	1 2 2 5 1 3 3 4 4 5
	*/
	return 0;
}