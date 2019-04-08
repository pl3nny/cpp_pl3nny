/*
Author: Alexander Hernandez
Algorithm: Shell Sort (3^k - 1) / 2 <--- gap (interval); k = 1, 2, 3..etc
Unstable Algorithm
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	cout << "Author: Alexander Hernandez\n" << endl;
	cout << "\tShell Sort\n" << endl;

	int arr[10] = {};
	int size = sizeof(arr)/sizeof(*arr);
	int randNum;

	cout << "Empty Array: " << endl;
	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << "\n" << endl;

	cout << "Unsorted Array: " << endl;
	for (int i = 0; i < size; ++i)
	{
		randNum = (rand() % 10) + 1;
		if(randNum > 5 && randNum % 2 != 0)
		{
			randNum *= -1;
			arr[i] = randNum;
		}
		else
		{
			arr[i] = randNum;
		}
		cout << arr[i] << " ";
	}

	cout << "\n" << endl;

	//shell Sort Algorithm

	for(int gap = size / 2; gap > 0; gap /= 2)
	{
		
	}

	cout << "\n" << endl;

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}