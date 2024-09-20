#include <iostream>
#include <fstream>
#include <sstream>
#include "Player.h"
#include "Ranking.h"

void loadPlayers(const std::string& Basketballplayers, Ranking& ranking) {
    std::ifstream csv(Basketballplayers);
    std::string line, name, position, number, points, height;

    if (!csv.is_open()) {
        std::cerr << "Error: Could not open " << Basketballplayers << std::endl;
        return;
    }

    std::getline(csv, line);  
    while (std::getline(csv, line)) {
        std::stringstream ss(line);

        std::getline(ss, name, ',');
        std::getline(ss, position, ',');
        std::getline(ss, number, ',');
        std::getline(ss, points, ',');
        std::getline(ss, height, ',');

        int backnumber = std::stoi(number);
        int pointsscored = std::stoi(points);
        float heightplayer = std::stof(height);

        Player player(name, position, backnumber, pointsscored, heightplayer);
        ranking.addPlayer(player);
    }
    csv.close();
}

// Mostrar menú
void showMenu() {
    std::cout << "=====================\n";
    std::cout << "   Menu of Ranking\n";
    std::cout << "=====================\n";
    std::cout << "1. Show Players\n";
    std::cout << "2. Sort players by points\n";
    std::cout << "3. Search player by name\n";
    std::cout << "4. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Ranking ranking;

    std::string filename = "Basketballplayers.csv";
    loadPlayers(filename, ranking);

    int opcion;

    do {
        showMenu();
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "\nList of players:\n";
                ranking.showRanking();
                break;
            case 2:
                std::cout << "\nSorting players by points...\n";
                ranking.sortByPoints();
                std::cout << "Players arranged correctly.\n";
                break;
            case 3: {
                std::string name;
                std::cout << "Enter the name of the player to search: ";
                std::cin.ignore(); 
                std::getline(std::cin, name);
                ranking.searchPlayerByName(name);
                break;
            }
            case 4:
                std::cout << "Leaving the program...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
                break;
        }

        std::cout << "\n";
    } while (opcion != 4);

    return 0;
}