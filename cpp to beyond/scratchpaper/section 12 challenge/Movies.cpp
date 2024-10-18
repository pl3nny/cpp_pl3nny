#include "Movies.h"

bool Movies::increment_watched(string movie_name) {

    if(movie_list.size() > 0){
        if(movie_list.at(0).get_movie_name() == movie_name) {
            return true;
        } else {
            for(size_t i = 1; i < movie_list.size(); i++){
                if(movie_list.at(i).get_movie_name() == movie_name){
                    movie_list.at(i).set_watched(1);
                    cout << "sucess" << endl;
                    return true;
                } else {
                    continue;
                }
            }
        }
    }

    cout << "Movie not in library.." << endl;
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
                } else {
                    continue;
                }
            }
        }
    }

    return true;
}
