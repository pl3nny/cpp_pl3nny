#include "Movie.h"

Movie::Movie()
{
    this->watched = 0;
}

Movie::Movie(std::string movie_name, std::string movie_raiting, int watched)
{
    this->movie_name = movie_name;
    this->movie_rating = movie_raiting;
    this->watched= watched; 
}

void Movie::set_movie_name(std::string movie_name)
{
    this->movie_name = movie_name;
}

std::string Movie::get_movie_name() const
{
    return movie_name;
}

void Movie::set_movie_rating(std::string movie_rating)
{
    this->movie_rating = movie_rating;
}

std::string Movie::get_movie_rating() const
{
    return movie_name;
}

void Movie::increment_watched()
{
    watched++;
}

int Movie::get_watched_count() const
{
    return watched;
}

std::string Movie::get_movie_details() const
{
    return movie_name + ", " + movie_rating + ", " + std::to_string(watched);
}

Movie::~Movie(){}