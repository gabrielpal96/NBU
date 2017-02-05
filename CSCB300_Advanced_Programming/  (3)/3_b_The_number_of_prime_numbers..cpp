
/*
3b. Да се напише програма, която намира броя на простите числа в случайно генерирана редица.

Вход:
На стандартния вход са зададени не повече от 100 примери. Всеки пример се определя с две положителни цели числа s и N на един ред (s < 103, N < 109). s определя числова редица (чрез srand(s)) с дължина N, която се генерира с rand()%1000. 

Изход:
Извежда се намерения брой - за всеки пример на отделен ред.

Пример:
25 10
102 10000

Решение на примера:
3
1616

Забележка: 0 и 1 не се броят за прости числа.
Упътване: Използвайте идеята на Решето на Ератостен. Обсъжданият в часа алгоритъм е много бавен за исканата дължина на редицата. Определянето дали числото е просто трябва да става за време O(1).
*/
#include <iostream>

#include <cmath>
using namespace std;
int main() {
	const int max = 999;
	int counter = 0;
	bool arr[max + 1];
	int s;
	long long unsigned N;
	int randNum = 0;
	for (int i = 0; i < max; ++i)
		arr[i] = true;
	arr[0] = arr[1] = false;

	for (int i = 2; i< sqrt(max); i++)
	{
		if (arr[i] == true)
		{
			for (int j = 2; i*j <= max; j++) {
				arr[i*j] = false;
			}
		}
	}
	int whileCounter = 0;
	while (cin >> s >> N) {
		counter = 0;
		if (whileCounter == 100) {
			break;
		}
		whileCounter++;
		srand(s);
		for (size_t i = 0; i < N; i++)
		{
			randNum = rand() % 1000;
			if (arr[randNum]) {
				counter++;
			}
		}
		cout << counter << endl;


	}

	return 0;

}
