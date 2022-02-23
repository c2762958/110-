#include <iostream>
#include <iomanip>
using namespace std;

double BMI(double kg, double high) {
	double bmi = kg / (high * high);
	return bmi;
}

int main()
{
	string name;
	double kg;
	double high;
	cin >> name >> kg >> high;
	cout << name << " " << fixed << setprecision(2) << BMI(kg, high);
	return 0;
}