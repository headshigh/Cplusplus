#include<iostream>
#include"Movies.h"
#include<vector>
using namespace std;

Movies::Movies(){

}
Movies::~Movies(){}

bool Movies::add_movie(std::string name,std::string rating,int timewatched){
    for( const Movie &movie:movies){
        if(movie.get_name()==name) return false;
    }
    Movie temp{name,rating,timewatched};{
        movies.push_back(temp);
        return true;

    }
}
bool Movies::incremented_watched(std::string name){
    for(Movie &movie:movies){
        if(movie.get_name()==name){
            movie.increment_watched();
            return true;
        }
    }
    return false;
}


