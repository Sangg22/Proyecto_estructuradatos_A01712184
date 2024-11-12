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

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        void addPlayer(Player& player){
            players.push_back(player);
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(n)
        Caso Promedio: O(n^2)
        Peor de los casos: O(n^2)
        */
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

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
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

        /*Análisis de complejidad:
        Mejor de los casos: O(n)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
        void showRanking() {
            std::cout << "Ranking of players by points:\n";
            for(auto& player : players) {
                player.showInfo();
                std::cout << "-------------------\n";
            }
        }
};



#endif
