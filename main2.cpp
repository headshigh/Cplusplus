#include<iostream>
#include "Movies.h"
using namespace std;
void increment_watched(Movies &movies,std::string name){
    if(movies.incremented_watched(name)){
        cout<<name<<"watch incremented"<<endl;
    }
    else{
        cout<<name<<"not found"<<endl;
    }
};
void add_movies(Movies &movies,string name,string rating,int timeswatched){
    if(movies.add_movie(name,rating,timeswatched)){
        cout<<name<<"added"<<endl;
    }else{
        cout<<name<<"already exists"<<endl;
    }
};
int main(){
    Movies my_movies;
    my_movies.display();
    add_movies(my_movies,"BIG & BLACK","Adult",100);
    my_movies.display();
    cout<<"HI bitch"<<endl;
    return 0;
}
