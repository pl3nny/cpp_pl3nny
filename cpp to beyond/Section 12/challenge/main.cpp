// section 12
// challenge
/*
    Author: pl3nny
*/
#include <iostream>
#include <array>

using namespace std;

void print(const int *const arr, int size);
int *apply_all(const int *const arr1, int size1, const int *const arr2, int size2);
int main()
{
    cout << "\n----------------------" << endl;
    int array1[] {1,2,3,4,5};
    int array2[] {10, 20, 30};
    print(array1, 5);
    print(array2, 3);
    
    int *result = apply_all(array1, 5, array2, 3);
    print(result, 15);

    delete[] result;
    cout << endl;
    return 0;
}
void print (const int *const arr, int size)
{
    cout << "[ ";
    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

int *apply_all(const int *const arr1, int size1, const int *const arr2, int size2)
{
    int *new_array {nullptr};
    int count {0};

    new_array = new int[size1 * size2];

    for (size_t i = 0; i < size2; i++) // array1
    {
        for (size_t j = 0; j < size1; j++) // array2
        {
            new_array[count] = arr1[j] * arr2[i];
            count++;
        }
    }
    return new_array;
}