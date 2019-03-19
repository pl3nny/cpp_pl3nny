/*
Author: Alexander Hernandez
title: Bubble Sort
Date: Spring 2019
*/
#include <iostream>
#include <array>

using namespace std;

int swap(int arr[], int index, int size);

int main() 
{
	cout << "Author: Alexander Hernandez" << endl;
	cout << "\tBubbleSort\n" << endl;

	int arr[] =  {10, 1, 4, 11, 20, -30, 8};
	int temp;

	for (int i = 0; i < 7; ++i)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	// BubbleSorting Algorithm

	for (int i = 7 - 1; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	for (int i = 0; i < 7; ++i)
	{
		cout << arr[i] << " "; 
	}

	cout << endl;

	return 0;
}

int swap(int arr[], int index, int size) 
{
	return 0;
}