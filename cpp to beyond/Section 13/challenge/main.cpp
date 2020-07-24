#include <iostream>
#include "Movies.h"

int main()
{
    Movies my_movies;

    cout << "Movie collection" << endl;

    my_movies.display_movies();

    my_movies.add_movie("aladdin", "pg", 10);

    my_movies.display_movies();

    my_movies.add_movie("aladdin", "pg", 10);

    my_movies.display_movies();

    my_movies.increment_watched("aladdin");

    my_movies.display_movies();

    my_movies.add_movie("Lord of the Rings", "pg-13", 25);

    my_movies.display_movies();
    
    return 0;
}