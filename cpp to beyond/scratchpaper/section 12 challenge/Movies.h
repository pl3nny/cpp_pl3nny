#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <vector>
#include "Movie.h"

class Movies {
    private:
        vector<Movie> *movie_list;

    public:
        bool increment_watched(string name);
        bool add_movie(string movie_name, string rating, int watched);
        void display() const;
        Movies();
        Movies(const Movies &source);
        Movies(Movies &&source) noexcept;
        ~Movies();
};
#endif