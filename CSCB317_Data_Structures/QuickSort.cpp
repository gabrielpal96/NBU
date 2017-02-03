#include<iostream>
using namespace std;
void quickSort(int arr[], int left, int right) {
	int etalon = arr[(left + right) / 2];
	int k = left;
	int j = right;
	int tmp;
	do
	{
		while (arr[k]<etalon)
		{
			k++;
		}
		while (arr[j]>etalon)
		{
			j--;
		}
		if (k <= j)
		{
			tmp = arr[k];
			arr[k] = arr[j];
			arr[j] = tmp;
			k++;
			j--;
		}
	} while (k <= j);
	if (right>left)
	{
		quickSort(arr, left, j);
		quickSort(arr, k, right);
	}
}
int main() {
	int arr[] = { 1,4,56,3,-2,5,75,34,-14,54,98,54,53,65,24 };//15
	int n = 15;
	quickSort(arr, 0, n - 1);
	cout << "{ ";
	for (size_t i = 0; i < 15; i++)
	{
		cout << arr[i] << ", ";
	}
	cout << " }";
	cout << endl;
	return 0;
}
