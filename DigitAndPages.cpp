/*
* How many pages can you number with 600 digits
* e.g. page 1 take 1 didigt page 10 takes 2 digits page 100 takes 3 digits
*/

#include <iostream>

using namespace std;

int main() {

    cout << "Author: Alexander Hernandez" << endl;

    int MAX_NUM_OF_DIGITS = 600;
    int count_single_digits = 9;
    int count_double_digits = 0;
    int count_tripple_digits = 0;
    int number_of_possible_pages = 0;

    cout << endl;

    // number of possible single digits
    cout << "Number of possible single digits: " << count_single_digits << endl;
    MAX_NUM_OF_DIGITS = MAX_NUM_OF_DIGITS - count_single_digits;

    // number of possible of digits
    for(int i = 10; i < 100; i++) {
        count_double_digits++;
        MAX_NUM_OF_DIGITS -=2;
    }

    cout << "Number of possible double digits: " << count_double_digits << endl;

    // number of possible tripple digit -- to 600
    for(int i = 100; i <= 600; i++) {
        if(count_tripple_digits >=(MAX_NUM_OF_DIGITS)){
            break;
        } else {
            count_tripple_digits++;
            MAX_NUM_OF_DIGITS -= 3;
        }
    }

    cout << "Number of possible tripple digits: " << count_tripple_digits << endl;

    int totalDigits = count_single_digits + (count_double_digits * 2) + (count_tripple_digits * 3);
    number_of_possible_pages = (count_single_digits) + count_double_digits + count_tripple_digits;

    //total of digits calculated
    cout << "total of digits: " << totalDigits << endl;
    cout << "number of possible pages: " << number_of_possible_pages << endl;
    
    return 0;
}