// #include <iostream>
// #include <vector>
// #include <iomanip>
// #include <string>
// #include <ctype.h>
// #include <stdlib.h>
// #include <time.h>
// #include <cstring>
// #include <array>
// #include <unordered_map>

// using namespace std;

// void print_array(const int arr[], size_t size);
// void set_array(int arr[], size_t size, int value);
// void print_vector(const vector<int> &v);
// double a_penny_doubled_everyday(int days, double amount);

// int main()
// {

    /*
    For this we'll be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    you may assume that the number of cents entered is greater than or equal to zero

    */

    // const int dollar{100};
    // const int quarter{25};
    // const int dimes{10};
    // const int nickel{5};
    // const int penny{1};

    // int user_amount{0};
    // int num_dollars{}, num_quarters{}, num_dimes{}, num_nickels{}, num_pennies{};

    // cout << endl;
    // cout << "enter an amount in cents: ";
    // cin >> user_amount;

    // num_dollars = user_amount/dollar;
    // user_amount -= num_dollars * dollar;

    // num_quarters = user_amount/quarter;
    // user_amount -= num_quarters * quarter;

    // num_dimes = user_amount/dimes;
    // user_amount -= num_dimes * dimes;

    // num_nickels = user_amount/nickel;
    // user_amount -= num_nickels * nickel;

    // num_pennies = user_amount/penny;
    // user_amount -= num_pennies * penny;

    // cout << "your change is .. " << endl;
    // cout << "dollars: " << num_dollars << endl;
    // cout << "quarters: " << num_quarters << endl;
    // cout << "dimes: " << num_dimes << endl;
    // cout << "nickels: " << num_nickels << endl;
    // cout << "pennies: " << num_pennies << endl;
    // cout << endl;
    // cout << "user_amount: " << user_amount << endl;

    // ******************************************************************************************************

    /*
    THE SWITCH STATEMENT using enum CODING EXCERSISE

    */

    //    enum Direction {

    //        left, right, up, down

    //    };

    //    Direction heading {down};

    //     switch(heading) {
    //         case left:
    //         cout << "going left " << endl;
    //         break;

    //         case right:
    //         cout << "going right" << endl;
    //         break;

    //         case up:
    //         cout << "going up" << endl;
    //         break;

    //         case down:
    //         cout << "going down" << endl;
    //         break;
    //     }

    // ******************************************************************************************************

    // CONDITIONAL OPERATOR

    // (cond_expre) ? expre_1 : expre_2
    // - if cond_expre == true, then expre_1
    // - if cond_expre == false, then expre_2

    // const int score{75};

    // cout << "your test score was " << score << endl;
    // cout << "that's " << ((score > 80) ? "great!" : "bad...") << endl;

    // cout << "another example" << endl;
    // cout << endl;

    // int num1{}, num2{};

    // cout << "enter two numbers separated by a space: ";
    // cin >> num1 >> num2;
    // cout << endl;

    // cout << "largest: " << ((num1 > num2) ? num1 : num2) << endl;
    // cout << "smallest: " << ((num1 < num2) ? num1 : num2) << endl;

    // ******************************************************************************************************

    // Section 9

    // RANGE BASED FOR-LOOOP
    // introduced in c++11

    /*
    for (var_type var_name: sequence)
        statement; // can use var_name

    for (var_type var_name: sequence) {
        statements; // can use var_name
    }
    */

    //    cout << endl;
    //    cout << "\tRange Based For-Loop\n" << endl;

    //     int arr [] {1,2,3,4,5,6,7,8,9,10};

    //     int scores [] {100, 90, 97};

    //     for (auto score : scores) {
    //         cout << score << endl;
    //     }

    // calculate the average temperature in the vector

    // cout << endl;
    // cout << "Temperature" << endl;
    // cout << endl;

    // vector<double> temps {87.2, 77.1, 80.0, 72.5};

    // for(auto temp : temps) {
    //     cout << temp << endl;
    // }

    // vector<double> temperature {87.9,77.9,80.0,72.5};
    // double average_temperature {};
    // double total{};

    // for(auto temp : temperature){
    //     cout << temp << " ";
    //     total += temp;
    // }

    // cout << endl;

    // if(temperature.size() != 0){
    //     average_temperature = total / temperature.size();
    // }

    // cout << fixed << setprecision(1);
    // cout << "The average temperature is: " << average_temperature << endl;

    // double temp_high {100.78};
    // double temp_low {98.7878};

    // double adds_low_high = temp_high + temp_low;

    // cout << adds_low_high << endl;

    // cout << "setprecision by 2 " << fixed << setprecision(2) << adds_low_high << endl;

    // cout << "setprecision by 1 " << fixed << setprecision(1) << adds_low_high << endl;

    // ******************************************************************************************************

    // NESTED LOOPS

    // cout << "multiplacation table\n" << endl;
    // cout << endl;

    // for (int i {1}; i <= 10; i++) {
    //     for (int j {1}; j <= 10; j++) {
    //         cout << i << " * " << j << " = " << i * j << endl;

    //         if (j == 10) {
    //         cout << "------------" << endl;
    //         }
    //     }
    // }

    // two dimensional arrays with nested loops

    //    vector <vector <int>> vector_2d
    //    {
    //        {1,2,3},
    //        {10,20,30,40},
    //        {100,200,300,400,500}
    //    };

    //    for(auto vec:vector_2d){
    //        for(auto val:vec) {
    //            cout << val << " ";
    //        }
    //        cout << endl;
    //    }

    //    // get and store  value of user inputs

    //    int num_items{};

    //    cout << "how many data item do you have? ";
    //    cin >> num_items;

    //    vector <int> data{};
    //    int input{};

    //    for(int i = 0; i < num_items; i++) {
    //        cout << "Enter value: ";
    //        cin >> input;
    //        data.push_back(input);
    //    }

    //    cout << "\nDisplayig Histogram" << endl;

    //    for(auto val:data){
    //        for(int i = 1; i <= val; i++) {
    //            cout << "-";
    //            if (i % 5 == 0) {
    //                cout << "*";
    //            }
    //        }
    //        cout << endl;
    //    }

    /*
        SECTION 9 CHALLENGE
    */

    // struct Menu
    // {
    //     void printMenu()
    //     {
    //         cout << "P - Pring numbers\n"
    //                 "A - Add a number\n"
    //                 "M - Display mean of the numbers \n"
    //                 "S - Display the smallest number\n"
    //                 "L - Display the largest number\n"
    //                 "Q - Quit"
    //              << endl;
    //     }
    // };

    // Menu menu;
    // char selection;
    // vector<int> vec_list;
    // int input{};
    // int mean{};
    // int smallest{};
    // int largest{};

    // menu.printMenu();

    // cout << "Enter your choice: ";
    // cin >> selection;

    // while (selection != 'q')
    // {
    //     if (islower(selection))
    //     {
    //         selection = toupper(selection);
    //     }

    //     switch (selection)
    //     {
    //     case 'P':
    //         if (vec_list.empty())
    //         {
    //             cout << "list is empty" << endl;
    //         }
    //         else
    //         {
    //             cout << "Printing number: " << endl;
    //             cout << "[ ";
    //             for (auto vec : vec_list)
    //             {
    //                 cout << vec << " ";
    //             }
    //             cout << "]" << endl;
    //         }
    //         break;
    //     case 'A':
    //         cout << "enter integer to add to list: ";
    //         cin >> input;
    //         cout << "Adding number: " << input << endl;
    //         vec_list.push_back(input);
    //         break;
    //     case 'M':
    //         cout << "Calculating mean of the numbers" << endl;
    //         for (auto vec : vec_list)
    //         {
    //             mean += vec;
    //         }
    //         mean /= vec_list.size();
    //         cout << "mean = " << mean << endl;
    //         break;
    //     case 'S':
    //         cout << "Displaying the smallest number" << endl;
    //         if (vec_list.empty())
    //         {
    //             cout << "list is empty, add integers first..." << endl;
    //         }
    //         else
    //         {
    //             smallest = vec_list.at(0);
    //             for (auto vec : vec_list)
    //             {
    //                 if (vec < smallest)
    //                 {
    //                     smallest = vec;
    //                 }
    //             }
    //             cout << "smallest: " << smallest << endl;
    //         }
    //         break;
    //     case 'L':
    //         cout << "Displaying the largest number" << endl;
    //         if (vec_list.empty())
    //         {
    //             cout << "list is empty, add integers first..." << endl;
    //         }
    //         else
    //         {
    //             largest = vec_list.at(0);
    //             for (auto vec : vec_list)
    //             {
    //                 if (vec > largest)
    //                 {
    //                     largest = vec;
    //                 }
    //             }
    //             cout << "largest: " << largest << endl;
    //         }
    //         break;
    //     }

    //     cout << endl;

    //     menu.printMenu();
    //     cout << "Enter your choice: ";
    //     cin >> selection;
    //     cout << endl;
    // }

    // cout << "Quitting program" << endl;

    // SECTION CHALLENGE COMPLETED
    // ************************************************************************************************
    // ************************************************************************************************

    // SECTION 10 - CHARACTERS AND STRINGS

    // USING C STYLE STRINGS

    // char str[80];

    // strcpy(str, "Hello ");

    // strcat(str,  "there ");

    // cout << str << endl;

    // WORKING WITH C STYLE STTINGS
    // CREATE GREETING MESSAGE WITH CHARACTERS

    // char full_name[20] {};
    // char first_name[20] {};
    // char last_name[20]{};
    // char temp [50] {};

    // cout << "Enter your first name: ";
    // cin >> first_name;
    // cout << "Enter your last name: ";
    // cin >> last_name;

    // strcpy(full_name, first_name);
    // strcat(full_name, " ");
    // strcat(full_name, last_name);

    // cout << "Hello " << full_name << " your first name has " << strlen(first_name) << " letters."
    // << " your last name has " << strlen(last_name) << " letters." << endl;

    // GET FULL USER INPUT GETLINE

    // cout << "Enter your full name: ";
    // cin.getline(full_name, 50);

    // cout << "your full name is "  << full_name << endl;

    // CODING EXERCISE 18: USING C-STYLE STRINGS

    // char first_name [20] {"Bjarne"};
    // char last_name [20] {"Stroustrup"};
    // char whole_name [50] {};

    // size_t first_name_length {strlen(first_name)};
    // size_t last_name_length {strlen(last_name)};
    // size_t whole_name_length {strlen(first_name) + strlen(last_name) + 1};

    // strcpy(whole_name, first_name);
    // strcat(whole_name, " ");
    // strcat(whole_name, last_name);

    // cout << whole_name << endl;

    // CODING EXERCISE 19: USING C++ STRINGS - EXCERSICE 1

    // string unformatted_full_name {"StephenHawking"};
    // string first_name {};
    // string last_name {};
    // string formatted_full_name {};

    // first_name += unformatted_full_name.substr(0,7);
    // last_name += unformatted_full_name.substr(7,unformatted_full_name.length());
    // formatted_full_name = first_name + " " + last_name;

    // cout << formatted_full_name << endl;

    // CODING EXERCISE 20: USING C++ STRINGS - EXERCISE 2

    /*
     * In this exercise you will create a program that will be used in a digital library
     * to format and sort journal entries based on the authors last name. Each entry has
     * room to store only the last name of the author.
     *
     * Begin by removing the first name "Isaac" from the string variable journal_entry_1
     * by using the string function erase. Do not forget to remove whitespace so that the
     * string variable journal_entry_1 will then contain the string "Newton" with no
     * whitespaces.
     *
     * Create an if statement so that if the last name contained within journal_entry_2 is
     * alphabetically less than the last name contained within journal_entry_1, then the
     * string values are swapped using the string function swap.
     *
     * You may either of the comparison operators <> in the if statement but remember that
     * following ASCII, "A" is lexicographically lower than "B".
     */

    // string journal_entry_1 {"Isaac Newton"};
    // string journal_entry_2 {"Leibniz"};

    // cout << journal_entry_1 << endl;

    // journal_entry_1.erase(0,6);

    // cout << journal_entry_1 << endl;

    // if (journal_entry_1 > journal_entry_2) {
    //     journal_entry_1.swap(journal_entry_2);
    // }

    // cout << "journal entry 1: " << journal_entry_1 << endl;
    // cout << "journal entry 2: " << journal_entry_2 << endl;

    // ************************************************************************************************
    // ************************************************************************************************

    // SECTION 10 CHALLENGE QUESTION -- SUBSTITUTION CIPHER

    /*
     * A simple and very old method of sending secret messages is the substitution cipyer.
     * You might have used this cipher with your friends when you were a kid.
     * Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
     * For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.
     *
     * Write a program that asks a user to enter a secret message.
     *
     * Encrypt this message using the substitution cipher and display the encrypted message. Then decryped
     * the encrypted message back to the original message.
     *
     * You may use 2 strings below for your substitution.
     * For example, to encrypt you can replace the character at position n in alphabet
     * with the character at position n in key.
     *
     * To decrypt you can replace the character at position n in key with character at position n
     * in alphabet.
     */

    //    string user_input_message {""};
    //    string secret_message_encrypted {""};
    //    string secret_message_decrypted {""};

    //    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    //    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

    //    cout << "Enter message to drecrypt: ";
    //    getline(cin, user_input_message);
    //    cout << endl;

    //    cout << "Your message: " << user_input_message << endl;
    //    cout << "now encrypting your message" << endl;

    //    for (char c : user_input_message) {
    //        size_t position = alphabet.find(c);

    //        if(position != string::npos) {
    //            secret_message_encrypted += key.at(position);
    //        } else {
    //            secret_message_encrypted += c;
    //        }
    //    }

    //     cout << "Encrypted message: " << secret_message_encrypted << endl;
    //     cout << endl;

    //     cout << "Decrypting message..." << endl;

    //     for (char c : secret_message_encrypted) {
    //         size_t position = key.find(c);

    //         if (position != string::npos) {
    //             secret_message_decrypted += alphabet.at(position);
    //         } else {
    //             secret_message_decrypted += c;
    //         }
    //     }

    //     cout << "Decrypted message: " << secret_message_decrypted << endl;

    // *******************************************************************************************
    // *******************************************************************************************

    // SECTION 11

    /*
     * Coding exercise 21: Using Functions from the cmath Library
     */

    // double bill_total{102.78};
    // int number_of_guests{5};

    // // ********************************

    // double individual_bill{bill_total / double(number_of_guests)};

    // cout << "individual bill not rounded: " << individual_bill << endl;
    // cout << endl;

    // // At location 1 - rounds down to nearest dollar
    // double individual_bill_1{floor(individual_bill)};
    // cout << "rounded down to nearest dollar: " << individual_bill_1 << endl;
    // cout << endl;

    // // At location 2 - rounds to the nearest dollar
    // double individual_bill_2{round(individual_bill)};
    // cout << "rounded to the nearest dollar: " << individual_bill_2 << endl;
    // cout << endl;

    // // At location 3 - rounds up to the neares cent.
    // double individual_bill_3{ceil((individual_bill * 100.00)) / 100.00};
    // cout << "rounded to the nearest cent: " << individual_bill_3 << endl;
    // cout << endl;

    // *******************************************************************************************
    // *******************************************************************************************

    // PASSING ARRAYS INTO FUNCTIONS

    // int my_scores[] {100, 98, 90, 86, 84};

    // print_array(my_scores,5);
    // set_array(my_scores, 5, 100);
    // print_array(my_scores, 5);



    // *******************************************************************************************
    // *******************************************************************************************

    // PASSING VECTOR BY REFERENCE

    // vector<int> my_vec {10, 4, 7, 10};

    // print_vector(my_vec);


    // *******************************************************************************************
    // *******************************************************************************************

    // RECURSIVE FUNCTIONS

    // cout << "a penny doubled for 25 days: " << a_penny_doubled_everyday(25, 0.01) << endl;


    // *******************************************************************************************
    // *******************************************************************************************

    // POINTERS AND REFERENCES -- ran on Mac mini M1

    // a pointer is a variable

    // cout << endl;

    // int *p;

    // cout << "value of p is: " << p << endl; // 0x104842c8c - garbage

    // cout << "Address of p is: " << &p << endl; // 0x16b5bf4b0

    // cout << "sizeof of p is: " << sizeof(p) << endl; // 8

    // p = nullptr;

    // cout << "value of p is: " << p << endl; // 0x0

    // // example with pointer

    // int score {10};
    // double high_temp {100.7};

    // int *score_ptr {nullptr};

    // score_ptr = &score;


    // simple pointers

//     int num {10};
//     cout << "Value of num is: " << num << endl;
//     cout << "sizeof of num is: " << sizeof num << endl;
//     cout << "address of num is: " << &num << endl;
//     cout << endl;

//     int *p;
//     cout << "Value of p is: " << p << endl;
//     cout << "address of p is: " << &p << endl;
//     cout << "size of p is: " << sizeof p << endl;

//     p = nullptr;
//     cout << "value of p is: " << p << endl;
//     cout << endl;
//     cout << "************************************" << endl;
//     cout << endl;

//     int *p1 {nullptr};
//     double *p2 {nullptr};
//     unsigned long long *p3 {nullptr};
//     vector<string> *p4{nullptr};
//     string *p5 {nullptr};

//     cout << "size of p1: " << sizeof p1 << endl;
//     cout << "size of p2: " << sizeof p2 << endl;
//     cout << "size of p3: " << sizeof p3 << endl;
//     cout << "size of p4: " << sizeof p4 << endl;
//     cout << "size of p5: " << sizeof p5 << endl;
//     cout << endl;
//     cout << "************************************" << endl;
//     cout << endl;


//     // pointer points to address of type 

    // int score{10};
    // int *score_ptr {nullptr};

    // score_ptr = &score;

    // cout << "value of score: " << score << endl;
    // cout << "address of score: " << &score << endl;
    // cout << "value of score_ptr: " << score_ptr << endl; // should be the same as &score


//     // *******************************************************************************************
//     // *******************************************************************************************
    
// dynamic memory allocation


// int *int_ptr {nullptr};

// int_ptr = new int; // allocation memory

// cout << int_ptr << endl;

// cout << *int_ptr << endl;

// delete [] int_ptr;

// // create a continues block of memory on the heap
// // ask user how many doubles they need

// size_t size {0};
// double *temp_ptr {nullptr}; 

// cout << "How many temps? ";
// cin >> size; 
// cout << endl;

// temp_ptr = new double [size];

// cout << temp_ptr << endl;

// delete [] temp_ptr;


//     // *******************************************************************************************
//     // *******************************************************************************************

// Referecences

// int num {100};
// int &ref{num};


// cout << endl;
// cout << "display variable num: " << num << endl;
// cout << endl;
// cout << "display reference variable: " << ref << endl;
// cout << endl;

// vector<string> stooges {"larry", "moe", "curly"};
// vector<string> &refStooges{stooges};

// for (auto str:stooges) {
//     cout << str << " ";
// }
// cout << endl;
// cout << endl;

// cout << "displays refStooges " << endl;
// for(auto str:refStooges) {
//     cout << str << " ";
// }
// cout << endl;

// //     // *******************************************************************************************
// //     // *******************************************************************************************

//     return 0;
// }

// void print_array(const int arr[], size_t size) {
//     for(int i = 0; i < size; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void set_array(int arr[], size_t size, int value) {
//     for(int i = 0; i < size; i++){
//         arr[i] = value;
//     }
//     cout << endl;
// }

// void print_vector(const vector<int> &v) {

//     for(auto vec : v) {
//         cout << vec << " ";
//     }
//     cout << endl;
// }

// double a_penny_doubled_everyday(int days, double amount) {

//     if (days == 1)
//         return amount;
    
//     return a_penny_doubled_everyday(days - 1, amount * 2);
// }

// Section 8 Challege
/*
    For this program I will be using US dollars and cents.

    Write a program that asks the user to enter the following:
    An integer representing the number of cents

    You may assume that the number of cents entered is greater than or equal to zero

    The program should then display how to provide that change to the user.

    In the US:
        1 Dollar is 100 cents
        1 quarter is 25 cents
        1 dime is 10 cents
        1 nickel is 5 cents, and
        1 penny is 1 cent.

    Here is a sample run:

    Enter an amount in cents: 92

    You can provide this change as follows:
    dollars: 0
    quarters: 3
    dimes: 1
    nickels: 1
    pennies: 2

*/


// #include <iostream>

// using namespace std;

// int main() {

//     const int s_dollars {1};
//     const double s_quarters {0.25};
//     const double s_dimes {0.1};
//     const double s_nickels (0.05);
//     const double s_pennies {0.01};
//     double user_input {0};

//     cout << "Enter an amout in cents: ";
//     cin >> user_input;

//     cout << "You can provide this change as follows:" << endl;
//     cout << endl;

//     cout << "dollars: " << user_input / s_dollars << endl;
//     user_input -= (user_input / s_dollars);

//     cout << "quarters: " << user_input / s_quarters << endl;
//     user_input -= s_quarters * (user_input / s_quarters);

//     cout << "dimes: " << user_input / s_dimes << endl;
//     user_input -= s_dimes * (user_input / s_dimes);

//     cout << "pennies: " << user_input / s_pennies << endl;
//     user_input -= s_pennies * (user_input / s_pennies);

//     return 0;
// }

// Section 6
// Challenge

/*
Franks Carpet Cleaning Service 

Charges:
    $25 per small room
    $35 per large room
Sales tas rate is 6%
Estimates are valid for 30 days

Prompt the user for the number of small and large rooms they woule like cleaned
and provide an estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost: $110
Tax: $6.6
====================================================
Total estimate $116.6
This estimate is valid for 30 days
*/


// #include <iostream>

// using namespace std;

// int main() {

//     int num_of_small_rooms {0};
//     int num_of_large_rooms {0};
//     double small_room_price {25.00};
//     double large_room_price {35.00};
//     double tax_rate {0.06};
//     double tax_amout {0};
//     double total_before_taxes {0};
//     double total_estimate {0};

//     cout << "Hello, Welcome to Frank's Carpet Cleaning Service" << endl;
//     cout << endl;

//     cout << "How many small rooms would you like cleaned? ";
//     cin >> num_of_small_rooms;
//     cout << endl;

//     cout << "How many large rooms would you like cleaned? ";
//     cin >> num_of_large_rooms;
//     cout << endl;

//     // Calculate total cost
//     total_before_taxes = (num_of_small_rooms * small_room_price) + (num_of_large_rooms * large_room_price);
//     tax_amout = total_before_taxes * tax_rate;
//     total_estimate = total_before_taxes + tax_amout;

//     cout << "Estimate for carpet cleaning service" << endl;
//     cout << "Number of small rooms: " << num_of_small_rooms << endl;
//     cout << "Number of large rooms: " << num_of_large_rooms << endl;
//     cout << "Price per small room: " << small_room_price << endl;
//     cout << "Price per large room: " << large_room_price << endl;
//     cout << "Cost: $" << total_before_taxes << endl;
//     cout << "Tax: $" << tax_amout << endl;
    
//     for (int i = 1; i < 5; i++) {
//         cout << "======";
//     }
//     cout << endl;

//     cout << "Total estimate: $" << total_estimate << endl;
//     cout << "This is valid for 30 Days" << endl;
//     cout << endl;

//     return 0;
// }

// Arrays / Vectors

// #include <iostream>
// #include <vector>

// using namespace std;

// int main () {
//     int high_score_per_level[10] {};

//     high_score_per_level[0] = 10;

//     cout << high_score_per_level[0] << endl;


//     int row {2};
//     int col {3};

//     vector <vector<int>> v_vector(row, vector<int>(col, 0));

//     for(int i = 0; i < v_vector.size(); i++) {
//         for(int j = 0; j<v_vector.at(i).size(); j++) {
//             cout << v_vector[i][j] << " ";
//         }
//         cout << endl;
//     }
//     cout << endl;
//     cout << "vector size: " << endl;

//     cout << v_vector.size() << endl;

//     cout << v_vector.at(1).at(0) << endl;

//     vector <int> vec (5);

//     cout << "vec size: " << endl;
//     cout << vec.size() << endl;
//     cout << endl;

//     vec.at(vec.size() -1) = 1000;

//     cout << "vec's last number" << endl;
//     cout << vec.at(4);
//     cout << endl;

//     return 0;
// }

/*
Section 7
Challenge

Write a C++ program as follows:

Declare 2 empty vector of integers named 
vector1 and vector2, respectively

Add 10 and 20 to vector1 dynamically using puch_back
Display the elements in vector1 using the at() method as well as its size using the size() method

Add 100 and 200 to vector2 dynamilly using push_back
Display the elements in vector2 using the at() method as well as its size using the size() method

Declare an empty 2D vector called vector_2d
Remember, that a 2D vecotr is a vector of vector<int>

Add vector1 to vector_2d dynamically using push_back
Add vector2 to vector_2d dynamically using pusch_back

Display the elements in vector_2d using the at() method

change vector1.at(0) to 1000

Display the elements in vector_2d again using the at() method

Display elements in vector1

*/

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//     vector<int> vector1;
//     vector<int> vector2;

//     vector1.push_back(10);
//     vector1.push_back(20);

//     cout << "vector1.at(0) is " << vector1.at(0) << endl;
//     cout << "vector1.at(1) is " << vector1.at(1) << endl;
//     cout << endl;

//     vector2.push_back(100);
//     vector2.push_back(200);

//     cout << "vector2.at(0) is " << vector2.at(0) << endl;
//     cout << "vector2.at(1) is " << vector2.at(1) << endl;
//     cout << endl;

//     vector <vector<int>> vector_2d;

//     vector_2d.push_back(vector1);
//     vector_2d.push_back(vector2);

//     cout << "vectors added to vector_2d " << endl;
//     cout << endl;

//     cout << "Displaying vector_2d.at(0) : " << endl;
//     for (size_t i = 0; i < vector_2d.at(0).size(); i++) {
//         cout << vector_2d.at(0).at(i) << " ";
//     }
//     cout << endl << endl;

//     cout << "Displaying vector_2d.at(1) : " << endl;
//     for (size_t i = 0; i < vector_2d.at(1).size(); i++) {
//         cout << vector_2d.at(1).at(i) << " ";
//     }
//     cout << endl << endl;

//     // change vector1.at(0) to 1000
//     vector1.at(0) = 1000;
//     cout << "changed vector1.at(0) to 1000 " << endl << endl;

//     cout << "Displaying vector_2d.at(0) again : " << endl;
//     for (size_t i = 0; i < vector_2d.at(0).size(); i++) {
//         cout << vector_2d.at(0).at(i) << " ";
//     }
//     cout << endl << endl;

//     cout << "Displaying vector_2d.at(1) again : " << endl;
//     for (size_t i = 0; i < vector_2d.at(1).size(); i++) {
//         cout << vector_2d.at(1).at(i) << " ";
//     }
//     cout << endl << endl;

//     cout << "Displaying the elements of vector1" << endl;
    
//     for (size_t i = 0; i < vector1.size(); i++ ) {
//         cout << vector1.at(i) << " ";
//     }
//     cout << endl << endl;

//     return 0;
// }

// REVIEW SECTION 8 

// #include <iostream>

// using namespace std;

// int main() {

//     bool equal_result {false};
//     bool not_equal_result {false};

//     int num1 {}, num2{};

//     cout << boolalpha;



//     return 0;
// }

// SEction 8 Challege
/*

For this program I will be suing US dollars and cents

WRite a program that asks the user to enter the following:
An integer representing the number of cents

You may assume that the number of cents entered is greater than or euqual to zero

The probram should then display how to provide that change to the user.

In the US:
    1 dollar is 100 cents
    1 quarter is 25 cents
    1 dime is 10 cents 
    1 nickel is 5 cents, and
    1 penny is 1 cent.

Here is a sample run:

Enter an amount in cents: 92

You can provide this change as follows:
dollars: 0
quarters: 3
dimes: 1
nickels: 1
pennies: 2


Feel free to use your own currency system.
Also, think of how you might solve the probam using the modulo operator

*/

#include <iostream>

using namespace std;

int main() {


    // dollar values
    int one_dollar {1};
    int five_dollar {5};
    int ten_dollar {10};
    int twenty_dollar {20};
    int fifty_dollar {50};
    int one_hundred_dollar {100};

    // cent values
    double pennies {0.01};
    double nickel {0.05};
    double dime {0.1};
    double quarter {0.25};

    double user_amount;


    cout << "Enter an amount in $ Dollar or Cents: ";
    cin >> user_amount;
    cout << endl << endl;

    cout << "You can provide this change as follows:" << endl << endl;

    cout << "one hundred dollars: " << static_cast<int>(user_amount / one_hundred_dollar) << endl;
    
    user_amount -= one_hundred_dollar * static_cast<int>(user_amount / one_hundred_dollar);

    cout << "fifty dollars: " << static_cast<int>(user_amount / fifty_dollar) << endl;

    user_amount -= fifty_dollar * static_cast<int>(user_amount / fifty_dollar);

    cout << "twnty dollars: " << static_cast<int>(user_amount / twenty_dollar) << endl;

    user_amount -= twenty_dollar * static_cast<int>(user_amount / twenty_dollar);

    cout << "ten dollars: " << static_cast<int>(user_amount / ten_dollar) << endl;
    
    user_amount -= ten_dollar * static_cast<int>(user_amount / ten_dollar);

    cout << "five dollars: " << static_cast<int>(user_amount / five_dollar) << endl;

    user_amount -= five_dollar * static_cast<int>(user_amount / five_dollar);

    cout << "one dollars: " << static_cast<int>(user_amount / one_dollar) << endl;

    user_amount -= one_dollar * static_cast<int>(user_amount / one_dollar);

    for (size_t i = 1; i < 10; i++) {
        cout << "===";
    }
    cout << endl << endl;

    cout << "Remainding in cents: " << user_amount << endl << endl;

    cout << "quarters: " << static_cast<int>(user_amount / quarter) << endl;

    user_amount -= quarter * static_cast<int>(user_amount / quarter);

    cout << "dime: " << static_cast<int>(user_amount / dime) << endl;

    user_amount -= dime * static_cast<int>(user_amount / dime);

    cout << "nickel: " << static_cast<int>(user_amount / nickel) << endl;

    user_amount -= nickel * static_cast<int>(user_amount / nickel);

    cout << "pennies: " << user_amount << endl << endl;    


    return 0;
}