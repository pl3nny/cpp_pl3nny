// #include <iostream>

// using namespace std;

// int main() {

//     double num_of_small_rooms {0};
//     double num_of_large_rooms {0};
//     double business_tax {6.6};
//     double price_for_small_room {25};
//     double price_for_large_room {35};
//     double total_without_tax {0};
//     double taxed_amount {0};
//     double total_with_tax {0};


//     cout << "How many small room would you like to clean? ";
//     cin >> num_of_small_rooms;
//     cout << endl;
//     cout << "How many large rooms would you like to clean? ";
//     cin >> num_of_large_rooms;
//     cout << endl;

//     // calculate cost
//     // total without tax
//     total_without_tax = (num_of_small_rooms * price_for_small_room) + (num_of_large_rooms * price_for_large_room);

//     // taxed amount
//     taxed_amount = total_without_tax * (business_tax / 100);

//     // total with taxes
//     total_with_tax = total_without_tax + taxed_amount;

//     // write out report 
//     cout << "Estimate for carpet cleaning service" << endl;
//     cout << "NUmber of small rooms: " << num_of_small_rooms << endl;
//     cout << "Number of large rooms: " << num_of_large_rooms << endl;
//     cout << "Price per small room: " << price_for_small_room << endl;
//     cout << "Price per large room: " << price_for_large_room << endl;
//     cout << "Cost: $" << total_without_tax << endl;
//     cout << "Tax: $" << taxed_amount << endl;
//     cout << "===================================" << endl;
//     cout << "Total estimate $" << total_with_tax << endl;
//     cout << "This estimate is valid for 30 days" << endl;

//     return 0;
// }


// Section 7 Arrays & Vectors

// #include <vector>
// #include <iostream>

// using namespace std;

// int main() {

//     vector<int> test_scores (10);

//     return 0;
// }

/*
Section 7 Challenge

Write a c++ program as follows:

Declare 2 emtpy vector of integers named 
vector1 and vector2, respectively.

Add 10 and 20  to vector 1 dynamically using push_back
Display the elements in vector2 using the at() method as well as its size using the size() method

Add 100 and 200 to vector2 dynamically using push_back
Display the elements in vector2 using the at() method as well as its size using the size method

Declare anempty 2D vector called vector_2d
Remember, that a 2D vector is a vecter of vecter<int>

Add vector1 to vector_2d dynamically using push_back
Add vector2 to vector_2d dynamically using push_back

Display the elements in vector_2d using the at() method

Change vector1.at(0) to 1000

Display the elements in vector_2d again using the at() method

Display the elements in vector1

What did you expect? Did you ge what you epected? What do you think happened?

*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> vector1;
    vector<int> vector2;

    cout << "vector1 size: " << vector1.size() << endl;

    vector1.push_back(10);
    vector1.push_back(20);

    cout << "Output vector1" << endl;

    for(auto i : vector1) {
        cout << i << " ";
    }

    cout << endl;

    cout << "vector1 size: " << vector1.size() << endl;
    cout << endl;

    cout << "vector2 size: " << vector2.size() << endl;
    
    vector2.push_back(100);
    vector2.push_back(200);

    cout << "Output vector1" << endl;
    for(auto i : vector2) {
        cout << i << " ";
    }

    cout << endl;

    cout << "vector2 size: " << vector2.size() << endl;
    cout << endl;    

    vector<vector<int>> vector_2d;

    cout << "vector_2d size: " << vector_2d.size() << endl;

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << "vector_2d size: " << vector_2d.size() << endl;

    cout << endl;

    for(int i = 0; i < vector1.size(); i++) {
        for(int j = 0; j < vector2.size(); j++) {
            cout << vector_2d.at(i).at(j) << " " << endl;
        }
    }
    cout << endl;

    cout << "changing vector1 [1] to 1000" << endl;

    vector1.at(0) = 1000;

    cout << "outputing vector_2d.." << endl;

    for(int i = 0; i < vector1.size(); i++) {
        for(int j = 0; j < vector2.size(); j++) {
            cout << vector_2d.at(i).at(j) << " " << endl;
        }
    }

    cout << endl;

    cout << "outputting vector1" << endl;
    for(auto i : vector1) {
        cout << i << endl;
    }



    return 0;
}