#include <iostream>
#include <array>
#include <vector>

using namespace std;

/*
Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.
*/

int binarySearch(int arr[], int l, int r, int x);

int main() {

    cout << "Author: Alexander Hernandez\n" << endl;

    array<int, 10> arr;
    int randomNum = 0;
    int target = 55;


    cout << "Array size: " << arr.size() << endl;

    for(int i = 0; i < arr.size(); i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    cout << endl;

    for(int i = 0; i < arr.size(); i++){
        for(int j = 1; j < arr.size(); j++){
            if(arr[j] + arr[i] == target && i != j) {
                cout << "arr[" << i << "] = "<< arr[i] << " and " << "arr["
                << j << "] = " << arr[j] << " add up to " << "target: " << target << endl;
            }
        }
    }

    for(int i = 0; i < arr.size(); i++) {
        // binarySearch(arr, i, (arr.size() - 1), (arr[i] - target));
    }

    return 0;
}

int binarySearch(int arr[], int l, int r, int x) {

    if( r >= l) {
        int mid =  1 + (r-l)/2;
        if(arr[mid] == x) {
            return mid;
        }

        if(arr[mid] > x) {
            return binarySearch(arr, l, mid -1, x);
        }

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}