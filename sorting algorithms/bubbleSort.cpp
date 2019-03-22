/*
Author: Alexander Hernandez
title: Bubble Sort
Date: Spring 2019
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{

	cout << "Author: Alexande Hernandez" << endl;
	cout << "\tBubble Sort\n" << endl;

	int arr[] = {-22, -10, 5, 1, 10, 20, 11};

	int size = sizeof(arr)/sizeof(*arr);
	int temp;

	cout << size << endl;

	for(int lastUnsortedIndex = size; lastUnsortedIndex > 0; lastUnsortedIndex--)
	{
		for (int i = 0; i < lastUnsortedIndex; ++i)
		{
			if(arr[i] > arr[i+1])
			{
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < size; ++i)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}