#include <iostream>
using namespace std;

void QuickSort(int arr[], int left, int right)
{
	int pivot = arr[(left + right) / 2];
	int i = left;
	int j = right;
	while (true)
	{
		while (arr[i] < pivot)
			++i;
		while (arr[j] > pivot)
			--j;
		if (i > j)
			break;
		else
		{
			swap(arr[i], arr[j]);
			++i;
			--j;
		}
	}
	if (left<j)
		QuickSort(arr, left, j);
	if (right > i)
		QuickSort(arr, i, right);
}

int main()
{
	cout << "Enter the number of elements" << endl;
	int n;
	do {
		cin >> n;
	} while (n <= 0);

	cout << "Enter your array!" << endl;
	int *x = new int[n];
	for (int i = 0;i < n;++i)
		cin >> x[i];

	QuickSort(x, 0, n - 1);
	cout << "QuickSort!!!" << endl;
	for (int i = 0;i < n;++i)
		cout << x[i] << ' ';
	cout << endl;

	delete[] x;
	system("pause");
	return 0;
}