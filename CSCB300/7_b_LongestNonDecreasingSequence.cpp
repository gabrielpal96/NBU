/*
7b. [8.2.7]
Да се напише програма за намиране на най-дългата ненамаляваща подредица.

Вход:
На входа се задава числото n - брой на елемнтите на редицата  и след това стойностите на самите елементи - цели числа в интервала [-10, 105].  Входът съдържа много примери.

Изход:
За всеки пример на отделен ред се отпечатва цяло число - дължината на най-дългата ненамаляваща подредица.

Пример:
6 
6 6 6 2 2 7
6 
1 1 1 1 1 2
15 
1 2 1 2 1 2 1 2 1 2 1 2 1 2 1
3
4 3 2

Решение на примера:
4
6
8
1

Бележка: Редиците са 6 6 6 7; 1 1 1 1 1 2; 1 2 2 2 2 2 2 2 (има и друга); 4.
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;

int main() {
	int n = 0;
	while (cin >> n) {

		//cin.ignore();
		int * v = new int[n];
		string line;
		
		/*while (getline(cin, line))
		{
		
			int d = 0;
			istringstream iss(line);
			int number;		
			while (iss >> number){
				v[d] = number;
				d++;
			}*/
		for (size_t i = 0; i < n; i++)
		{
			cin >> v[i];
		}

			vector<int> longestSubSequence(n);

			for (int i = n - 1; i >= 0; --i) {
				for (int j = i + 1; j < n; ++j) {
					if (v[i] <= v[j]) {
						longestSubSequence[i] = max(longestSubSequence[j], longestSubSequence[i]);
					}
				}
				++longestSubSequence[i];
				//	cout << longestSubSequence[i] << endl;
			}

			cout << *max_element(longestSubSequence.begin(), longestSubSequence.end()) << endl;
			
			//break;
		}



	//}
	return 0;
}
