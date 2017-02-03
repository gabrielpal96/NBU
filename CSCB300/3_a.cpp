/*
3а.
Нека са дадени числата a1, a2, ..., an. Да се поставят операции "+" и "-" между числата ai  и ai+1 за i = 1, 2,  ..., n-1 така, че резултатът след пресмятане на получения израз да бъде равен на зададено число b (1 < n < 20).

Вход:
На входа се задават редици от n + 1 числа a1, a2, ..., an, b - всяка редица на отделен ред. Всички числа са цели в интервала [1, 1000].

Изход:
За всяка редица от входа се отпечатва един израз със стойност b. Ако не може да се получи тази стойност,  да се остави празен ред.

Примерен вход:
1 1 0
1 2 3 4 5 6 7 8 0
3 4 2
30 20 40 10

Решение за примерния вход:
1-1=0
1+2+3+4-5-6-7+8=0

30+20-40=10
*/
#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int b;
bool recur(int idx, vector<int> &Vec)
{
	if (idx == Vec.size() - 1) {
		int sum = 0;
		for (int i = 0; i<Vec.size() - 1; i++) {
			sum += Vec[i];
		}
		if (sum == b)
			return true;
		return false;
	}
	Vec[idx] *= -1;
	if (recur(idx + 1, Vec) == true)
		return true;
	Vec[idx] *= -1;

	if (recur(idx + 1, Vec))
		return true;

	return false;
}
int main()
{
	string line;
	while (getline(cin, line)) {
		if (line == "")
			break;

		stringstream ss(line);
		int cur;
		vector<int> Vec;

		while (ss >> cur) {
			Vec.push_back(cur);
		}
		b = Vec[Vec.size() - 1];
		if (recur(1, Vec)==false)
		{
			cout << endl;
		}
		else {
			cout << Vec[0] << "";
			for (int i = 1; i < Vec.size() - 1; i++) {
				if (Vec[i] > 0) {
					cout << "+";
				}
				cout << Vec[i] << "";
			}

			cout << "=" << Vec[Vec.size() - 1] << endl;
		}
	}
	return 0;
}
