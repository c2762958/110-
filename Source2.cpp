#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	
	string name;
	double kg, high;
	cin >> name >> kg >> high;
	cout << name << "" << setprecision(2) << fixed << kg / (high * high);

	return 0;
}