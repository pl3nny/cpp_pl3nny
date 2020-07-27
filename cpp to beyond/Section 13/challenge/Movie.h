#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

class Movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    int watched;

public:
    Movie();                                                              // constructor
    Movie(std::string movie_name, std::string movie_rating, int watched); // overloaded constructor

    //setters and getters
    void set_movie_name(std::string movie_name);
    std::string get_movie_name() const;

    void set_movie_rating(std::string movie_rating);
    std::string get_movie_rating() const;

    // watched counts how many times user has seen the movie
    void increment_watched();
    int get_watched_count() const;

    std::string get_movie_details() const;
    ~Movie();
};

#endif