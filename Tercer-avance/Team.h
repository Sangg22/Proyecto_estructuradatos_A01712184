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

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        void addPlayer(const Player& player){
            players.push_back(player);
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(n)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
        void showPlayersInfo() {
            for (auto& player : players){
                player.showInfo();
            }
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        std::vector<Player>& getPlayers(){
            return players;
        }
};

#endif
