#include <iostream>
#include <array>
#include <iomanip>

using namespace std;

const int arrSize = 100;

void initArray(array<int, arrSize> &arr);
void insertionSort(array<int, arrSize> &arr);
void printArray(array<int, arrSize> arr);

int main() {

    cout << "Author: Alexander Hernandez" << endl;
    array<int, arrSize> some_array;
    
    cout << arrSize << endl;

    initArray(some_array);

    cout << "unsorted array" << endl;
    printArray(some_array);

    cout << "sorted array" << endl;
    insertionSort(some_array);
    printArray(some_array);

    return 0;
}

void insertionSort(array<int, arrSize> &arr) {

    int temp = 0;
    for(int next = 1; next < arrSize; next++) {
        temp = arr[next];
        int moveItem = next;

        while ((moveItem > 0) && (arr[moveItem - 1]) > temp) {
            arr[moveItem] = arr[moveItem - 1];
            moveItem--;
        }
        arr[moveItem] = temp;
    }
}

void printArray(array<int, arrSize> arr) {
    cout << "\nsome_array[] = {" << endl;

    for(int i = 0; i < arrSize; i++) {
        cout << arr[i] << " ";
        if((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    cout << "}" << endl;
    cout << endl;
}

void initArray(array<int, arrSize> &arr) {
    for(int i = 0; i < arrSize; i++) {
        arr[i] = rand() % 100 + 1;
    }
}