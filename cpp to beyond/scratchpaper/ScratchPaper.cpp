/*
* scratch paper or file to implement quitck algorithm checks
* or anything for that matter actually. Goodluck - AlexH
*/

#include <iostream> 
#include <vector>

using namespace std;

int main() {

    cout << "\t Section 7 Challenge Vectors\n" << endl;

    // Decalre 2 empty vectors of integers named
    // vector1 and vector2, respectively.
    vector <int> vector_1;
    vector <int> vector_2;
    
    //Add 10 and 20 to vector1 dynamically using push_back
    vector_1.push_back(10);
    vector_1.push_back(20);
    //Display the elements in vector1 using the at() method as well as 
    //its size using the size() method
    cout << vector_1.at(0) << endl;
    cout << vector_1.at(1) << endl;
    cout << "size of vector_1: " << vector_1.size() << endl;

    cout << endl;

    //Add 100 and 200 to vector2 dynamincally using push_back
    vector_2.push_back(100);
    vector_2.push_back(200);
    //Display the elements in vector2 using the at() method as well as 
    //its size using the size() method
    cout << vector_2.at(0) << endl;
    cout << vector_2.at(1) << endl;
    cout << "size of vector_2: " << vector_2.size() << endl;

    cout << endl;

    //Declare an empty 2D vector called vector_2d
    vector <vector<int>> vector_2d;    

    //Add vector1 to vector_2d dynamically using push_back
    vector_2d.push_back(vector_1);
    
    //Add vector2 to vector_2d dynamically using push_back
    vector_2d.push_back(vector_2);

    //Display the elements in vector_2d using the at() method
    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1) <<endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1) <<endl;

    cout << endl;

    //Change vector1.at(0) to 1000
    vector_1.at(0) = 1000;

    //Display the elements in vector1
    cout << vector_1.at(0) << " " << vector_1.at(1) << endl;

    return 0;
}