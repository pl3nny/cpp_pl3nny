#include <iostream>

using namespace std;

int main()
{

    /**************************
     *  Character Type
    **************************/

    char middle_initial {'R'}; // single quote for char double quotes for strings
    cout << "My middle initial is " << middle_initial << endl;

    /**************************
     *  Integer Types
    **************************/
    unsigned short int exam_score {55};
    cout << "My exam score was " << exam_score << endl;

    int countries_represented {65};
    cout << "There were " << countries_represented << " countries represented in my meeting" << endl;

    long people_in_florida {20610000};
    cout << "There are about " << people_in_florida << " people in Florida" << endl;

    long long people_on_earth {7'600'000'000};
    cout << "There are about " << people_on_earth << " people on earth " << endl;

    long long distance_to_alpha_centauri {9'461'000'000'000};
    cout << "The distance to alpha centauri is " << distance_to_alpha_centauri << " kilometers" << endl;

    /******************************
     * Floating points
    ******************************/

    float car_payment {401.23};
    cout << "My car payment is " << car_payment << endl;

    double pi {3.124159};
    cout << "Pi is " << pi << endl;

    long double large_amount {2.7e120};
    cout << "large_amount" << large_amount << endl;

    /******************************
     * boolean points
    ******************************/

   bool game_over {false};
   cout << "The value of of gameOver is " << game_over << endl;



    return 0;
}