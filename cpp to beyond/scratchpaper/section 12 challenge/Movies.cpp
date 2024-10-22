#include "Movies.h"

bool Movies::increment_watched(string movie_name) {

    if(movie_list->size() > 0){
        for(auto &movie : *movie_list){
            if(movie.get_movie_name() == movie_name){
                movie.increment_watched();
                return true;
            }
        }
    }

    cout << "Movie not in library..";
    return false;
}

bool Movies::add_movie(string movie_name, string rating, int watched) {

    if(movie_list->size() > 0) {
        for(const auto &movie : *movie_list){
            if(movie.get_movie_name() == movie_name){
                return false;
            }
        }
    }

    movie_list->push_back(Movie(movie_name, rating, watched));

    return true;
}

void Movies::display() const{
    if(movie_list->size() == 0){
        cout << "Sorry, no movies to display\n" << endl;
    } else {
        cout << "\n===================================================" << endl;

        for(const auto &movie : *movie_list) {
            movie.display();
        }

        cout << "\n===================================================" << endl;
    }
}

Movies::Movies(){
    movie_list = new vector<Movie>;

    cout << "\nconstructor called\n" << endl;
}

Movies::Movies(const Movies &source){
    movie_list = new vector<Movie>;
    *movie_list = *source.movie_list;

    cout << "\ncopy constructor called\n" << endl;
}

Movies::~Movies(){
    delete movie_list;
    movie_list = nullptr;

    cout << "\ndeconstructor called\n" << endl;
}
