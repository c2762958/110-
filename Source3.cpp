#include <iostream>
using namespace std;

int main()
{
	int a, b,total=0;
	cin >> a>>b;
	do {
		if (a % 2 == 0 || a % 5 == 0)
			total += a;
		a++;
	} while (a != b);
	cout << total;
	return 0;
}