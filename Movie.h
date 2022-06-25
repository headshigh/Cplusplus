#ifndef _MOVIE_H_
#include<iostream>
#define _MOVIE_H
#include<string>
using namespace std;
class Movie{
    private:
    static int numofmovies;
    std::string name;
    std::string rating;
    int timeswatched;
    public:
    Movie(std::string name_val="none",std:: string rating_val="R",int timewatched_val=1);
    ~Movie();
    void increment_watched(){
        timeswatched+1;
    }
    void display(){
       std::cout<<"Name: "<<name<<"Rating: "<<rating<<"Times watched: "<<timeswatched;
    }
    std::string get_name() const{
        return name;
    };
    static int get_numof_movies();
    
  
};
#endif