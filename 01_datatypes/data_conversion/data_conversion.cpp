// data_conversion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 5;
	char a = 'B';
	double x = 1.57;

	cout << "i + x = " << i + x << endl;
	cout << "a * x = " << a * x << endl;

	//===============================================
	int m = 3, n = 2;
	double k;

	k = m / n;
	cout << "k = m / n = " << k << endl;

	k = m / double(n);
	cout << "k = m / double(n) = " << k << endl;

	k = double(m) / n;
	cout << "k = double(m) / n = " << k << endl;

	k = double(m / n);
	cout << "k = double(m / n) = " << k << endl;


	//===============================================
	//set precision
	double pi = 3.14159265358979323846;
	cout << "pi = " << fixed << setprecision(5) << pi << endl;
	printf("pi = %.5f\n", pi);

}

/*
All the data types of the variables are upgraded to the data type of the variable with largest data type:
bool -> char -> short int -> int ->
unsigned int -> long -> unsigned ->
long long -> float -> double -> long double

ref: https://www.geeksforgeeks.org/type-conversion-in-c/
*/
