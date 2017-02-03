#include <iostream>
using namespace std;
#include <conio.h>
void merge(int *, int, int, int);
void mergesort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid = (low + high) / 2;
		mergesort(a, low, mid);
		mergesort(a, mid + 1, high);
		merge(a, low, high, mid);
	}
	return;
}
void merge(int *a, int low, int high, int mid)
{
	int i, j, k, c[50] = { 0 };
	i = low;
	k = low;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			c[k] = a[i];
			k++;
			i++;
		}
		else
		{
			c[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		c[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		c[k] = a[j];
		k++;
		j++;
	}
}
int main()
{	
	int arr[] = { 10,13,12,6,3,1,3,0,6,9,8,0,7,3,9,5};

	int big = (sizeof(arr) / sizeof(*arr));
	mergesort(arr, 0, big-1);
	cout << "sorted array:\n";
	for (int i = 0; i <big; i++)
	{
		cout << arr[i]<<" ";
	}
	return 0;
}