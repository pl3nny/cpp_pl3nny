#ifndef _MYSTRING_H_
#define _MYSTRING_H_

using namespace std;

class Mystring {

    private:
        char *str;

    public:
        Mystring();                         // No-args constructor
        Mystring(const char *s);            // Overloaded constructor
        Mystring(const Mystring &source);   // Copy constructor
        ~Mystring();                        // Destructor

        void display() const;
        int get_length() const;             // getters
        const char *get_str() const;
};

#endif