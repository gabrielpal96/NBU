/*
5b. [6.3.4, ���. 363, ���. 4, knight.c] Knight's tour
������ � ���������� ����� n (n > 4) � �������� �������� ����� � ������� n x n ������. �� �� ������ ��������� �� ������� � ���� �� ����. 
����� ������ ������ �� ���� �������� ����� ������, ���� ���������� ������� �� ���������� ������������� �������� ������ �� �������.

����:
�� ����� �� ������ ������� n (2 < n < 10) � ������������ �� ��������� ������ (����������� �� ���� ����� �������). ������� ��� ���� � � ���������� (1,1).
������ ������� ����� �������.

�����:
�� ����� ������ �� ��������� ������� (������� n x n) � �������� - ��������� ������ �� �������� �� ����. ��������� �� ������� � ���� ������ ���. 
��� �������� ���� �������, �� �� �������� ������ �������.

������:
6 1 1

������� �� �������:
10 27  6 19 16 25
7 20  9 26  5 18
28 11  4 17 24 15
21  8 23 32  3 34
12 29  2 35 14 31
1 22 13 30 33 36

�������. ���� ��������� �� � ����������! �� ������� ��� n=8 �� ����� ������ �����!
*/
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int movesOnTable[2][8] = { { 1, 1, -1, -1, 2, -2, 2, -2 },{ 2, -2, 2, -2, 1, 1, -1, -1 } };


bool ifMovingCorrect(int x, int y, int N, int ** table)
{
	if ((x >= 0 && x < N && y >= 0 && y<N) && (table[x][y] == 0))
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool knightTour(int x, int y, int r, int N, int ** table)
{
	table[x][y] = r;
	if (r == N*N)
	{
		return true;
	}
	else
	{
		for (int i = 0; i < 8; i++)
		{
			{
				if ((ifMovingCorrect(x + movesOnTable[0][i], y + movesOnTable[1][i], N, table)) == true)
				{
					if ((knightTour(x + movesOnTable[0][i], y + movesOnTable[1][i], r + 1, N, table)) == true)
					{
						return true;
					}
				}
			}
		}
		table[x][y] = 0;
	}
	return false;
}
int main()
{
	int n = 0, x = 0, y = 0;
	while (cin >> n >> x >> y) {
		x = n - x;
		y = y - 1;
		int  ** table = new int*[n];
		for (size_t i = 0; i < n; ++i)
		{
			table[i] = new int[n];
		}
		for (size_t i = 0; i < n; i++)
		{
			for (size_t k = 0; k < n; k++)
			{
				table[i][k] = 0;
			}
		}

		knightTour(x, y, 1, n, table);
		for (int i = 0; i<n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				printf("%3u", table[i][j]);
			}
			cout << endl;
		}
	}
	return 0;
}