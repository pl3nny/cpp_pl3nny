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

// #include <iostream>

// using namespace std;

// int main() {


//     // dollar values
//     int one_dollar {1};
//     int five_dollar {5};
//     int ten_dollar {10};
//     int twenty_dollar {20};
//     int fifty_dollar {50};
//     int one_hundred_dollar {100};

//     // cent values
//     double pennies {0.01};
//     double nickel {0.05};
//     double dime {0.1};
//     double quarter {0.25};

//     double user_amount;


//     cout << "Enter an amount in $ Dollar or Cents: ";
//     cin >> user_amount;
//     cout << endl << endl;

//     cout << "You can provide this change as follows:" << endl << endl;

//     cout << "one hundred dollars: " << static_cast<int>(user_amount / one_hundred_dollar) << endl;
    
//     user_amount -= one_hundred_dollar * static_cast<int>(user_amount / one_hundred_dollar);

//     cout << "fifty dollars: " << static_cast<int>(user_amount / fifty_dollar) << endl;

//     user_amount -= fifty_dollar * static_cast<int>(user_amount / fifty_dollar);

//     cout << "twnty dollars: " << static_cast<int>(user_amount / twenty_dollar) << endl;

//     user_amount -= twenty_dollar * static_cast<int>(user_amount / twenty_dollar);

//     cout << "ten dollars: " << static_cast<int>(user_amount / ten_dollar) << endl;
    
//     user_amount -= ten_dollar * static_cast<int>(user_amount / ten_dollar);

//     cout << "five dollars: " << static_cast<int>(user_amount / five_dollar) << endl;

//     user_amount -= five_dollar * static_cast<int>(user_amount / five_dollar);

//     cout << "one dollars: " << static_cast<int>(user_amount / one_dollar) << endl;

//     user_amount -= one_dollar * static_cast<int>(user_amount / one_dollar);

//     for (size_t i = 1; i < 10; i++) {
//         cout << "===";
//     }
//     cout << endl << endl;

//     cout << "Remainding in cents: " << user_amount << endl << endl;

//     cout << "quarters: " << static_cast<int>(user_amount / quarter) << endl;

//     user_amount -= quarter * static_cast<int>(user_amount / quarter);

//     cout << "dime: " << static_cast<int>(user_amount / dime) << endl;

//     user_amount -= dime * static_cast<int>(user_amount / dime);

//     cout << "nickel: " << static_cast<int>(user_amount / nickel) << endl;

//     user_amount -= nickel * static_cast<int>(user_amount / nickel);

//     cout << "pennies: " << user_amount << endl << endl;    


//     return 0;
// }


// Section 9: Controlling Program Flow

// work on coding exercise 13: Switch statement - Day of the week 


// #include <iostream>

// using namespace std;

// int main() {

//     int day_code {0};

//     switch (day_code)
//     {
//     case 0:
//         cout << "day_code " << day_code << endl;
//         break;
    
//     default:
//         break;
//     }

//     return 0;
// }


// Conditional Operator

// #include <iostream>

// using namespace std;

// int main() {

    // condition.  if true | false
    // (cond_expr) ? expr1 : expr2

    // int num {0};
    
    // cout << "Enter an integer: ";
    // cin >> num;

    // if(num % 2 == 0)
    //     cout << num << " is even" << endl;
    // else
    //     cout << num << " is odd" << endl;

    // cout << endl;

    // cout << num << " is " << (num % 2 == 0 ? "even" : "odd") << endl;

//     int num1{}, num2{};

//     cout << "Enter two integers separated by a space: ";
//     cin >> num1 >> num2;

//     if(num1 != num2) {
//         cout << "Largest: " << (num1 > num1 ? num1 : num2) << endl;
//         cout << "smallest: " << (num1 < num2 ? num1 : num2) << endl;
//     } else {
//         cout << "the numbers are teh same" << endl;
//     }
//     return 0;
// }


// Review looping and try out coding excersise 14

// #include <iostream>

// using namespace std;

// int main() {

//     int sum {0};
    
//     for (int i = 1; i <= 15; i++) {
//         if(i % 2 == 0) {
//         } else {
//             sum += i;
//         }
//     }

//     cout << "sum: " << sum << endl;

//     return 0;
// }

// Range For - Loop <vectors>

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//      vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    
//     int count {0};
    
//     for(auto x : vec) {
//         if(x % 3 == 0 || x % 5 == 0) {
//             count++;
//         }
//     }

//     cout << "count: " << count << endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//     vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,-99,700};

//     int count {0};

//     while(count < vec.size()) {
//         if (vec.at(count) == -99) {
//             break;
//         }

//         count++;
//     }

//     cout << vec.size() - 1 << endl;
//     cout << vec.at(count) << endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//     vector<int> vec {1,2,3};

//     int result {};
    
//     if(vec.size() == 0 || vec.size() == 1) {
//         result = 0;
//     } else {
//         for(int i = 0; i < vec.size() - 1; i++) {
//             for(int j = i+1; j < vec.size(); j++) {
//                 result += (vec.at(i) * vec.at(j));
//             }
//         }
//     }

//     cout << "result: " << result << endl;

//     return 0;
// }

// Section 9 Challenge 


/*
This challenge is about using a collection (list) of integers and allowing the user
to select options from a menu to perform operation on the list.

Your program shoud display a menu optins to the user as follows:


P - Print numbers
A - Add a number
M - Display mean of the numbers
S - Display the smallest number
L - Display the largest number
Q - Quit

Enter your choice: 

The program should only accept valid voices from the user, both uper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options shold be
displayed again.


If the user enters 'P' or 'p' you should display all of the elemens (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list elements should be displayed in side square brakets separated by a space.
For example, [ 1 2 3 4 5 ]

If hte user enters 'A' or 'a' then you should prompot the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".


and yade-yade-yade-yada
*/

// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {

//     char user_input {};
//     vector <int> vec  {1, 2, 3, 4, 5 };
//     int add_num_to_vector {};
//     bool quit {false};
//     int mean_of_numbers {};
//     int smallest_number_in_list {};
//     int largest_number_in_list {};

//     while(!quit) {

//         cout << endl;
//         cout << "P - Print numbers" << endl;
//         cout << "A - Add a number" << endl;
//         cout << "M - Display mean of the numbers" << endl;
//         cout << "S - Display the smallest number" << endl;
//         cout << "L - Display the largest number" << endl;
//         cout << "Q - Quit" << endl << endl;

//         cout << "Enter your choice: ";
//         cin >> user_input;

//         switch (user_input) {
//             case 'P': 
//                 cout << "[ ";
//                 for (size_t i = 0; i < vec.size(); i++){
//                     cout << vec.at(i) << " ";
//                 }
//                 cout << "]" << endl;
//                 break;
//             case 'p':
//                 cout << "[ ";
//                 for (size_t i = 0; i < vec.size(); i++){
//                     cout << vec.at(i) << " ";
//                 }
//                 cout << "]" << endl;
//                 break;

//             case 'A':
//                 cout << "Enter number to add to list: ";
//                 cin >> add_num_to_vector;
//                 vec.push_back(add_num_to_vector);
//                 break;
//             case 'a':
//                 cout << "Enter number to add to list: ";
//                 cin >> add_num_to_vector;
//                 vec.push_back(add_num_to_vector);
//                 break;

//             case 'M':
//                 for(size_t i = 0; i < vec.size(); i++){
//                     mean_of_numbers += vec.at(i);
//                 }
//                 mean_of_numbers /= vec.size();
//                 cout << "Mean: " << mean_of_numbers << endl;
//                 break;
//             case 'm':
//                 for(size_t i = 0; i < vec.size(); i++){
//                     mean_of_numbers += vec.at(i);
//                 }
//                 mean_of_numbers /= vec.size();
//                 cout << "Mean: " << mean_of_numbers << endl;
//                 break;

//             case 'S':
//                 smallest_number_in_list = vec.at(0);

//                 for(size_t i = 1; i < vec.size(); i++){
//                     if(smallest_number_in_list > vec.at(i)){
//                         smallest_number_in_list = vec.at(i);
//                     } else {
//                         // do nothing
//                     }
//                 }
//                 cout << "smallest number: " << smallest_number_in_list << endl;
//                 break;
//             case 's':
//                 smallest_number_in_list = vec.at(0);

//                 for(size_t i = 1; i < vec.size(); i++){
//                     if(smallest_number_in_list > vec.at(i)){
//                         smallest_number_in_list = vec.at(i);
//                     } else {
//                         // do nothing
//                     }
//                 }
//                 cout << "smallest number: " << smallest_number_in_list << endl;
//                 break;

//             case 'L':
//                 largest_number_in_list = vec.at(0);

//                 for(size_t i = 1; i < vec.size(); i++){
//                     if(largest_number_in_list < vec.at(i)){
//                         largest_number_in_list = vec.at(i);
//                     } else {
//                         // do nothing
//                     }
//                 }
//                 cout << "largest number: " << largest_number_in_list << endl;
//                 break;
//             case 'l':
//                 largest_number_in_list = vec.at(0);

//                 for(size_t i = 1; i < vec.size(); i++){
//                     if(largest_number_in_list < vec.at(i)){
//                         largest_number_in_list = vec.at(i);
//                     } else {
//                         // do nothing
//                     }
//                 }
//                 cout << "largest number: " << largest_number_in_list << endl;
//                 break;

//             case 'Q':
//                 quit = true;
//                 break;
//             case 'q':
//                 quit = true;
//                 break;

//             default:
//                 cout << "incorrect input, please try again.." << endl;
//                 break;
//         }
//     }
//     cout << endl;
//     cout << "Program terminated" << endl;

//     return 0;
// }


// ======================================================================
// SECTION 10 OVERVIEW / REVIEW
//      CHARACTER AND STRINGS
// ======================================================================

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main () {

//     char first_name [20] {"Alexander"};
//     char last_name [20] {"Hernandez"};
//     char whole_name [50] {};

//     cout << first_name << " " << last_name << endl;

//     cout << "Fist Name: " << first_name << " " << "Last Name: " << last_name << endl;
//     cout << "First name length: " << strlen(first_name) << " " << "Last name length: " << strlen(last_name) << endl;
//     cout << "first and last name together: ";

//     strcpy(whole_name, first_name);
//     strcat(whole_name, " ");
//     strcat(whole_name, last_name);

//     cout << whole_name << endl;
//     cout << "Whole name length: " << strlen(whole_name) << endl;

//     return 0;
// }


// STRINGS

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     string full_name = "Alexander Hernandez";

//     cout << endl;
//     cout << "My name is " << full_name << endl << endl;

//     cout << "extracting first name..." << endl;    

//     string first_name {full_name, 0, (full_name.find(" "))};

//     cout << "white space position: " << full_name.find(" ") << endl;

//     cout << "fist_name: " << first_name << endl;

//     string last_name {full_name, (full_name.find(" ") + 1), full_name.length()};

//     cout << "last_name: " << last_name << endl;

//     cout << "erasing last name from: " << full_name << endl;

//     full_name = full_name.erase(full_name.find(" ") + 1, full_name.length());

//     cout << "last name erased..." << endl << endl;

//     cout << "full_name: " << full_name << endl;

//     // get first name

//     getline(cin, first_name);
//     cout << "first_name: " << first_name << endl;
//     return 0;
// }


// CODING EXERCISE 20: USING C++ STRINGS EXERCISE 1

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     string unformated_full_name {"StephenHawking"};

//     string first_name {};
//     string last_name {};
//     string formatted_full_name {};

//     first_name = unformated_full_name.substr(0,unformated_full_name.find("H"));
//     last_name = unformated_full_name.substr(first_name.length(), unformated_full_name.length());

//     cout << endl;
//     cout << "first name: " << first_name << endl;
//     cout << "last name: " << last_name << endl;

//     formatted_full_name = first_name + last_name;
//     formatted_full_name.insert(first_name.length(), " ");

//     cout << "formateed full name: " << formatted_full_name << endl;

//     return 0;
// }


// CODING EXERCISE 20: USING C++ STRINGS EXERCISE 2

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     string journal_entry_1 {"Isaac Newton"};
//     string journal_entry_2 {"Leibniz"};

//     cout << "journal entry 1: " << journal_entry_1 << endl;
//     cout << "jounral entry 2: " << journal_entry_2 << endl << endl;

//     cout << "erasing first name from journal entry 1.." << endl;
//     journal_entry_1.erase(0, journal_entry_1.find("N"));
//     cout << "journal entry 1: " << journal_entry_1 << ", length: " << journal_entry_1.length() << endl;

//     if(journal_entry_1.at(0) > journal_entry_2.at(0)) {
//         swap(journal_entry_1, journal_entry_2);
//     }

//     cout << "journal entry 1: " << journal_entry_1 << endl;
//     cout << "journal entry 2: " << journal_entry_2 << endl;

//     return 0;
// }


// SECTION 10 CHALLENGE - SUBSTITUTION CIPHER

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid. 
Basically, wach letter of the alphaber gets replaced by another letter of the alphabet.
For example, every 'a' gets replaced with an 'X', and every 'b' gets replaced with a 'Z', etc..


Write a program that asks a user to enter a secret message.

Encrypt this message using the substition cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for your substitution.
For exmaple, to exrypt you can repace the character at position n in alphabet with the character
at position n in key.

To decrypt you can replace the character at psotiion n in key
with the character at position n in alphabet.

Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace,
and so forth. Also, currenctly the cipher always substitues a lowercase letter with an uppercase letter
and vice versa. This could also be improved.

Remember, the less code you write the less code you have to test!
Resuse existing functionality in libraries and in the std::string class
*/

// #include <iostream>
// #include <string>

// using namespace std;

// int main() {

//     string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
//     string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjkqdyvtkfuompciasr,"};


//     string user_secret_message {};

//     cout << "Enter your secret message: ";
//     getline(cin, user_secret_message);

//     cout << endl;
//     cout << user_secret_message << endl;

//     cout << " encrypting message " << endl;

//     for(size_t i = 0; i < user_secret_message.length(); i++) {
//         user_secret_message.at(i) = key.at(alphabet.find(user_secret_message.at(i)));
//     }

//     cout << "message encrypted: " << user_secret_message << endl << endl;

//     cout << "un-encrypting message.." << endl;

//     for(size_t i = 0; i < user_secret_message.length(); i++) {
//         user_secret_message.at(i) = alphabet.at(key.find(user_secret_message.at(i)));
//     }

//     cout << "finished decrypting message: " << user_secret_message << endl;
//     cout << endl;


//     return 0;
// }


// =============================================================================
// SECTION 11 FUNCTIONS
// =============================================================================

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main() {

//     double num {};

//     cout << "enter a number: ";
//     cin >> num;

//     cout << "the sqrt of " << num << " is: " << sqrt(num) << endl;
//     cout << "the cubed of " << num << " is: " << cbrt(num) << endl;
//     cout << endl;
//     cout << "The sine of " << num << " is: " << sin(num) << endl;
//     cout << "the cosine of " << num << " is: " << cos(num) << endl;
//     cout << endl;
//     cout << "the Ceil of " << num << " is: " << ceil(num) << endl;
//     cout << "the floor of " << num << " is: " << floor(num) << endl;
//     cout << "the round of " << num << " is: " << round(num) << endl;
//     cout << endl;

//     double power {};

//     cout << "Enter a power to raise " << num << " to: ";
//     cin >> power;

//     cout << endl;
//     cout << num << " raised to the " << power << " power is. " << pow(num,power) << endl;

//     return 0;
// }


// #include <iostream>

// using namespace std;

// int raise_to_power(int, int);

// int main() {

//     cout << 2 << " to the power of " << 5 << " : " << raise_to_power(2,5) << endl;

//     return 0;
// }
// int raise_to_power(int num1, int num2) {
//     int result = num1;
//     int raise_to_power = num2;

//     for(size_t i = 0; i < num2; i++){
//        result *= raise_to_power;
//     }

//     return result;
// }

// CODING EXERCISE 23: FUNCTIONS AND PROTOTYPES CONVERTING TEMPERATURES

/*
In this exercise you will create a program that will be used to convert Fahrenheit temperatures to
Celsius and Kelvin temperatures through the use of two functions.

For this program, assume that temperature will be represented as a double value.

Begin by defining the function prototypes for the functions fahrenheit_to_celsius and
fahrenheit_to_kelvin which are both passed a double value and return a double value.

Now, at the bottom of the file, write the full definitions of both functions.

The function fahrenheit_to_celsius is passed a Fahrenheit temperature and returns a rounded
Celsius temperature. You may use the <cmath> function round in order to round the return value.
The formula to convert Fahrenheit to Celsius is (5.0/9.0)*(temperature - 32). 

The function fahrenheit_to_kelvin is passed a Fahrenheit temperature and returns a rounded Kelvin
temperature. The formula to convert Fahrenheit to Kelvin is (5.0/9.0)*(temperature - 32) + 273.

Remember the rules of PEMDAS when defining the body of your functions.

Now, from the temperature_conversion function, declare and initialize the variables celsius_temperature
and kelvin_temperature by calling the appropriate functions which you have just defined and passing the
variable fahrenheit_temperature.

You do not need to declare or initialize fahrenheit_temperature as it is already available to you as a
parameter of the temperature_conversion function.
*/

// #include <iostream>
// #include <string>
// #include <cmath>

// double fahrenheit_to_celsius(double);
// double fahrenheit_to_kelvin(double);

// using namespace std;

// int main() {

//     cout << "Author: Alexander Hernandez" << endl << endl;

//     cout << "\tConverting Temperatures" << endl << endl;

//     double fahrenheit_temperature {};
//     cout << "enter a temperature: ";
//     cin >> fahrenheit_temperature;

//     cout << endl << endl;

//     cout << "the temperature for " << fahrenheit_temperature << " in celsius is " << fahrenheit_to_celsius(fahrenheit_temperature)
//         << " and the temperature in kelvin is " << fahrenheit_to_kelvin(fahrenheit_temperature) << endl;

//     return 0;
// }

// // (5.0/9.0)*(temperature - 32)

// double fahrenheit_to_celsius(double f_value) {
//     return round((5.0/9.0)*(f_value - 32));
// }
// double fahrenheit_to_kelvin (double f_value) {
//     return round((5.0/9.0)*(f_value - 32) + 273);
// }

/*
Overloading Functions - Calculating Area
In this exercise you will create a program that computes the area of two shapes, a square and a
rectangle, by calling the overloaded function find_area.

Begin by declaring the function prototypes for the square find_area function and the rectangle
find_area function.

The square find_area function is passed an integer value and returns an integer value.

The rectangle find_area function is passed two double values and returns a double value.

Remember that both function prototypes should have the same function name find_area.

Now that the function prototypes have been declared,  at the bottom of the file define both functions.

The square find_area function will be passed the argument side_length and return the area of the square.
The formula for the area of a square is side_length*side_length . You may use the <cmath> function pow
to compute this value if you wish.

The rectangle find_area function will be passed the arguments length and width and return the area of
the rectangle. The formula for the area of a rectangle is length*width.

Now, from the function body of area_calc, declare and initialize the variables square_area and
rectangle_area by calling the find_area function and passing the appropriate arguments which are
listed below.

The square has a side_length of 2.

The rectangle has a length of 4.5 and a width of 2.3.

You can find my solution by clicking on the solution.txt file on the left pane. But please make sure
you give it a go yourself first, and only check the solution if you really get stuck.
*/

// #include <iostream>
// #include <cmath>

// using namespace std;

// int find_area(int);
// double find_area(double, double);

// int main() {

//     int side_length {};
//     double length, width {};

//     cout << "enter side length: ";
//     cin >> side_length;
//     cout << "Enter length and width: ";
//     cin >> length >> width;

//     cout << endl << endl;
//     cout << "the area of a square is: " << find_area(side_length) << endl;
//     cout << "the are of a rectangle is: " << find_area(length, width) << endl;
//     return 0;
// }

// int find_area(int value) {
//     return pow(value, 2);
// }

// double find_area(double length, double width) {
//     return length * width;
// }

// #include <iostream>

// using namespace std;

// long long int getsfactorial(int);
// long long int fibunacci(int);

// int main() {

//     int number {5};
//     cout << "factorial of " << number << " : " << getsfactorial(number) << endl;
//     cout << "testing complete .. " << endl << endl;

//     cout << "Input a number to get factial: ";
//     cin >> number;

//     while (number != -1) {
//         cout << endl << endl;
//         cout << "result: " << getsfactorial(number) <<endl;
//         cout << "Input a number to get factial: ";
//         cin >> number;
//     }

//     cout << endl;
//     cout << "now starign fibunacci program.." << endl << endl;

//     int fib_number {5};
//     cout << "fibunacci of " << fib_number << " : " << fibunacci(fib_number) << endl;
//     cout << "testing complete for fibunacci.." << endl << endl;

//     cout << "input a number to get fibunacci :";
//     cin >> fib_number;

//     while(fib_number != -1) {
//         cout << endl << endl;
//         cout << "result : " << fibunacci(fib_number) <<endl;
//         cout << "input a number to get fibunacci :";
//         cin >> fib_number;
//     }

//     return 0;
// }

// long long getsfactorial(int fac_num) {
//     if(fac_num == 0) {
//         return 1;
//     } else if (fac_num == 1) {
//         return 1;
//     } else {
//         return fac_num * getsfactorial(fac_num - 1);
//     }
// }

// long long fibunacci(int fib_num) {
//     if(fib_num == 0) {
//         return 0;
//     } else if( fib_num == 1) {
//         return 1;
//     } else {
//         return fibunacci(fib_num-1) + fibunacci(fib_num-2);
//     }
// }

// #include <iostream>
// using namespace std;

// int sum_of_digits(int);
// double a_penny_doubled_everyday (int days, double amount = 0.01);

// int main() {

//     int num {1234};

//     cout << endl;
//     cout << "mod operator gets the last digit of the number: " << num << " % " << 10 << " = " << num % 10 << endl;
//     cout << "div operator removes the last digit of the number: " << num << " / " << 10 << " = " << num % 10 << " = " << num / 10 << endl;

//     cout << endl << endl;

//     cout << "\tsum of digits" << endl;
//     cout << "Enter number to get sum of digits for: ";
//     cin >> num;
//     cout << endl;
//     cout << "results: " << sum_of_digits(num) << endl; 

//     cout << endl << endl;

//     cout << "save a penny for how many days? ";
//     cin >> num;
//     cout << endl;
//     cout << "results: " << a_penny_doubled_everyday(num) << endl;

//     return 0;
// }

// int sum_of_digits(int n) {
    
//     if(n <= 9) {
//         return n;
//     } else {
//         return (n % 10) + sum_of_digits((n / 10));
//     }
// }

// double a_penny_doubled_everyday (int days, double amount) {
//     if(days <= 1){
//         return amount;
//     }
//     return a_penny_doubled_everyday(days - 1, amount * 2.0);
// }


// SECTION 11 CHALLENGE

// #include <iostream>
// #include <vector>
// #include <string>
// #include <cctype>

// using namespace std;

// void display_menu();
// void check_user_input(char&);
// void print_vector_list(const vector <int>&);
// int find_mean(const vector <int>&);
// int find_smallest(const vector <int>&);
// int find_largest(const vector <int>&);

// int main() {

//     char user_input {};
//     vector <int> vec  {1, 2, 3, 4, 5 };
//     int add_num_to_vector {};
//     bool quit {false};
//     int mean_of_numbers {};
//     int smallest_number_in_list {};
//     int largest_number_in_list {};

//     while(!quit) {

//         display_menu();

//         cout << "Enter your choice: ";
//         cin >> user_input;

//         check_user_input(user_input);

//         switch (user_input) {
//             case 'P': 
//                 print_vector_list(vec);
//                 break;

//             case 'A':
//                 cout << "Enter number to add to list: ";
//                 cin >> add_num_to_vector;
//                 vec.push_back(add_num_to_vector);
//                 break;

//             case 'M':
//                 cout << "Mean: " << find_mean(vec) << endl;
//                 break;

//             case 'S':
//                 cout << "smallest number: " << find_smallest(vec) << endl;
//                 break;

//             case 'L':
//                 cout << "largest number: " << find_largest(vec) << endl;
//                 break;

//             case 'Q':
//                 quit = true;
//                 break;

//             default:
//                 cout << "incorrect input, please try again.." << endl;
//                 break;
//         }
//     }
//     cout << endl;
//     cout << "Program terminated" << endl;

//     return 0;
// }

// void display_menu() {
//     cout << endl;
//     cout << "P - Print numbers" << endl;
//     cout << "A - Add a number" << endl;
//     cout << "M - Display mean of the numbers" << endl;
//     cout << "S - Display the smallest number" << endl;
//     cout << "L - Display the largest number" << endl;
//     cout << "Q - Quit" << endl << endl;
// }

// void check_user_input(char& input) {
//     if(islower(input)) {
//         input = toupper(input);
//     }
// }

// void print_vector_list(const vector <int>& list) {
//     cout << "[ ";
//     for(size_t i = 0; i < list.size(); i++) {
//         cout << list.at(i) << " ";
//     }
//     cout << "]" << endl;
// }

// int find_mean(const vector <int>& list) {
//     int mean {0};
//     for(size_t i = 0; i < list.size(); i++) {
//         mean += list.at(i);
//     }
//     mean /= list.size();
//     return mean;
// }

// int find_smallest(const vector <int>& list) {
//     int smallest = list.at(0);
//     for(size_t i = 1; i < list.size(); i++) {
//         if(smallest > list.at(i)) {
//             smallest = list.at(i);
//         }
//     }
//     return smallest;
// }

// int find_largest(const vector <int>& list) {
//     int largest = list.at(0);
//     for(size_t i = 1; i < list.size(); i++) {
//         if(largest < list.at(i)) {
//             largest = list.at(i);
//         }
//     }
//     return largest;
// }

// #include <iostream>

// using namespace std;

// int main() {

//     int *int_ptr {nullptr};
//     int_ptr = new int;
//     cout << int_ptr <<endl;
//     delete int_ptr;

//     size_t size {0};
//     double *temp_ptr{nullptr};

//     cout << "How many temps? ";
//     cin >> size;

//     temp_ptr = new double[size];

//     cout << temp_ptr << endl;

//     delete [] temp_ptr;
//     return 0;
// }

// SWAP VALUES USING POINTERS

// #include <iostream>

// using namespace std;

// void swap_pointers(int*, int*);

// int main() {

//     int a = 10;
//     int b = 20;

//     int *ptrA = &a;
//     int *ptrB = &b;

//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl << endl;

//     cout << "calling fucntion: swap_pointers(a, b).." << endl << endl;
//     swap_pointers(ptrA, ptrB);

//     cout << "a: " << a << endl;
//     cout << "b: " << b << endl;

//     return 0;
// }

// void swap_pointers(int *ptr_1, int *ptr_2) {

//     cout << "inside the fucntion.." << endl << endl;
//     cout << "ptr_1: " << *ptr_1 << endl;
//     cout << "ptr_2: " << * ptr_2 << endl << endl;

//     *ptr_1 = *ptr_1 + *ptr_2;
//     cout << "*ptr_1 = *ptr_1 + *ptr_2: " << *ptr_1 << endl;
    
//     *ptr_2 = *ptr_1 - *ptr_2;
//     cout << "*ptr_2 = *ptr_1 - *ptr_2: " << *ptr_2 << endl;

//     *ptr_1 = *ptr_1 - *ptr_2;
//     cout << "*ptr_1 = *ptr_1 - *ptr2: " << *ptr_1 << endl << endl;
//     cout << "leaving the function call .. " << endl << endl;
// }

// RETURNING A POINTER FROM A FUNCTION

// #include <iostream>

// using namespace std;

// int *create_array(size_t size, int init_value = 0);
// void print_array(const int *const, size_t);

// int main () {

//     size_t size {};
//     int *my_array {nullptr};

//     cout << "Enter size of array: ";
//     cin >> size;
//     cout << endl;

//     cout << "creating new array.." << endl;
//     my_array = create_array(size);
//     cout << "new array created.. " << endl;

//     cout << "outputing Array.. " << endl;
//     print_array(my_array, size);

//     delete [] my_array;

//     return 0;
// }

// int *create_array(size_t size, int init_value) {

//     int *new_array {nullptr};

//     new_array = new int[size];

//     for(size_t i = 0; i < size; i++){
//         *(new_array + i) = init_value; 
//     }
//     return new_array;
// }

// void print_array(const int *const arr, size_t size) {
//     for(size_t i = 0; i < size; i++){
//         cout << *(arr + i) << " ";
//     }
//     cout << endl;
// }

// CODING EXERCISE 31: Passing a Pointer to a Function

/*
Pointers are a fundamental aspect of C++. They allow for flexible and efficient programming by
giving direct access to memory. You are tasked with writing a function that uses a pointer to
multiply an integer value.
Write a function:

void multiply_with_pointer(int* ptr, int multiplier);

Input:
A pointer to an integer (int* ptr). This integer will be between 1 and 100, inclusive.
An integer (int multiplier) which is the multiplier. This integer will be between 1 and 100, inclusive.

// coding exercise 32
Write a C++ function find_max_element that takes an integer array and its size as input and returns
the maximum element in the array using pointers.

// coding exercise 33
Write a C++ function reverse_array that takes an integer array and its size as input and reverses the
order of the elements in the array. The function should modify the array in-place.

*/


// #include <iostream>

// using namespace std;

// void multiply_with_pointer(int *, int);
// int findMaxElement(int *arr, int size);
// void print_array(int *, int size);
// void reverse_array(int *, int);
// string reverse_string(const std::string &);

// int main() {

//     int user_input {0};
//     int score {10};
//     int *score_ptr {nullptr};
//     score_ptr = &score;

//     cout << "score: " << score << endl;
//     cout << "enter a number to multiply " << score << " by: ";
//     cin >> user_input;
//     cout << endl;

//     cout << "Calling function..." << endl;
//     multiply_with_pointer(score_ptr, user_input);
//     cout << "end of fucntion call.." << endl;
//     cout << "score: " << score << endl << endl;

//     cout << "Find the max element" << endl << endl;

//     int arr[] = {12, 45, 67, 23, 9};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     cout << "Printing Array.." << endl;
//     print_array(arr, size);

//     cout << "getting max element.." << endl;
//     int maxElement = findMaxElement(arr, size);
//     cout << "maxElement: " << maxElement << endl;

//     cout << endl;
//     cout << "Reversing and Array" << endl << endl;

//     int arr_33[] = {1, 2, 3, 4, 5};
//     int size_33 = sizeof(arr_33) / sizeof(arr_33[0]);

//     cout << "Printing array.." << endl;

//     print_array(arr_33, size_33);

//     cout << "Passing arr_33 to funciont: reverse_array" << endl;
//     reverse_array(arr_33, size_33);
//     cout << "end of reverse_array fucntion call" << endl;
//     cout << "printing array again ..." << endl;
//     print_array(arr_33, size_33);
//     cout << endl << endl;

//     cout << "reversing string" << endl;
//     cout << endl;

//     std::string input = "Hello, World!";
//     std::string reverse_str = reverse_string(input);

//     cout << reverse_str << endl;

//     return 0;
// }

// void multiply_with_pointer(int *ptr, int multiplier) {
//     *ptr *= multiplier;
// }

// // CODING EXERCISE 32
// int findMaxElement(int * arr, int size) {
//     int max = *arr;

//     for(size_t i = 1; i < size; i++){
//         if(max < *(arr + i)) {
//             max = *(arr + i);
//         }
//     }

//     return max;
// }

// void print_array(int *arr, int size) {
//     cout << "[ ";
//     for(size_t i = 0; i < size; i++) {
//         cout << *(arr + i) << " ";
//     }
//     cout << "] " << endl;
// }

// // CODING EXERCISE 33

// void reverse_array(int * arr, int size) {
//     int *reverse_array {nullptr};
//     reverse_array = new int [size];

//     for(size_t i = 0; i < size; i++) {
//         *(reverse_array + ((size - 1) - i)) = *(arr + i);
//     }

//     for(size_t i = 0; i < size; i++) {
//         *(arr + i) = *(reverse_array + i);
//     }
// }

// // CODING EXERCISE 34

// string reverse_string(const std::string &str) {
//     const char *start = str.c_str();
//     const char *end = str.c_str() + str.size();

//     cout << "*start = " << *start << endl;
//     cout << "*end = " << *end << endl;
//     cout << endl;

//     std::string reversed {};

//     while(end >= start) {
//         cout << "pushing back: " << *end << endl;
//         reversed.push_back(*end);
//         end--;
//     }

//     return reversed;
// }

// #include <iostream>

// using namespace std;

// int main() {

//     int num {100};
//     int &ref_to_num = num;

//     cout << "num: " << num << endl;
//     cout << "ref_to_num: " << ref_to_num << endl;

//     cout << "changing ref_to_num to 10: " << endl;
//     ref_to_num = 10;

//     cout << "num: " << num << endl;
//     cout << "ref_to_num: " << ref_to_num << endl;

//     int list_of_nums [] = {1,2,3,4,5,6,7,8,9};


//     cout << "copies.." << endl;
//     // makes a copy of the element
//     for(auto num : list_of_nums) {
//         cout << num << endl;
//     }

//     cout << "reference.. " << endl;

//     // references elements
//     for(auto &num : list_of_nums) {
//         cout << num << endl;
//     }

//     return 0;
// }

// SECTOIN 12
// CHALLENGE

/*
Write a C++ function named apply_all that expects two arrays of integers and their sizes and 
dynamically allocates a new array of integers whose size is the prodct o0f the 2 array sizes

The function should loop through the second array and multiply each element across each element of array 1 and 
store the product in the newly created array.

The function shoudl return a pointer tothe newly allocated array.

You can also write a print function that expects a pointer to an array of integers and its size and display the elements
in the array.

For example:

Below i the output from the following code which would be in main:

    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};

    cout << "Array1: ";
    print_array(array1, 5);

    cout << "Array2: ";
    print_array(array2, 3);

    int *result = apply_all(array1, 5, array2, 3);
    cout << "Result: ";
    print(results, 15);

Output
---------------------------
Array1: [ 1 2 3 4 5 ]
Array2: [ 10 20 30 ]
Result: [ 10 20 30 40 50 20 40 60 80 100 30 60 90 120 150]

*/

// #include <iostream>

// using namespace std;

// void print_array(const int *const, size_t);
// int *apply_all(const int *const,  size_t, const int *const, size_t);

// int main() {

//     int array1[] {1,2,3,4,5};
//     int array2[] {10,20,30};

//     cout << "Array1: ";
//     print_array(array1, 5);

//     cout << "Array2: ";
//     print_array(array2, 3);

//     int *result = apply_all(array1, 5, array2, 3);
//     cout << "Result: ";
//     print_array(result, 15);

//     return 0;
// }
// void print_array(const int *const arr, size_t size) {
//     cout << "[ ";
//     for(size_t i = 0; i < size; i++){
//         cout << *(arr + i) << " ";
//     }
//     cout << "]" << endl;
// }
// int *apply_all(const int *const arr1,  size_t size_1, const int *const arr2, size_t size_2) {
//     int *new_array {nullptr};
//     size_t new_size {size_1 * size_2};
//     int count {0};

//     new_array = new int [new_size];

//     for(size_t i = 0; i < new_size; i++){
//         *(new_array + i) = 0;
//     }

//     while(count < 15) {
//         for(size_t i = 0; i < size_2; i++){
//             for(size_t j = 0; j < size_1; j++) {
//                 *(new_array + count) = (*(arr1 + j)) * (*(arr2 + i));
//                 count++;
//             }
//         }
//     }
//     return new_array;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "hello world" << endl;
//     return 0;
// }

// // SECTION 13 OBJECT ORIENTED PROGRAMMING -  CLASSES AND OBJECTS

// #include <iostream>
// #include <string> 
// #include <vector>

// using namespace std;

// class Player {
//     // attributes
//     string name {"Player"};
//     int health {100};
//     int xp {3};

//     // methods
//     void talk(string);
//     bool is_dead();
// };

// class Account {
//     // attributes
//     string name {"account_name"};
//     double balance {0};

//     // methods
//     bool deposit(double);
//     bool withdraw(double);

// };

// int main() {
//     Account pl3nny_acount;
//     Account jim_account;
   
//     Player pl3nny;
//     Player hero;

//     Player players [] {pl3nny, hero};
//     vector<Player> player_vec {pl3nny};
//     player_vec.push_back(hero);

//     Player *enemey {nullptr};
//     enemey = new Player;

//     delete enemey;

//     return 0;
// }


// Accessing Class Members

// #include <iostream>
// #include <string> 
// #include <vector>

// using namespace std;

// class Player {
// public:
//     // attributes
//     string name {"Player"};
//     int health {100};
//     int xp {3};

//     // methods
//     void talk(string text_to_say) {cout << name << " says " << text_to_say << endl;}
//     bool is_dead();
// };

// class Account {
// public:
//     // attributes
//     string name {"account_name"};
//     double balance {0};

//     // methods
//     bool deposit(double bal){balance += bal; cout << "In deposit" << endl;}
//     bool withdraw(double bal){balance -= bal; cout << "In withdraw" << endl;}
//     void displayBalance() {cout << "\t" << name << endl; cout << "Your balance is: " << balance << endl << endl;}

// };

// int main() {
//     Account pl3nny_account;
//     pl3nny_account.name = "pl3nny's account";
//     pl3nny_account.balance = 5000.0;
//     pl3nny_account.displayBalance();
//     pl3nny_account.deposit(1000.0);
//     pl3nny_account.withdraw(500.0);
//     pl3nny_account.displayBalance();

//     Account *marys_account = new Account;
//     marys_account->name = "Mary's Account";
//     marys_account->balance = 1000.0;
//     marys_account->displayBalance();
//     marys_account->withdraw(500.0);
//     marys_account->displayBalance();



//     Player pl3nny;
//     pl3nny.name = "pl3nny";
//     pl3nny.health = 100;
//     pl3nny.xp = 12;
//     pl3nny.talk("Hi there");

//     Player *enemy = new Player;
//     enemy->name = "enemy";
//     enemy->health = 100;
//     enemy->xp = 15;

//     enemy->talk("I will destroy you!");

//     return 0;
// }


// Section 13: Implementing Member Methods..

// #include <iostream>
// #include <string>

// using namespace std;

// class Account {

//     private:
//         double balance {0};
//         string name;

//     public:
//         void set_balance(double bal) {balance = bal;}
        
//         // will be declared outside class decleration
//         void set_name(string n);
//         string get_name();
//         double get_balance();

//         bool deposit(double amount);
//         bool withdraw(double amount);
// };

// void Account::set_name(string n) {
//     name = n;
// }

// string Account::get_name() {
//     return name;
// }

// double Account::get_balance() {
//     return balance;
// }

// bool Account::deposit(double amount) {
//     balance += amount;
//     return true;
// }

// bool Account::withdraw(double amount) {
//     if(balance - amount >= 0) {
//         balance -= amount;
//     } else {
//         cout << "unable to withdraw that amount.." << endl;
//         return false;
//     }

//     return true;
// }

// int main() {

//     cout << endl;
//     cout << "\tAccount Class" << endl << endl;

//     Account pl3nny;

//     pl3nny.set_name("pl3nny");
//     pl3nny.set_balance(2000);

//     int selection;
//     int amount {0};

//     cout << "1. Deposit" << endl;
//     cout << "2. Withdraw" << endl;
//     cout << "3. View Balance" << endl;
//     cout << "-> ";
//     cin >> selection;

//     while (selection != 0) {
//         switch (selection)
//         {
//         case 1:
//             cout << "Enter amount to deposit: ";
//             cin >> amount;
//             pl3nny.deposit(amount);
//             cout << endl;
//             cout << "Your new balance is " << pl3nny.get_balance() << endl << endl;
//             break;

//         case 2:
//             cout << "Enter amount to withdraw: ";
//             cin >> amount;
//             pl3nny.withdraw(amount);
//             cout << endl;
//             cout << "Your balance is now " << pl3nny.get_balance() << endl << endl;
//             break;

//         case 3:
//             cout << "Your current balance is " << pl3nny.get_balance() << endl << endl;
//             break;
//         default:
//             cout << "Wrong input...enter 0 to quit" << endl << endl;
//             break;
//         }

//         cout << "1. Deposit" << endl;
//         cout << "2. Withdraw" << endl;
//         cout << "-> ";
//         cin >> selection;
//     }

//     return 0;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

// private:
//     string name;
//     int health;
//     int xp;

// public:
//     Player();
//     Player(string name_val);
//     Player(string name_val, int health_val, int xp_val);

//     // void set_name(string name);
//     // void set_xp(int xp);
//     // void set_health(int health);

//     // string get_name();
//     // int get_xp();
//     // int get_health();
// };

// Player::Player() 
//     :name{"none"}, health{0}, xp{0} {

// }

// Player::Player(string name_val) 
//     :name{name_val}, health{0}, xp{0} {

// }

// Player::Player(string name_val, int health_val, int xp_val) 
//     :name{name_val}, health{health_val}, xp{xp_val} {

// }

// int main() {

//     Player empty;
//     Player pl3nny{"Pl3nny"};
//     Player villain {"villain", 100, 55};

//     return 0;
// }

// DELEGATING CONSTRUCTORS

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

// private:
//     string name;
//     int health;
//     int xp;

// public:
//     Player();
//     Player(string name_val);
//     Player(string name_val, int health_val, int xp_val);
// };

// Player::Player() 
//     : Player{"none", 0,0} {
//         cout << "no-arg constructor" << endl;
//     }

// Player::Player(string name_val) 
//     : Player{name_val, 0,0} {
//         cout << "one-arg constructor" << endl;
//     }

// Player::Player(string name_val, int health_val, int xp_val) 
//     : name{name_val}, health {health_val}, xp {xp_val} {
//         cout << "three arg constructor" << endl;
//     }

// int main () {

//     Player empty;
//     Player pl3nny{"pl3nny"};
//     Player villain{"villain", 100, 55};

//     return 0;
// }

// CONSTRUCTOR AND DEFAULT VALUES

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

// private:
//     string name;
//     int health;
//     int xp;

// public:
//     Player(string nam_val = "none", int health_val = 0, int xp_val = 0);
// };

// Player::Player(string name_val, int health_val, int xp_val) 
//     : name {name_val}, health {health_val}, xp {xp_val} {
//         cout << "three args constructor" << endl;
//     }

// int main () {

//     Player empty;
//     Player pl3nny {"pl3nny"};
//     Player hero {"Hero", 100};
//     Player villain {"Villain", 100, 55};

//     return 0;
// }


// COPY CONSTRUCTORS

/*
Type::Type(const Type &source) {
    // code or initialization list to copy the object
}
*/

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

// private:
//     string name;
//     int health;
//     int xp;

// public:
//     string get_name();
//     int get_health();
//     int get_xp();
//     Player(string name_val = "None", int health_val = 0, int xp_val = 0);
//     // copy constructor
//     Player(const Player &source);
//     void display_player(Player p);
//     // destructor
//     ~Player() {cout << "destructor called for: " << name << endl;}

// };

// string Player::get_name() {return name;}
// int Player::get_health() {return health;}
// int Player::get_xp() {return xp;}

// Player::Player(string name_val, int health_val, int xp_val)
//     : name {name_val}, health {health_val}, xp {xp_val} {}

// // Player::Player(const Player &source) 
// //     : name{source.name}, health {source.health}, xp {source.xp} {
// //         cout << "copy constructor - made copy of: " << source.name << endl;
// //     }

// // OR DELEGATE CONSTRUCTOR

// Player::Player(const Player &source) : Player{source.name, source.health, source.xp} {
//     cout << "copy constructor - made copy of: " << source.name << endl;
// }


// void Player::display_player(Player p) {
//     cout << "Name: " << p.get_name() << endl;
//     cout << "Health: " << p.get_health() << endl;
//     cout << "XP: " << p.get_xp() << endl;
// }

// int main() {

//     Player empty;

//     empty.display_player(empty);

//     Player pl3nny {"Pl3nny"};
//     Player hero {"Hero", 100};
//     Player villain {"Villain", 100, 55};

//     return 0;
// }

// always use deep copies when dealing with raw c++ pointers

// SHALLOW COPY EXAMPLE

// #include <iostream>
// #include <string>

// using namespace std;

// class Shallow {
//     private:
//         int *data;
//     public:
//         Shallow(int d);
//         Shallow(const Shallow &source);
//         ~Shallow();
//         int get_shallow();
//         void set_data_value (int d);
// };

// Shallow::Shallow(int d) {
//     data = new int;
//     *data = d;
// }

// Shallow::Shallow(const Shallow &source) : data {source.data} {}

// Shallow::~Shallow() {
//     delete data;
// }

// int Shallow::get_shallow() {return *data;}

// void Shallow::set_data_value(int d) {*data = d;}

// void display_shallow(Shallow s) {cout << s.get_shallow() << endl;}

// int main() {

//     Shallow obj1 {100};
//     display_shallow(obj1);

//     obj1.set_data_value(1000);
//     Shallow obj2 {obj1};
//     cout << "hellow world" << endl;

//     return 0;
// }


// DEEP COPY

// #include <iostream>
// #include <string>

// using namespace std;

// class Deep {
//     private:
//         int *data;
//     public:
//         Deep(int d);
//         Deep(const Deep &source);
//         ~Deep();
//         int get_deep();
//         void set_data_value (int d);
// };

// Deep::Deep(int d) {
//     data = new int;
//     *data = d;
// }

// Deep::Deep(const Deep &source) {
//     data = new int;
//     *data = *source.data;
// }

// Deep::~Deep() {
//     delete data;
// }

// int Deep::get_deep() {return *data;}

// void Deep::set_data_value(int d) {*data = d;}

// void display_deep(Deep d) {cout << d.get_deep() << endl;}

// int main() {

//     Deep obj1 {100};
//     display_deep(obj1);

//     obj1.set_data_value(1000);
//     Deep obj2 {obj1};
//     cout << "hellow world" << endl;

//     return 0;
// }

// Move Constructors & Const & Static Class members

// #include <iostream>
// #include <string>

// using namespace std;

// class Player {

//     private:
//         string name;
//         int xp;
//         int health;
//         static int num_players;
    
//     public:
//         string get_name() const;
//         void set_name(string name_val);
//         int get_health() const;
//         void set_health(int health_val);
//         int get_xp() const;
//         void set_xp(int xp_val);
//         Player();
//         Player(string name_val, int health_val, int xp_val);
//         Player(const Player &source);
//         ~Player();
        
//         static int get_num_players();
// };

// int Player::num_players{0};

// string Player::get_name() const{
//     return name;
// }

// void Player::set_name(string name_val) {
//     name = name_val;
// }

// int Player::get_health() const{
//     return health;
// }

// void Player::set_health(int health_val){
//     health = health_val;
// }

// int Player::get_xp() const{
//     return xp;
// }

// void Player::set_xp(int xp_val){
//     xp = xp_val;
// }

// Player::Player()
//     : Player("None",0,0) {
// }

// Player::Player(string name_val, int health_val, int xp_val)
//     : name{name_val}, health{health_val}, xp{xp_val} {
//         ++num_players;
//     }

// Player::Player(const Player &source)
//     : name{source.name}, health{source.health}, xp{source.xp} {
// }

// Player::~Player(){
//     --num_players;
// }

// int Player::get_num_players() {
//     return num_players;
// }


// void display_active_players() {
//     cout << "Active Players: " << Player::get_num_players() << endl;
// }

// int main() {

//     display_active_players();

//     const Player villain{"Villain",100,55};
//     cout << "created villain Player " << endl;
//     display_active_players();
//     Player hero {"Hero", 100, 15};
//     cout << "created hero Player " << endl;
//     display_active_players();
//     Player pl3nny;
//     cout << "created pl3nny Player " << endl;

//     cout << "entering new scope.." << endl;

//     {
//         Player hero2;
//         cout << "created hero2 " << endl;
//         display_active_players();
//     }

//     cout << "exiting scope.." << endl;

//     display_active_players();

//     Player *enemy = new Player("Enemy", 100, 100);
//     cout << "creating enemey Player " << endl;
//     display_active_players();
//     cout << "Deleting enemy Player.." << endl;
//     delete enemy;
//     display_active_players();


//     return 0;
// }


// Structs vs Classes

// #include <iostream>
// #include <string>

// using namespace std;

// struct Person {
//     string name;
//     string get_name(); // why create a function to get name if name is already public because struct attributes are public by default
// };

// int main() {

//     Person pl3nny;

//     pl3nny.name = "Pl3nny";

//     cout << "name: " << pl3nny.name << endl;

//     return 0;
// }


// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> twoSum(vector<int> &nums, int target);
// void print(vector<int> &vec);

// int main() {

//     // vector<int> nums {2,7,11,15};
//     // vector<int> nums {3,2,4};
//     vector<int> nums {2,5,5,11};

//     vector<int> result;

//     int target {10};

//     cout << "check indeces of vector.. " << endl << endl;

//     print(nums);

//     result = twoSum(nums, target);

//     print(result);

//     return 0;
// }

// vector<int> twoSum(vector<int> &nums, int target){
    
//     vector<int> result {};
//     int current {0};
//     int next {1};

//     if(nums.size() == 2){
//         if(nums.at(0) + nums.at(1) == target){
//             result.push_back(0);
//             result.push_back(1);
//         }
//     } else {
//         while(current < nums.size() - 1){

//             if(next > nums.size() - 1){
//                 current++;
//                 next = current + 1;
//             } else {
//                 if(nums.at(current) + nums.at(next) == target){
//                     result.push_back(current);
//                     result.push_back(next);
//                     current++;
//                     next++;
//                 } else {
//                     next++;
//                 }
//             }
//         }
//     }

//     return result;
// }

// void print(vector<int> &vec){
//     for(auto index : vec){
//         cout << index << " ";
//     }
//     cout << endl;
// }

// #include <iostream>
// #include <string>

// using namespace std;

// bool isPalindrome(int x);

// int main() {

//     int x = -121;

//     if(isPalindrome(x)){
//         cout << x << " is palindrome" << endl;
//     } else {
//         cout << x << " is NOT palindrome" << endl;
//     }

//     return 0;
// }

// bool isPalindrome(int x){
//     string x_str = to_string(x);
//     int count {0};
//     int last_indx = x_str.size() - 1;

//     for(size_t i = 0; i < (x_str.size()) / 2; i++){
//         if(x_str.at(i) == x_str.at(last_indx - i)){
//             count++;
//         }
//     }

//     if(count == x_str.size() / 2)
//         return true;

//     return false;
// }


/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int romanToInt(string s);

int main() {
    char selection {};
    int roman_sum {};
    string user_input{};



    return 0;
}
int romanToInt(string s){
    int result {0};
    int current {};
    int next{1};

    vector<string> roman_ints {};

    for(size_t i = 0; i < s.length(); i++){
        if(s.length() == 1){
            roman_ints.push_back((to_string(s.at(0))));
        }
    }



    return result;
}
