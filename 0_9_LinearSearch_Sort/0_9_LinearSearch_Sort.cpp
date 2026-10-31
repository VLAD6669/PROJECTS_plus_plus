
#include <iostream>
using namespace std;


int LInearSearch(int arr[], int size, int key)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == key) // i - це номер комірки 
		{
			return i;
		}
	}
	cout << "Not found" << endl;
	return -1;
}
void InitArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
	}
}
void ShowArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
}
void SelectionSort(int arr[], int size)
{
	int temp, index;
	for (int i = 0; i < size; i++)
	{
		index = i;
		temp = arr[i];
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < temp) {
				temp = arr[j];
				index = j;
			}
		}
		if (index != i)
		{
			arr[index] = arr[i];
			arr[i] = temp;
		}

	}

}
void BubbleSort(int arr[], int size)
{
	int temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void ShakerSort(int arr[], int size)
{
	int temp;
	int left = 0;
	int right = size - 1;

	while (left < right)
	{
		for (int j = right; j > left; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
		left++;

		for (int j = left; j <= right; j++)
		{
			if (arr[j - 1] > arr[j])
			{
				temp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = temp;
			}
		}
		right--;
	}
}

void InsertSort(int arr[], int size)
{
	int temp;
	int j;

	for (int i = 0; i < size; i++)
	{
		temp = arr[i];

		for (j = i - 1; j >= 0 && arr[j] > temp; j--)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = temp;
	}
}
int main()
{
	srand(time(0));

	const int size = 15;
	int arr[size];

	InitArray(arr, size);

	cout << "Before sort:\n";
	ShowArray(arr, size);

	InsertSort(arr, size);

	cout << "\n\nAfter sort:\n";
	ShowArray(arr, size);

	return 0;

	//int search_key;
	//cout << "Enter search key: "; cin >> search_key;
	//int index = LInearSearch(arr, size, search_key);
	//if (index != -1)
	//{
	//	cout << "element " << search_key << " found at index [" << index << "]" << endl;
	//}
	//else
	//	cout << "element " << search_key << " not found" << endl;	
}

