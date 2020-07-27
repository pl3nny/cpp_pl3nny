#include "Movies.h"

int Movies::number_of_movies_in_collection{0};

Movies::Movies() {}

void Movies::add_movie(string movie_name, string movie_raiting, int watched)
{

    if (!in_movie_collection(movie_name))
    {
        Movie temp (movie_name, movie_raiting, watched);
        movie_collection.push_back(temp);
        
        number_of_movies_in_collection++;
        cout << movie_name << " added" << endl;
    }
}

void Movies::display_movies() const
{
    cout << "\n===============================" << endl;

    if (number_of_movies_in_collection == 0)
    {
        cout << "no movies in collection...\n"
                  << endl;
    }
    else
    {
        cout << "MY MOVIES" << endl;
        for (const Movie &movie: movie_collection)
        {
            cout << movie.get_movie_details() << endl;
        }
    }

    cout << "===============================\n" << endl;
}

// logic check if movie is already in collection
bool Movies::in_movie_collection(string movie_name) const
{
    for (const Movie &movie: movie_collection)
    {
        if (movie_name == movie.get_movie_name())
        {
            cout << movie_name << " already in your collection..." << endl;
            return true;
        }
    }

    return false;
}

void Movies::increment_watched(string movie_name)
{
    for (Movie &movie: movie_collection)
    {
        if (movie_name == movie.get_movie_name())
        {
            movie.increment_watched();
        }
    }
}

int Movies::get_number_of_movies_in_collection()
{
    return number_of_movies_in_collection;
}

Movies::~Movies() {}