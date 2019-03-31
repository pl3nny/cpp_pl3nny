#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Author: Alexander Hernandez\n" << endl;
	cout << "\tSelection Sort\n" << endl;

	int arr[10] = {}; // empty array
	int size = sizeof(arr)/sizeof(*arr); // get size of array
	int randNum; // stores random generated number
	int largest; // finds largest value in array
	int temp;	// temporary stores value

	//output empty array
	cout << "Empty Array:" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << "\n" << endl;

	//Generate random numbers and output Unsorted Array
	cout << "Unsorted Array:" << endl;
	for (int i = 0; i < size; ++i)
	{
		randNum = (rand() % 10) + 1;
		if(randNum < 8 && randNum % 2 == 0)
		{
			randNum *= -1;
			arr[i] = randNum;
		}
		else
			arr[i] = randNum;

		cout << arr[i] << " ";
	}
	cout << "\n" <<endl;

	//SELECTION SORT ALGORITHM
	cout << "Array Sorted with Selection Sort" << endl;
	for (int lastUnsortedIndex = size; lastUnsortedIndex > 0; --lastUnsortedIndex)
	{
		largest = 0;
		for (int i = 1; i <= lastUnsortedIndex; ++i)
		{
			if(arr[largest] < arr[i])
			{
				largest = i;
			}
		}

		temp = arr[lastUnsortedIndex];
		arr[lastUnsortedIndex] = arr[largest];
		arr[largest] = temp;
	}

	for  (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}