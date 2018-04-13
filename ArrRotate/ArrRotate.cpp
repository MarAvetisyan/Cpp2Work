//Rotate an array of n elements to the right by k steps.
//For example, with n = 7 and k = 3, the array[1, 2, 3, 4, 5, 6, 7] is rotated to[5, 6, 7, 1, 2, 3, 4].

#include <iostream>

void ArrRotate(int array[], int n_, int k_);

int main()
{
	std::cout << "Enter the number of elements and the number of steps for rotate" << std::endl;
	int n, k;
	do {
		std::cin >> n >> k;
	} while (n <= 0 || k <0);

	int *arr = new int[n];

	std::cout << "Enter the elements of an array" << std::endl;
	for (int i = 0;i < n;++i)
		std::cin >> arr[i];

	if (k <= n) {
		ArrRotate(arr, n, k);
	}
	else {
		ArrRotate(arr, n, k - n);
	}

	std::cout << "Your new array!!!" << std::endl;
	for (int i = 0;i < n;++i)
		std::cout << arr[i] << ' ';

	delete[] arr;
	system("pause");
	return 0;
}

void ArrRotate(int array[], int n, int k)
{
	if (k == 0 || k == n)
		return;
	for (int i = 0;i < n - 1;++i)
	{
		array[i] = array[i] + array[i%k + n - k];
		array[i%k + n - k] = array[i] - array[i%k + n - k];
		array[i] = array[i] - array[i%k + n - k];
	}
}