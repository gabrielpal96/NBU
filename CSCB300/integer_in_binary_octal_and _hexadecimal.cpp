//1a

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