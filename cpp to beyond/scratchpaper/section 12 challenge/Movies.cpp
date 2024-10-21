#include "Movies.h"

bool Movies::increment_watched(string movie_name) {

    if(movie_list.size() > 0){
        if(movie_list.at(0).get_movie_name() == movie_name) {
            movie_list.at(0).set_watched(1);
            cout << "sucess" << endl;
            return true;
        } else {
            for(size_t i = 1; i < movie_list.size(); i++){
                if(movie_list.at(i).get_movie_name() == movie_name){
                    movie_list.at(i).set_watched(1);
                    cout << "sucess" << endl;
                    return true;
                } else {
                    // do nothing
                }
            }
        }
    }

    cout << "Movie not in library..";
    return false;
}

bool Movies::add_movie(string movie_name, string rating, int watched) {

    if(movie_list.size() > 0){
        if(movie_list.at(0).get_movie_name() == movie_name){
            return false;
        } else {
            for(size_t i = 1; i < movie_list.size(); i++){
                if(movie_list.at(i).get_movie_name() == movie_name){
                    return false;
                }
            }
        }
    }

    movie_list.push_back(Movie(movie_name, rating, watched));

    return true;
}

void Movies::display() const{
    if(movie_list.size() > 0){
        for(size_t i = 0; i < movie_list.size(); i++){
            cout << movie_list.at(i).get_movie_name() << ", ";
        }
    }
    cout << endl;
}

Movies::Movies(){}

Movies::~Movies(){}
