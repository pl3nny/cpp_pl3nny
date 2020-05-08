#include "Account.h"


using namespace std;

int main()
{
    cout << endl;

    Account pl3nny;

    pl3nny.set_name("pl3nny");
    pl3nny.deposit(2000);

    cout << pl3nny.get_balance() << endl;

    return 0;
}