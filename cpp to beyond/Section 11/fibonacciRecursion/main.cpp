#include <iostream>

using namespace std;

int fib(int num);
int main()
{
    cout << fib(10) << endl;
    cout << "fib of 50: ";
    cout << fib(50) << endl;
    return 0;
}

int fib(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;

    return fib(num - 1) + fib(num - 2);
}