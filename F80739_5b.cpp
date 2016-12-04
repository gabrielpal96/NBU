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