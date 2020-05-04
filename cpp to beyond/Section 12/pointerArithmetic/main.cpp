// Section 12
// pointer arithmetic
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int scores[]{100, 95, 89, 68, -1};
    int *score_ptr{scores};

    while (*score_ptr != -1)
    {
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-----------------------------" << endl;
    string s1{"pl3nny"};
    string s2{"pl3nny"};
    string s3{"alex"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << boolalpha;
    cout << p1 << " == " << p2 << " : " << (p1 == p2) << endl; // false
    cout << p1 << " == " << p3 << " : " << (p1 == p3) << endl; // true

    cout << *p1 << " == " << *p2 << " : " << (*p1 == *p2) << endl;
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

    p3 = &s3; // point to alex
    cout << *p1 << " == " << *p3 << " : " << (*p1 == *p3) << endl;

    // subtracting pointers
    cout << "\n------------------------------------" << endl;
    char name[]{"pl3nny"};

    char *char_prt1{nullptr};
    char *char_ptr2{nullptr};

    char_prt1 = &name[0]; // p
    char_ptr2 = &name[5]; // y

    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_prt1)
         << " away from " << *char_prt1 << endl;

    cout << endl;
    return 0;
}