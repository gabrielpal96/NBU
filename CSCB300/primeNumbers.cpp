//1b
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>


using namespace std;
int main() {


	//    int seed(80739 % 100);
	int randNum;
	//int counter = 0;
	int counterPrime = 0;
	srand(80739 % 100);
	bool f = false;
	for (int i = 1; i <= 10000; i++) {


		randNum = rand() % 1000;
		//counterPrime = 0;
		f = false;
		if (randNum != 0) {
			for (int j = 2; j < randNum; j++) {

				if (randNum % j == 0) {

					// counterPrime--;}
					f = true;
				}
			}
		}
		if (!f && randNum != 0 && randNum != 1) {
			counterPrime++;
			//cout<<randNum<<" ";
		}
	}
	cout << counterPrime << endl;
	return 0;
}