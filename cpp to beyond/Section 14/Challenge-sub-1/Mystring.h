#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring
{
    friend std::ostream &operator<<(std::ostream &os, const Mystring &rhs);
    friend std::istream &operator>>(std::istream &in, Mystring &rhs);

private:
    char *str;      // pointer to a char[] that holds a C-style string
public:
    Mystring();                                                         // No-args constructor
    Mystring(const char *s);                                     // Overloaded constructor
    Mystring(const Mystring &source);                    // Copy constructor
    Mystring( Mystring &&source);                         // Move constructor
    ~Mystring();                                                     // Destructor
    
    Mystring &operator=(const Mystring &rhs);     // Copy assignment
    Mystring &operator=(Mystring &&rhs);           // Move assignment
    
    
    void display() const;
    
    int get_length() const;                                      // getters
    const char *get_str() const;

    Mystring operator-() const;         // uniary minus overloaded operator
    Mystring operator+(const Mystring &rhs) const;      // addition overloaded operator - concatenate

    bool operator==(const Mystring &rhs) const;     // overlaoded comparison operator
    bool operator!=(const Mystring &rhs) const;     // overloaded not equal operator
    bool operator<(const Mystring &rhs) const;      // overloaded less than operator
    bool operator>(const Mystring &rhs) const;      // overloaded greater than operator

    Mystring operator+=(const Mystring &rhs);       // overlaoded += operator
    Mystring operator*(const int &rhs) const;        // overloaded * operator
    Mystring operator*=(const int &rhs);        // overlaoded *= operator

    // pre increment 
    Mystring operator++() const;   // overloaed ++ operator pre increment
    // post increment
    Mystring operator++(int);       // overlaoded ++ operator post increment
};

#endif // _MYSTRING_H_