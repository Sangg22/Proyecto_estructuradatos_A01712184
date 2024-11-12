#ifndef TOURNAMENT_H_
#define TOURNAMENT_H_

#include <iostream>
#include <queue>
#include <stdlib.h>
#include <ctime>
#include <iomanip>
#include "Team.h"

class Tournament{
    private:
        std::queue<Team> teams;
        std::vector<Team> allTeams;

        /*Análisis de complejidad:
        Mejor de los casos: O(n)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
        void distributePoints(Team& team, int points){
            std::vector<Player>& players = team.getPlayers();
            int pointsPerPlayer = points /players.size();

            for (auto& player : players){
                player.scorePoint(pointsPerPlayer);
            }
        }

    public:
        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        void addTeam(const Team& team) { 
            teams.push(team);
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(1)
        Peor de los casos: O(1)
        */
        void playMatch(Team& team1, Team& team2){
            int score1 = rand() % 41 + 60;
            int score2 = rand() % 41 + 60;

            distributePoints(team1, score1);
            distributePoints(team2, score2);

            if(score1 > score2){
                std::cout << team1.getName() << " win against " << team2.getName() << " (" << score1 << " - " << score2 << ")\n";
                teams.push(team1);            
            } else{
                std::cout << team2.getName() << " win against " << team1.getName() << " (" << score2 << " - " << score1 << ")\n";
                teams.push(team2);
            }
        }

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
        void startTournament(){
            while (teams.size() > 1) {
                Team team1 = teams.front(); teams.pop();
                Team team2 = teams.front(); teams.pop();

                playMatch(team1, team2);
            }

            std::cout << "The winner of the tournament is: " << teams.front().getName() << std::endl;

        }

        /*Análisis de complejidad:
        Mejor de los casos: O(1)
        Caso Promedio: O(n)
        Peor de los casos: O(n)
        */
        void updateCSV(const std::string& filePath) {
            std::ofstream file(filePath);
            if (file.is_open()) {

                file << "name,position,number,points,height,team\n";

                std::queue<Team> tempTeams = teams;
                while (!tempTeams.empty()) {
                    Team team = tempTeams.front();
                    tempTeams.pop();

                    for (auto& player : team.getPlayers()) {

                        file << player.getName() << ","
                            << player.getPosition() << ","
                            << player.getNumber() << ","
                            << player.getPoints() << ","
                            << player.getHeight() << ","
                            << player.getTeam() << "\n";
                    }
                }
                file.close();
                std::cout << "Results saved to " << filePath << std::endl;
            } else {
                std::cerr << "Error opening CSV file for updating\n";
            }
        }
};

#endif
