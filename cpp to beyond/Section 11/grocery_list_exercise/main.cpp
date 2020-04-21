// Section 11
// functions
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void print_grocery_list(int mangos = 13, int apples = 3, int oranges = 7);

int main()
{
    print_grocery_list();
    print_grocery_list(13, 5);
    print_grocery_list(13, 7, 11);
    return 0;
}

void print_grocery_list(int mangos, int apples, int oranges)
{
    cout << apples << " apples"
         << "\n"
         << oranges << " oranges"
         << "\n"
         << mangos << " mangos"
         << "\n";
}