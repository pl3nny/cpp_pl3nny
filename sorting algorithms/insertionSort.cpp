#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	cout << "Author: Alexander Hernandez\n" << endl;
	cout << "\tInsertion Sort\n" << endl;

	int arr[10] = {};
	int size = sizeof(arr)/sizeof(*arr);
	int randNum;

	// Output Empty Array
	cout << "\tEmpty Array" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << "\n" << endl;


	//Output Random Array
	cout << "\tUnsorted Array" << endl;
	for (int i = 0; i < size; ++i)
	{
		 randNum = (rand() % 10) + 1;
		 if(randNum <= 5 && randNum % 2 == 0)
		 {
		 	randNum *= -1;
		 	arr[i] = randNum;
		 }
		 else
		 	arr[i] = randNum;

		 cout << arr[i] << " ";
	}
	cout << "\n" <<  endl;

	//INSERTION SORT ALGORITHM
	for (int firstUnsortedIndex = 1; firstUnsortedIndex < size; ++firstUnsortedIndex)
	{
		int newElement = arr[firstUnsortedIndex];
		int i;
		for (i = firstUnsortedIndex; i > 0 && arr[i - 1] > newElement; --i)
		{
			arr[i] = arr[i - 1]; //shifting elements from left to right
		}

		arr[i] = newElement;
	}

	cout << "Sorted array with Insertion Sort" << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}
