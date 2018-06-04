#include <iostream>
#include <array>
#include <string> 
#include <stdlib.h> //srand , rand
#include <time.h>

using namespace std;

// warnings and errors...this doens't work

void generateArray(int arr[], int size)
{
	srand(time(NULL));

	for(int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100 + 1;
	}

}

void to_str(int arr[], int size)
{
	int count = 1;
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
		if(count % 10 == 0)
		{
			cout << endl;
		}
		count++;
	}

	cout << endl;
}

int main()
{
	cout << "\tInsertion Sort\n" << endl;

	int randArray[100]={0};

	to_str(randArray, 100);

	generateArray(randArray, 100);

	to_str(randArray, 100);

	return 0;
}

