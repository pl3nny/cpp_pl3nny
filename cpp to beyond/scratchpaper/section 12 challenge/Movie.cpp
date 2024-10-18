#include "Movie.h"

void Movie::set_movie_name(string movie_name) {
    this->movie_name = movie_name;
}

string Movie::get_movie_name() const {
    return this->movie_name;
}

void Movie::set_rating(string rating) {
    this->rating = rating;
}

string Movie::get_rating() const {
    return this->rating;
}

void Movie::set_watched(int watched) {
    this->watched = watched;
}

int Movie::get_watched() const {
    return this->watched;
}

Movie::Movie(){}

Movie::Movie(string movie_name, string rating, int watched) {
    this->movie_name = movie_name;
    this->rating = rating;
    this->watched = watched;
}

Movie::~Movie(){}