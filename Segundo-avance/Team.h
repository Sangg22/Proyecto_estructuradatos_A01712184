#ifndef TEAM_H_
#define TEAM_H_

#include <iostream>
#include <vector>
#include "Player.h"

class Team{
    private:
        std::string name;
        std::vector<Player> players;

    public:
        Team(const std::string& teamName) : name(teamName){}

        std::string getName() const{
            return name;
        }

        void addPlayer(const Player& player){
            players.push_back(player);
        }

        void showPlayersInfo() {
            for (auto& player : players){
                player.showInfo();
            }
        }
};

#endif