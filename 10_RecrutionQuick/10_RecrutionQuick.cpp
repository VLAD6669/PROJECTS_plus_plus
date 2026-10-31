
#include <iostream>
using namespace std;
void Foo(int a)

{
	if (a <= 0)
		return;
	cout << "Hello : a =  " << a << endl;
	a--;
	Foo(a);
}

int Summa(int arr[], int size)
{
	int summa = 0;

	for (int i = 0; i < size; i++)
	{
		summa += arr[i];
	}

	return summa;
}

int Summa_Recursion(int arr[], int size, int index)
{
	if (index == size - 1)
		return arr[index];

	return arr[index] + Summa_Recursion(arr, size, index + 1);
}
void QuickSort(int arr[], int size, int begin, int end)
{
	int i = begin;
	int j = end;
	int temp, p;
	int pivot = arr[(begin + end) / 2];
	do
	{
		while (arr[i] < pivot) i++;
		while (arr[j] > pivot) j--;
		if (i <= j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (begin < j)
		QuickSort(arr, size, begin, j);
	if (i < end)
		QuickSort(arr, size, i, end);
}
void BinarySearch(int arr[], int size, int key)
{
	int B = 0; E = size - 1;
	while (true)
	{
		int p = (B + E) / 2;
		if (key > arr[p])
			B = p + 1;
		else if (key < arr[p])
			E = p - 1;
		else if (key == arr[p])
		
	}
}
int main()
{
	//рекурсія - це коли функція викликає сама себе

	//const int size = 5;
	//int arr[size] = { 1, 2, 3, 4, 5 };

	//cout << "Summa = " << Summa(arr, size) << endl;
	//cout << "Summa = " << Summa_Recursion(arr, size, 0) << endl;

	const int size = 15;
	int arr[size];

	InitArray(arr, size);
	ShowArray(arr, size);

	QuickSort(arr, size, 0, size - 1);

	ShowArray(arr, size);
	//int a = 5;
	//Foo(a);
	//cout << Foo << endl;
}

