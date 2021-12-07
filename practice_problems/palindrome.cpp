#include <iostream>
#include <string>

using namespace std;

bool palindrome(string word); // recursive function
string remove_first_last_chars(string word);

int main() {

    cout << "Author: Alexander Hernandez/n" << endl;
    cout << "\tPalindrome\n" << endl;

    cout << "Enter word if Palidrome: ";
    string input = "";
    cin >> input;

    if (palindrome(input)) {
        cout << input << " is a Palindrome!" << endl;
    } else {
        cout << input << " is NOT a Palindrome..." << endl;
    }

    return 0;
}

// checking if palindrome recursively 
bool palindrome(string word) {
    if (word.length() <= 1) 
        return true;
    if (word.at(0) != word.at(word.length() -1))
        return false;

    string w = remove_first_last_chars(word);

    return palindrome(w);
}

string remove_first_last_chars(string word) {

    if(word.length() <= 1)
        return word;
    else {
        word.erase(word.length() - 1, 1);
        word.erase(0, 1);
    }

    return word;
}