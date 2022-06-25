#include"Movie.h"
using namespace std;

 Movie::Movie(std::string name_val,std::string rating_val, int timeswatched_val):name{name_val},rating{rating_val},timeswatched{timeswatched_val}{
}
Movie::Movie(const Movie &source):Movie(source.name,source.rating,source.timeswatched){}
Movie::~Movie(){
    
}

int Movie::get_numof_movies(){
    return numofmovies;
}


  