#include "Movies.h"

int Movies::number_of_movies_in_collection{0};

Movies::Movies() {}

void Movies::add_movie(std::string movie_name, std::string movie_raiting, int watched)
{

    if (!in_movie_collection(movie_name))
    {
        movie_collection.push_back(Movie(movie_name, movie_raiting, watched));
        number_of_movies_in_collection++;
        cout << movie_name << " added" << endl;
    }
}

void Movies::display_movies()
{

    if (number_of_movies_in_collection == 0)
    {
        std::cout << "no movies in collection...\n"
                  << endl;
    }
    else
    {
        for (size_t i = 0; i < number_of_movies_in_collection; i++)
        {
            cout << movie_collection.at(i).get_movie_details() << endl;
        }
    }
}

// logic check if movie is already in collection
bool Movies::in_movie_collection(std::string movie_name)
{
    for (size_t i = 0; i < number_of_movies_in_collection; i++)
    {
        if (movie_name == movie_collection.at(i).get_movie_name())
        {
            std::cout << movie_name << " already in your collection..." << std::endl;
            return true;
        }
    }

    return false;
}

void Movies::increment_watched(std::string movie_name)
{
    for (size_t i = 0; i < number_of_movies_in_collection; i++)
    {
        if (movie_name == movie_collection.at(i).get_movie_name())
        {
            movie_collection.at(i).increment_watched();
        }
    }
}

int Movies::get_number_of_movies_in_collection()
{
    return number_of_movies_in_collection;
}

Movies::~Movies() {}