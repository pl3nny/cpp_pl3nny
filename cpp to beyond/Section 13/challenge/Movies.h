#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <iostream>
#include <string>
#include <vector>
#include "Movie.h"

using namespace std;

class Movies
{
private:
    static int number_of_movies_in_collection;
    vector<Movie> movie_collection;
public:
    Movies();
    void add_movie(std::string movie_name, std::string movie_raiting, int watched);
    void display_movies();
    bool in_movie_collection(std::string movie_name);
    void increment_watched(std::string movie_name);
    static int get_number_of_movies_in_collection();
    ~Movies();
};


#endif