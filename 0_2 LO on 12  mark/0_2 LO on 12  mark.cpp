
#include <iostream>
using namespace std;
int main()
{
	//	1
	//int a;
	//int b;
	//int c;
	//int d;
	//cout << "Enter first side: ";
	//cin >> a;
	//cout << "Enter second side: ";
	//cin >> b;
	//cout << "Enter third side: ";
	//cin >> c;
	//cout << "Enter fourth side: ";
	//cin >> d;

	//if (a == b && a == c && a == d)
	//{
	//	cout << "This is a square" << endl;

	//}
	//else if (a == c && b == d)
	//{
	//	cout << "This is a rectangle" << endl;
	//}
	//else
	//{
	//	cout << "This is not a square or rectangle" << endl;
	//}

	//	 2
	//int a;
	//
	//cout << "Enter age of child: ";
	//cin >> a;

	//if (a >= 1.5 && a <= 6)
	//{
	//	cout<<"Child must go to kindergarten" << endl;
	//}
	//else if (a >= 6 && a <= 18)
	//{
	//	cout << "Child must go to school" << endl;
	//}
	//else
	//{
	//	cout << "Error" << endl;
	//}

	//		3
	//int a;
	//int b;
	//int c;
	//
	//cout << "Enter first number : ";
	//cin >> a;
	//cout << "Enter second number : ";
	//cin >> b;
	//cout << "Enter third number : ";
	//cin >> c;

	//if ((a < 0 && b < 0 && c >= 0) || ((a < 0 && c < 0 && b >= 0) || (b < 0 && c < 0 && a >= 0)))
	//{
	//	cout << "There are 2 negative numbers" << endl;
	//}
	//else
	//{
	//	cout << "There are not 2 negative numbers" << endl;
	//}


	//		4

	//int a;
	//cout << "Enter number: ";
	//cin >> a;
	//
	//if (a >= 2 && a <= 5)
	//{
	//	cout << "Number is in range [2, 5]" << endl;

	//}
	//else if (a >= -1 && a <= 1)
	//{
	//	cout << "Number is in range [-1, 1]" << endl;
	//}
	//else
	//{
	//	cout << "Number is not in range" << endl;
	//}


	//		5	
	//int a;
	//int b;
	//int c;

	//cout << "Enter first number : ";
	//cin >> a;
	//cout << "Enter second number : ";
	//cin >> b;
	//cout << "Enter third number : ";
	//cin >> c;

	//if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
	//{
	//	cout << "There are 2 equal numbers " << endl;
	//}
	//else
	//{
	//	cout << "Error " << endl;
	//}



	//		6
	//int a;
	//int b;
	//int c;

	//cout << "Enter first number : ";
	//cin >> a;
	//cout << "Enter second number : ";
	//cin >> b;
	//cout << "Enter third number : ";
	//cin >> c;

	//if (a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
	//{
	//	cout << "All numbers are even" << endl;
	//}
	//else
	//{
	//	cout << "Some numbers are even and some are odd" << endl;
	//}



		//				НА 12 БАЛІВ

	//	7	 (SWAP) - МІНЯЄ ЗНАЧЕННЯ МІСЦЯМИ ДВОХ ЗМІННИХ
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


	//		8
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

	//		9
	  
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

	//   10
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

	//11
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

