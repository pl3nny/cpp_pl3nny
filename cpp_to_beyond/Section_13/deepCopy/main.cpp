// Section 13
// Deep Copy
#include <iostream>
#include <string>

using namespace std;

class Deep
{
private:
    int *data;

public:
    void set_data_value(int d) { *data = d; }
    int get_data_value() { return *data; }

    Deep(int d);
    Deep(const Deep &source);
    ~Deep();
};

Deep::Deep(int d)
{
    data = new int; // allocate storage
    *data = d;
}

Deep::Deep(const Deep &source) // or : Deep{*source.data}
{
    data = new int; // allocate storage
    *data = *source.data; // copies the data from the source 
    cout << "copy constructor - deep" << endl;
}

Deep::~Deep()
{
    delete data; // free storage
    cout << "Destructor freeing data " << endl;
}

void display_data(Deep d)
{
    cout << d.get_data_value() << endl;
}

int main()
{
    Deep obj1{100};
    display_data(obj1);

    Deep obj2 {obj1};
    obj2.set_data_value(1000);
    display_data(obj2);

    return 0;
}
