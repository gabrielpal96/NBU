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
