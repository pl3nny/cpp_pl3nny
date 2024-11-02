#include "Mystring.h"
#include <cstring>

Mystring::Mystring(){}

Mystring::Mystring(const char *s){}

Mystring::Mystring(const Mystring &source){}

Mystring::~Mystring(){}

void Mystring::display() const {

}

int Mystring::get_length() const {
    return strlen(str);
}