#include <iostream>
using namespace std;

int cnt = 0;
void Hanoi(int n, char from, char to, char help) {
	if (n > 1) {
		Hanoi(n - 1, from, help, to);
		cnt++;
		cout << cnt << " Move from " << from << " to " << to << endl;
		Hanoi(n - 1, help, to, from);
	}
	else {
		cnt++;
		cout << cnt << " Move from " << from << " to " << to << endl;
	}
}
int main() {
	int n;
	cout << "enter the number of discs: ";
	cin >> n;
	Hanoi(n, 'A', 'B', 'C');
	return 0;
}
