
#include <iostream>
using namespace std;
int main()
{  //а
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }

    //б
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i > j)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //в
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i < j and i + j < 10 - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;

    //г
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i > j and i + j > 10 - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //д
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i <= j && i + j <= 9) || (i >= j && i + j >= 9))
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //е
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if ((i >= j && i + j <= 9) || (i <= j && i + j >= 9))
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //ж
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i >= j and i + j <= 9)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;



    //з
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i <= j and i + j >= 9)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //и
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j < 10 - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;


    //к
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i + j > 10 - 1)
                cout << "|===|";
            else
                cout << "     ";
        }
        cout << endl;
    }
    cout << endl;









}

