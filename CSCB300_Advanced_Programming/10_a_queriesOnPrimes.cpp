/*
10а.
Да се напише програма, която да отговаря на серия от различни типове заявки върху простите числа в интервала  [2, 108]. Заявките са дадени в следната таблица:

Тип заявка    Очакван отговор
A a b             Броя на простите числа в интервала [a, b].
B k               Най-малкият прост делител на k.
C k                1 - ако k е просто число и 0 в противен случай.
D k                1 - ако k обърнато на обратно (след премахването на водещите нули, ако има такива) е просто число и 0 - в противен случай.
E k                Най-близкото просто число до k. Ако две числа са еднакво близо до k, да се изведат и двете в нарастващ ред.
F k                 Броят на простите числа, по-малки от k.
quit               Прекратяване изпълнението на програмата.

Първият символ за всяка от командите е малка или главна латинска буква. 

Пример:
A 3 7
B 176
C 95
D 11
Е 5
F 20
Е 6
quit    

Решение на примера:
3
2
0
1
5
8
5 7
*/

#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

bool primeArr[100000051];
int n = 100000050;

int main() {

	memset(primeArr, true, sizeof(primeArr));

	for (int p = 2; p*p <= n; p++)
	{
		if (primeArr[p] == true)
		{
			for (int i = p * 2; i <= n; i += p)
				primeArr[i] = false;
		}
	}

	primeArr[0] = false;
	primeArr[1] = false;

	char input;
	while (cin >> input) {


		if (input == 'A' || input == 'a') {
			int a, b;
			cin >> a >> b;
			if (a > b)
				swap(a, b);
			int cnt = 0;
			for (int i = a; i <= b; i++) {
				if (primeArr[i])
					cnt++;
			}
			cout << cnt << endl;
		}

		if (input == 'B' || input == 'b') {
			int k;
			cin >> k;
			if (primeArr[k]) {
				cout << k << endl;

			}
			else if (k == 0) {
				cout << 0 << endl;

			}
			else if (k == 1) {
				cout << 1 << endl;
			}
			else
				for (int i = 0; i < n; i++) {
					if (primeArr[i]) {
						if (k%i == 0) {
							cout << i << endl;
							break;
						}
					}
				}

		}

		if (input == 'C' || input == 'c') {
			int k;
			cin >> k;
			if (primeArr[k]) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}

		if (input == 'D' || input == 'd') {
			int k, last = 0, res = 0;
			cin >> k;

			while (k != 0) {

				last = k % 10;
				res = res * 10 + last;

				k = k / 10;
			}
			if (primeArr[res]) {
				cout << 1 << endl;
			}
			else
				cout << 0 << endl;
		}

		if (input == 'E' || input == 'e') {

			int k;
			cin >> k;
			if (primeArr[k]) {
				cout << k << endl;
			}
			else
				for (int i = 0; i < n; i++) {
					if (primeArr[k + i] && primeArr[k - i]) {
						cout << k - i << " " << k + i << endl;
						break;
					}
					else if (primeArr[k + i]) {
						cout << k + i << endl;
						break;
					}
					else if (primeArr[k - i]) {
						cout << k - i << endl;
						break;
					}
				}
		}

		if (input == 'F' || input == 'f') {
			int k, cnt = 0;
			cin >> k;
			for (int i = 2; i < k; i++) {
				if (primeArr[i])
					cnt++;
			}
			cout << cnt << endl;
		}
		if (input == 'q')
			return 0;
	}

}
