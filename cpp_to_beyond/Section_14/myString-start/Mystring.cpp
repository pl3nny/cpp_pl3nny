#include <cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];  // allocate space for 1 character
        *str = '\0'; // null terminator
    }

Mystring::Mystring(const char *s)
    : str {nullptr}{
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s) + 1];
            strcpy(str,s);
        }
    }

Mystring::Mystring(const Mystring &source)
    : str{nullptr}{
    str = new char[strlen(source.str) + 1];
    str = strcpy(str,source.str);
}

Mystring::~Mystring(){
    delete [] str;
}

void Mystring::display() const{
    cout << str << " : " << strlen(str) << endl;
}

int Mystring::get_length() const{
    return strlen(str);
}

const char *Mystring::get_str() const{
    return str;
}