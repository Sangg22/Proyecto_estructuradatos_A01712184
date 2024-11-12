#ifndef RANKING_H_
#define RANKING_H_

#include <iostream>
#include <string>
#include <vector>

#include "Player.h"

class Ranking{
    private:
        std::vector<Player> players;

        void merge(std::vector<Player>& v, int left, int mid, int right) {
            int n1 = mid - left + 1;
            int n2 = right - mid;

            std::vector<Player> leftVec(n1);
            std::vector<Player> rightVec(n2);

            for (int i = 0; i < n1; i++) {
                leftVec[i] = v[left + i];
            }
            for (int j = 0; j < n2; j++) {
                rightVec[j] = v[mid + 1 + j];
            }

            int i = 0, j = 0, k = left;

            while (i < n1 && j < n2) {
                if (leftVec[i].getPoints() >= rightVec[j].getPoints()) {
                    v[k] = leftVec[i];
                    i++;
                } else {
                    v[k] = rightVec[j];
                    j++;
                }
                k++;
            }

            while (i < n1) {
                v[k] = leftVec[i];
                i++;
                k++;
            }

            while (j < n2) {
                v[k] = rightVec[j];
                j++;
                k++;
            }
        }

        void mergeSort(std::vector<Player>& v, int left, int right) {
            if (left < right) {
                int mid = left + (right - left) / 2;
                mergeSort(v, left, mid);
                mergeSort(v, mid + 1, right);
                merge(v, left, mid, right);
            }
        }

    public:
        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        void addPlayer(Player& player) {
            players.push_back(player);
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(n log n)
        Caso Promedio: O(n log n)
        Peor de los casos: O(n log n)
        */
        void sortByPoints() {
            mergeSort(players, 0, players.size() - 1);
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
            for (auto& player : players) {
                player.showInfo();
                std::cout << "-------------------\n";
            }
        }
};

#endif
