#include <iostream>
using namespace std;

int LinearComp(int number, int arr[], int size) {
	int total = 0;
	for (int i = 0; i< size; i++) {
		if (arr[i] > number)
			total += arr[i];
	}
	return total;
}

int main()
{
	int a;
	cin >> a;
	int arr[7] = {3, 5, 7, 2, 4, 8, 6};
	cout << LinearComp(a, arr, 7);
	return 0;
}