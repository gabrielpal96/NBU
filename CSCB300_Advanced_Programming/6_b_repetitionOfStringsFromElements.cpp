#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	int br = 0;
	while (cin >> n)
	{
		string pr;
		string * arr = new string[n];
		for (size_t i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (size_t i = 0; i < n; i++)
		{
			for (size_t j = i + 1; j <n; j++)
			{
				if (arr[i] == arr[j])
				{
					br++;
				}
			}
			if (br + 1 > n / 2 && pr != arr[i])
			{
				pr = arr[i];
				cout << arr[i] << endl;
			}br = 0;
		}
	}

	return 0;
}