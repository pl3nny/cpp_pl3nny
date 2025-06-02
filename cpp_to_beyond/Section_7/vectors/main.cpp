#include <iostream>
#include <vector>

using namespace std;

// scratch sheet on how to use vectors

int main()
{
    // vector <int> test_scores (3); // 3 elements all initialized to zero
    // vector <int> test_scores_1 (3, 100); // 3 elements all initialized to 100

    vector <int> test_scores {100, 98, 89};

    cout << "\nTest scores using array syntax: " << endl;
    cout << test_scores[0] << endl;
    cout << test_scores[1] << endl;
    cout << test_scores[2] << endl;

    cout << "\nTest scores using vector syntax: " << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

    //assiging vector elements
    test_scores.at(0) = 10;

    cout << test_scores.at(0) << endl;

    //inputing values into vector elements through the console
    cout << "\nEnter 3 test scores: " << endl;
    cin >> test_scores.at(0);
    cin >> test_scores.at(1);
    cin >> test_scores.at(2);

    cout << "\nUpdated test scores" << endl;

    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;

    // add additional elements to vector by using push_back() fuction

    cout << "\nEnter a test score to add to the vector: " << endl;
    
    int score_to_add {0}; // good practice...initialize variables
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nAdd another score: " << endl;
    cin >> score_to_add;

    test_scores.push_back(score_to_add);

    cout << "\nTest scores are now" << endl;
    cout << test_scores.at(0) << endl;
    cout << test_scores.at(1) << endl;
    cout << test_scores.at(2) << endl;
    cout << test_scores.at(3) << endl;
    cout << test_scores.at(4) << endl;

    cout << "\nThere are now " << test_scores.size() << " in the vector" << endl;

    // declaring 2D vectors
    // vector rows cols  == rows are views and cols are ratings
    vector <vector<int>> movie_ratings
    {
        {1,2,3,4},
        {1,2,3,4},
        {1,2,3,4}
    };

    cout << "movie ratings from viewer 1" << endl;
    cout << movie_ratings.at(0).at(0) << endl;
    cout << movie_ratings.at(0).at(1) << endl;
    cout << movie_ratings.at(0).at(2) << endl;
    cout << movie_ratings.at(0).at(3) << endl;

    return 0;
}