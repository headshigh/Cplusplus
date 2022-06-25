#include"player.h"
player::player(std::string name_val,int health_val,int xp_val):name{name_val},health{health_val},xp{xp_val}{++num_players;}
player::player(const player &source):player{source.name,source.health,source.xp}{
    
}
player::~player(){
    --num_players;

}
int player::get_num_players(){
    return num_players;
}