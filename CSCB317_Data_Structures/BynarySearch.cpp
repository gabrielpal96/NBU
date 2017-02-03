
#include <iostream>

using namespace std;

int dix(int arr[], int x, int l, int d){

	int mid = (l + d) / 2;
	if (arr[mid] == x)
	{
		return arr[mid];
	}
	else if(d-l<=1){
		cout << "error";
		return -1;
	}
		else
		{
			if (arr[mid] > x){
				return dix(arr, x, l, mid);
			}
			else
			{
				return dix(arr, x, mid, d);
			}
		}
	}
int main()
{
	for (size_t i = 0; i < 7; i++)
	{
		int x;
		cout << "enter x= ";
		cin >> x;
		int arr[] = { 2, 5, 7, 9, 11, 15, 19,21 };
		cout << "x= " << dix(arr, x, 0, 8) << endl;
	}


	return 0;

}

