#ifndef _MYSTRING_H_
#define _MYSTRING_H_

#include <iostream>
#include <cstring>

using namespace std;

class Mystring
{
private:
    char *str; // cstyle string
public:
    Mystring();
    Mystring(const char *s);
    Mystring(const Mystring &source);
    ~Mystring();

    Mystring &operator=(const Mystring &rhs); // copy assignment 

    void display() const;
    int get_length() const;
    const char *get_str() const;
};
#endif