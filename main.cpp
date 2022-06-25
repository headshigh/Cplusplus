#include<iostream>
#include "player.h"
using namespace std;
void display_active_player(){
    cout<<"Active player: "<<player::get_num_players()<<endl;
}

int main(){
    player hero{"hero"};
    display_active_player();
    player *enemy=new player{"Enemy",100,100};
    display_active_player();
    delete enemy;
    display_active_player();
    return 0;
}
