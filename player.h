#ifndef _PLAYER_H_
#define _PLAYER_H
#include<string>

#include<string>
class player{
    private:
    static int num_players;
    std::string name;
    int health;
    int xp;
    public:
    std::string get_name(){return name;}
    int get_health(){return health;}
    int get_xp(){return xp;}
    player (std::string name_val="none",int health_val=0, int xp_val=0);
    player (const player &source);
    ~player();

    static int get_num_players();
};
#endif