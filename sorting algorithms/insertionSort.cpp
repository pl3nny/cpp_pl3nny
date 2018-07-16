/*
Author: Alexander Hernandez
title: Insertion Sort
Date: Summer 2018
*/
#include <iostream>
#include <array>
#include <string> 
#include <stdlib.h> //srand , rand
#include <time.h>

using namespace std;

// warnings and errors...this doens't work

void generateArray(int [], int);
void to_str(int [], int);
void insertionSort(int[], int);

int main()
{
	cout << "\tInsertion Sort\n" << endl;

	// created integer array and initialized to zeroes
	int randArray[100]={0};

	// print out array currently initiliazed to zeroes
	to_str(randArray, 100);

	// filled array with random numbers from function
	// "void generateArray(int arr[], int size)"
	generateArray(randArray, 100);


	cout << "Unsorted Array\n" << endl;
	// print out array filled with random numbers from prevous function call
	to_str(randArray, 100);

	cout << "Sorted Array\n" << endl;
	insertionSort(randArray, 100);
	to_str(randArray, 100);

	// int testArr [] ={3, 2, 1, 4, 5};

	// to_str(testArr, 5);
	// insertionSort(testArr, 5);
	// to_str(testArr, 5);


	return 0;
}

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

void insertionSort(int arr[], int size)
{
	int key, j;

	for(int i = 1; i < size; i++)
	{
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key)
		{
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;
	}
}

