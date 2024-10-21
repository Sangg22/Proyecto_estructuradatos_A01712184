#include <iostream>
#include <fstream>
#include <sstream>
#include "Player.h"
#include "Ranking.h"
#include "Team.h"
#include "Tournament.h"

void loadPlayers(const std::string& Basketballplayers2, Ranking& ranking, std::vector<Team>& teams) {
    std::ifstream csv(Basketballplayers2);
    std::string line, name, position, number, points, height, teamName;

    if (!csv.is_open()) {
        std::cerr << "Error: Could not open " << Basketballplayers2 << std::endl;
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
        std::getline(ss, teamName, ',');

        int backnumber = std::stoi(number);
        int pointsscored = std::stoi(points);
        float heightplayer = std::stof(height);

        Player player(name, position, backnumber, pointsscored, heightplayer, teamName);
        ranking.addPlayer(player);

        bool teamFound = false;
        for (auto& team : teams) {
            if(team.getName() == teamName){
                team.addPlayer(player);
                teamFound = true;
                break;
            }
        }
        if(!teamFound){
            Team newTeam(teamName);
            newTeam.addPlayer(player);
            teams.push_back(newTeam);
        }
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
    std::cout << "4. Show Teams\n";
    std::cout << "5. Start tournament\n";
    std::cout << "6. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    Ranking ranking;
    std::vector<Team> teams;

    std::string filename = "Basketballplayers2.csv";
    loadPlayers(filename, ranking, teams);

    Tournament tournament;
    for (const auto& team : teams){
        tournament.addTeam(team);
    }

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
                std::cout << "\nList of Teams:\n";
                for (auto& team : teams){
                    std::cout << "Team: " << team.getName() << "\n";
                    team.showPlayersInfo();
                    std::cout << "---------------------\n";
                }
                break;
            case 5:
                std::cout << "\nStarting the tournament...\n";
                tournament.startTournament();
                break;
            case 6:
                std::cout << "Leaving the program...\n";
                break;
            default:
                std::cout << "Invalid option. Try again.\n";
                break;
        }

        std::cout << "\n";
    } while (opcion != 6);

    return 0;
}
