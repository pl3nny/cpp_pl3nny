#include "Mystring.H"

Mystring::Mystring()
    : str{nullptr}{
        str = new char[1];
        *str = '\0';
    }
Mystring::Mystring(const char *s)
    : str{nullptr}{
        if(s == nullptr){
            str = new char[1];
            *str = '\0';
        } else {
            str = new char[strlen(s)+1];
            str = strcpy(str,s);
        }
    }

Mystring::Mystring(const Mystring &source)
    : str{nullptr} {
        str = new char[strlen(source.str) + 1];
        strcpy(str,source.str);
    }

Mystring::~Mystring(){
    delete [] str;
}

Mystring &Mystring::operator=(const Mystring &rhs) {
    cout << "Copy assignemnt" << endl;

    if(this == &rhs){
        return *this;
    }

    delete [] str;
    str = new char[strlen(rhs.str) + 1];
    str = strcpy(str,rhs.str);

    return *this;
}

void Mystring::display() const{
    cout << str << " : " << strlen(str) << endl;
}

int Mystring::get_length() const{
    return strlen(str);
}

const char *Mystring::get_str() const {
    return str;
}