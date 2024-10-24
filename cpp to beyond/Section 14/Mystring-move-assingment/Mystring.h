#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class Mystring {
    private:

    public:
        Mystring();
        Mystring(const char *s);
        Mystring(const Mystring &source);
        ~Mystring();
};

#endif