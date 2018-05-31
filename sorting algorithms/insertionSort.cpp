#include <iostream>
#include <array>
#include <string> 
#include <stdlib.h> //srand , rand
#include <time.h>

using namespace std;

// warnings and errors...this doens't work

int generateArray()
{
	int arr[100];
	int size = sizeof(arr)/sizeof(*arr);

	srand(time(NULL));

	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

	return arr;
}

void to_str(int arr[])
{

	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if(size % 10 == 0)
		{
			cout << endl;
		}
	}
}

int main()
{
	cout << "\tInsertion Sort\n" << endl;

	to_str(generateArray());

	return 0;
}

