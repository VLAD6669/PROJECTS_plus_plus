
#include <iostream>
using namespace std;


int main()
{
    //  1
 //   int a = 1;
	//while (a <= 100)
	//{
	//	cout << a << " ";
	//	a++;
	//}

	//	2 
	//int a = 1;
	//int sum = 0;

	//while (a <= 200)
	//{
	//	cout << a << "";
	//	sum++;
	//	a += 2;
	//}
	//cout << "Number of odd numbers from 1 to 200: " << sum << endl;
	//return 0;


	//	3

    //int N;
    //int number;
    //int sum = 0;
    //int i = 0;

    //cout << "Enter N: ";
    //cin >> N;

    //while (i < N)
    //{
    //    cin >> number;

    //    if (number % 2 == 0)
    //    {
    //        sum += number;
    //    }

    //    i++;
    //}

    //cout << "Sum of even numbers: " << sum << endl;

    //return 0;


    // 4 
    //int sum = 0;

    //for (int hour = 1; hour <= 12; hour++)
    //{
    //    sum += hour;
    //}

    //cout << "Clock strikes in 12 hours: " << sum << endl;

    //return 0;




    //  5

    int N;
    int sum = 0;

    for (;;)
    {
        cout << "Enter number: ";
        cin >> N;

        if (N == 0)
        {
            break;
        }

        sum += N;
    }

    cout << "Sum of numbers: " << sum << endl;

    return 0;

}

