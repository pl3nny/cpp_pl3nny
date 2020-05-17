// Section 13
// Shallow copy
#include <iostream>
#include <string>

using namespace std;

class Shallow
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }
    void display_Shallow(Shallow s);

    // constructor
    Shallow(int d);
    //copy construtor
    Shallow(const Shallow &source);
    // Destructor
    ~Shallow();
};

Shallow::Shallow(int d)
{
    data = new int;
    *data = d;
}

Shallow::Shallow(const Shallow &source)
    : data(source.data)
{
    cout << "Copy constructor - shallow copy" << endl;
}

Shallow::~Shallow()
{
    delete data;
    cout << "Destructor freeing data" << endl;
}

void display_Shallow(Shallow s)
{
    cout << s.get_data_value() << endl;
}

int main()
{

    Shallow obj1 {100};
    display_Shallow(obj1); // will crash since raw pointer data is erased 

    Shallow obj2(obj1);
    obj2.set_data_value(1000); // obj2 & obj1 are pointing to the same data
    display_Shallow(obj2);

    return 0;
}