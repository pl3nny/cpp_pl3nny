#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <iostream>
#include <string>

using namespace std;

class Movie {
    private:
        string movie_name;
        string rating;
        int watched {0};
    public:
        void set_movie_name(string movie_name);
        string get_movie_name() const;
        void set_rating (string rating);
        string get_rating() const;
        void set_watched(int watched);
        int get_watched() const;
        void increment_watched();
        void display() const;
        Movie();
        Movie(string movie_name, string rating, int watched);
        ~Movie();
};

#endif