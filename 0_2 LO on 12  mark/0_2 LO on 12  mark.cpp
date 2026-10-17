
#include <iostream>
using namespace std;
int main()
{
	//1 (SWAP) - МІНЯЄ ЗНАЧЕННЯ МІСЦЯМИ ДВОХ ЗМІННИХ
 //   int a;
 //   int b;
	//cout << "Enter first number : ";
	//cin >> a;
	//cout << "Enter second number : ";
	//cin >> b;
	//if (a == b) {
	//	cout << "a =" << a << " b = " << endl;
	//}
	//else if (a >= b || a <= b) {
	//	swap(a, b);
	//	cout << "aFTER swap: a =" << a << " b = " << b << endl;
	//}
	//else {
	//	cout << "Error " << endl;
	//}


	//2
	//int a;
	//float sum;
	//int numb_of_digits = 3;
	//cout << "Enter  number (a > 100 and a < 999: ";
	//cin >> a;
	//if (a > 100 && a < 999) {
	//	int first = a / 100;
	//	int second = (a / 10) % 10;
	//	int third = a % 10;
	//	cout << "First digit: " << first << endl;
	//	cout << "Second digit: " << second << endl;
	//	cout << "Third digit: " << third << endl;
	//	
	//	cout << "First digit: " << first << "last digit: " << third << endl;
	//	cout << "Number of digits: " << numb_of_digits << endl;
	//	sum = first + second + third;
	//	cout << "Sum of digits: " << sum << endl;
	//}
	//else {
	//	cout << "Error" << endl;
	//}

	//3
	  
	//int a;
	//int b;
	//int c;
	//cout << "Enter Hours : ";
	//cin >> a;
	//cout << "Enter Minutes : ";
	//cin >> b;
	//cout << "Enter Seconds : ";
	//cin >> c;

	//if (a >= 0 && a < 24 && b >= 0 && b < 60 && c >= 0 && c < 60) {
	//	cout << "Time: " << a << ":" << b << ":" << c << endl;
	//}
	//else {
	//	cout << "Error time" << endl;
	//}

	//4
	//int a;
	//cout << "Enter hours (0-23): ";
	//cin >> a;
	//
	//if (a >= 0 && a < 12) {
	//	cout << "Good night" << endl;
	//}
	//else if (a >= 6 && a < 12) {
	//	cout << "Good morning" << endl;
	//}
	//else if (a >= 12 && a < 18) {
	//	cout << "Good afternoon" << endl;
	//}
	//else if (a >= 18 && a < 24) {
	//	cout << "Good evening" << endl;
	//}
	//else
	//{
	//	cout << "Error time" << endl;
	//
	//}

	//5
	int a;
	int b;
	int c;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Enter third number : ";
	cin >> c;

	if (a > b && a > c) {
		cout << "The largest number is: " << a << endl;
	}
	else if (b > a && b > c) {
		cout << "The largest number is: " << b << endl;
	}
	else if (c > a && c > b) {
		cout << "The largest number is: " << c << endl;
	}
	else {
		cout << "Error " << endl;
	}

















}

