//1a
/*
1а. Да се напише програма за превръщане на естествено число от запис в двоична, осмична и шестнадесетична бройни системи в запис в десетична бройна система. 

Вход:
На стандартния вход се задава редица от двойки числа (примери), като всяка двойка е на отделен ред. Първото число от двойката е основата на бройната система (може да бъде 2, 8 или 16), в която е записано второто число, което е по-малко от 106. 

Изход:
За всеки пример (двойка числа) от входа се извежда едно число на отделен ред - записа на второто число в десетична бройна система.

Пример:
2 1111
16  F
8 1

Решение на примера:
15
15
1
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <math.h>
using namespace std;
int main() {
	int input;

	while (cin >> input)
	{

		if (input == 16) {
			string hex_value;
			cin >> hex_value;
			int decimal_value1;

			std::stringstream ss1;
			ss1 << hex_value;
			ss1 >> std::hex >> decimal_value1;

			cout << decimal_value1;
		}
		else if (input == 8 || input == 2) {
			long int octnum, decnum = 0;
			int i = 0;

			cin >> octnum;
			while (octnum != 0)
			{
				decnum = decnum + (octnum % 10) * pow(input, i);
				i++;
				octnum = octnum / 10;
			}
			cout << decnum;

		}
		cout << endl;
	}

	return 0;

}