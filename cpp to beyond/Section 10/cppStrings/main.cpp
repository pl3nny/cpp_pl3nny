#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
     string s0;
     string s1{"Apple"};
     string s2{"Banana"};
     string s3{"Kiwi"};
     string s4{"apple"};
     string s5{s1}; // Apple
     string s6{s1, 0, 3};
     string s7{10, 'X'};

     cout << s0 << endl; // no garbage
     cout << s0.length() << endl;

     //initialization
     cout << "\nInitialization"
          << "\n------------------------" << endl;
     cout << "s1 is initialized to: " << s1 << endl;
     cout << "s2 is initialized to: " << s2 << endl;
     cout << "s3 is initialized to: " << s3 << endl;
     cout << "s4 is initialized to: " << s4 << endl;
     cout << "s5 is initialized to: " << s5 << endl;
     cout << "s6 is initialized to: " << s6 << endl;
     cout << "s7 is initialized to: " << s7 << endl;

     // Comparison
     cout << "\nComparison"
          << "\n--------------------------" << endl;
     cout << boolalpha;
     cout << s1 << " == " << s5 << ": " << (s1 == s5) << endl;
     cout << s1 << " == " << s2 << ": " << (s1 == s2) << endl;
     cout << s1 << " != " << s2 << ": " << (s1 != s2) << endl;
     cout << s1 << " < " << s2 << ": " << (s1 < s2) << endl;
     cout << s2 << " > " << s1 << ": " << (s2 > s1) << endl;
     cout << s4 << " < " << s5 << ": " << (s4 < s5) << endl;
     cout << s1 << " == "
          << "Apple"
          << ": " << (s1 == "Apple") << endl;

     // Assignment
     cout << "\nAssignmet"
          << "\n---------------------" << endl;

     s1 = "Watermelon";
     cout << "s1 is now: " << s1 << endl; // Watermelon
     s2 = s1;
     cout << "s2 is now: " << s2 << endl; // Watermelon

     s3 = "Frank";
     cout << "s3 is now: " << s3 << endl; // Frank

     s3[0] = 'C';
     cout << "s3 change first letter to 'C': " << s3 << endl; // Crank
     s3.at(0) = 'P';
     cout << "s3 change first letter to 'P'" << s3 << endl; // Prank

     //Concatenation

     s2 = "Banana";
     s3 = "Watermelon";
     cout << "\nConcatenation"
          << "\n---------------------" << endl;

     s3 = s5 + " and " + s2 + " juice "; // Apple and Banana juice
     cout << "s3 is now: " << s3 << endl;

     // s3 = "nice " + " cold" + s5 + "juice"; // compilier error
     // can't add two string literals together by using the + operator

     // for loop
     cout << "\nLooping"
          << "\n------------------------------" << endl;

     s1 = "Apple";
     for (size_t i{0}; i < s1.length(); ++i)
     {
          cout << s1.at(i);
     }

     cout << endl;

     // range base for loop
     for (auto &&c : s1)
     {
          cout << c;
     }

     cout << endl;

     // substring
     cout << "\nSubstring"
          << "\n-------------------------" << endl;
     s1 = "This is a test";

     cout << s1.substr(0, 4) << endl;  // This
     cout << s1.substr(5, 2) << endl;  // is
     cout << s1.substr(10, 4) << endl; // test

     // Erase
     cout << "\nErase"
          << "\n----------------------------" << endl;

     s1 = "This is a test";
     cout << "Erating first 5 characters from s1: " << s1 << endl;
     s1.erase(0, 5);                      // erase This from s1 results in "is a test"
     cout << "s1 is now: " << s1 << endl; // is a test

     //getline
     cout << "\ngetline"
          << "\n-------------------------------" << endl;

     string full_name{};

     cout << "Enter your full name: ";
     getline(cin, full_name);

     cout << "Your full name is: " << full_name << endl;

     // Find
     cout << "\nFind"
          << "\n-----------------------------" << endl;

     s1 = "The secret word is Boo";
     string word{};

     cout << "Enter the word to find: ";
     cin >> word;

     size_t position = s1.find(word);
     if (position != string::npos)
          cout << "Found" << word << " at position " << position << endl;
     else
     {
          cout << "Sorry, " << word << " not found" << endl;
     }

     string unformatted_full_name{"StephenHawking"};

     //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
     //----WRITE YOUR CODE BELOW THIS LINE----

     string first_name = unformatted_full_name.substr(0, 7);
     string last_name = unformatted_full_name.substr(7, 7);

     string formatted_full_name = first_name + " " + last_name;

     cout << formatted_full_name << endl;

     string journal_entry_1{"Isaac Newton"};
     string journal_entry_2{"Leibniz"};

     //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
     //----WRITE YOUR CODE BELOW THIS LINE----

     journal_entry_1.erase(0, 6);

     if (journal_entry_1 > journal_entry_2)
     {
          string temp = journal_entry_1;
          journal_entry_1 = journal_entry_2;
          journal_entry_2 = temp;
     }

     cout << journal_entry_1 << " < " << journal_entry_2 << endl;

     cout << endl;
     return 0;
}