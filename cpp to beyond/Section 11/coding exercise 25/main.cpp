// section 11
// passing arrays to functions exercise

#include <iostream>
#include <array>

using namespace std;

string print_guest_list(const string arr[], size_t size);
void clear_guest_list(string arr[], size_t size);

int main()
{
    string guest_list[]{"Larry", "Moke", "Curly"};
    size_t guest_list_size{3};

    print_guest_list(guest_list, guest_list_size);
    clear_guest_list(guest_list, guest_list_size);
    print_guest_list(guest_list, guest_list_size);

    return 0;
}

void clear_guest_list(string arr[], size_t size)
{
    cout << "clearing out guest list" << endl;
    for (size_t i = 0; i < size; i++)
    {
        arr[i] = " ";
    }
    cout << "list is clear" << endl;
}

string print_guest_list(const string arr[], size_t size)
{

    for (size_t i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }

    return typeid(arr).name();
}