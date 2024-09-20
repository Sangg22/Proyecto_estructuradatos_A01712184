#ifndef RANKING_H_
#define RANKING_H_

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

class Ranking{
    private:
        std::vector<Player> players;
        void swap(std::vector<Player>& v, int i, int j) {
            Player aux = v[i];
            v[i] = v[j];
            v[j] = aux;
        }
    
    public:
        void addPlayer(Player& player){
            players.push_back(player);
        }

        void sortByPoints(){
            for (int i = 1; i < players.size(); i++){
                for(int j = i; j > 0; j--){
                    if (players[j].getPoints() > players[j-1].getPoints()){
                        swap(players, j, j - 1);
                    }
                    else{
                        break;
                    }
                }
            }
        }

        void searchPlayerByName(const std::string& name) {
            for (auto& player : players) {
                if (player.getName() == name) {
                    std::cout << "Player found:\n";
                    player.showInfo();
                    return;
                }
             }
            std::cout << "Player not found.\n";
        }

        void showRanking() {
            std::cout << "Ranking of players by points:\n";
            for(auto& player : players) {
                player.showInfo();
                std::cout << "-------------------\n";
            }
        }
};



#endif