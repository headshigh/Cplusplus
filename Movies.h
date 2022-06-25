#ifndef _MOVIES_H_
#define _MOVIES_H_
#include"Movie.h"
#include<string>
#include<vector>
using namespace std;
class Movies{
    private:
    std::vector<Movie> movies;
    public:
    Movies();
    ~Movies();
    bool add_movie(std::string name,std::string rating,int timeswatched);
    bool incremented_watched(std::string name);
    void display() const{
        if(movies.size()==0){
        std::cout<<"sorry no movies to display"<<endl;

    }else{
        std::cout<<"\n========================"<<endl;
        for(auto movie:movies)
            movie.display();
        cout<<"\n======================="<<endl;

        }
    }
    
    
    
};
#endif