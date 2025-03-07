#include <iostream>
#include <cstring>
#include "Mystring.h"

 // No-args constructor
Mystring::Mystring() 
    : str{nullptr} {
    str = new char[1];
    *str = '\0';
}

// Overloaded constructor
Mystring::Mystring(const char *s) 
    : str {nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            strcpy(str, s);
        }
}

// Copy constructor
Mystring::Mystring(const Mystring &source) 
    : str{nullptr} {
        str = new char[strlen(source.str)+ 1];
        strcpy(str, source.str);
 //       std::cout << "Copy constructor used" << std::endl;

}

// Move constructor
Mystring::Mystring( Mystring &&source) 
    :str(source.str) {
        source.str = nullptr;
//        std::cout << "Move constructor used" << std::endl;
}

 // Destructor
Mystring::~Mystring() {
    delete [] str;
}

 // Copy assignment
Mystring &Mystring::operator=(const Mystring &rhs) {
//    std::cout << "Using copy assignment" << std::endl;

    if (this == &rhs) 
        return *this;
    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    strcpy(str, rhs.str);
    return *this;
}

// Move assignment
Mystring &Mystring::operator=( Mystring &&rhs) {
 //   std::cout << "Using move assignment" << std::endl;
    if (this == &rhs) 
        return *this;
    delete [] str;
    str = rhs.str;
    rhs.str = nullptr;
    return *this;
}

// Display method
void Mystring::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

 // getters
 int Mystring::get_length() const { return strlen(str); }
 const char *Mystring::get_str() const { return str; }

// overloaded insertion operator
std::ostream &operator<<(std::ostream &os, const Mystring &rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream &operator>>(std::istream &in, Mystring &rhs) {
    char *buff = new char[1000];
    in >> buff;
    rhs = Mystring{buff};
    delete [] buff;
    return in;
}

// non member function overloaded == operator
bool operator==(const Mystring &lhs, const Mystring &rhs) {
    if(std::strcmp(lhs.str, rhs.str) == 0){
        return true;
    }
    return false;
}

// non member function overlaoded != operator
bool operator!=(const Mystring &lhs, const Mystring &rhs) {
    if(std::strcmp(lhs.str, rhs.str) != 0){
        return true;
    }
    return false;
}

// non member function overloaded < operator
bool operator<(const Mystring &lhs, const Mystring &rhs) {
    if(rhs.str < lhs.str)
        return true;
    
    return false;
}

// non member fucntion overloaded > operator
bool operator>(const Mystring &lhs, const Mystring &rhs) {
    if(rhs.str > lhs.str)
        return true;
    
    return false;
}

// non member fucntion overladed - operator
Mystring operator-(const Mystring &obj) {
    char *buff = new char [std::strlen(obj.str) + 1];
    for(size_t i = 0; i < std::strlen(obj.str); i++) {
        buff[i] = std::tolower(obj.str[i]);
    }
    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// non member function overloaded + operator
Mystring operator+(const Mystring &lhs, const Mystring &rhs) {
    char *buff = new char [std::strlen(lhs.str) + std::strlen(rhs.str) + 1];
    std::strcpy(buff, lhs.str);
    std::strcat(buff, rhs.str);

    Mystring temp {buff};
    delete [] buff;
    return temp;
}

// non member fucntion overladed += operator
Mystring &operator+=(Mystring &lhs, const Mystring &rhs) {
    lhs = lhs + rhs;
    return lhs;
}

// non member function overloaded * operator
Mystring operator*(const Mystring &lhs, const int &n) {
    Mystring temp;
    for(size_t i = 0; i < n; i++){
        temp = temp + lhs;
    }
    return temp;
}

// non member fucntion overlaoded *= operator
Mystring &operator*=(Mystring &lhs, const int &n) {
    lhs = lhs * n;
    return lhs;
}

// non member fucntion overlaoded ++ pre increment
Mystring &operator++(Mystring &obj) {
    for(size_t i = 0; i < std::strlen(obj.str); i++){
        obj.str[i] = std::toupper(obj.str[i]);
    }
    return obj;
}

// non member function overlaoded ++ post increment
Mystring operator++(Mystring &obj, int n) {
    Mystring temp {obj};
    ++obj;
    return temp;
}
