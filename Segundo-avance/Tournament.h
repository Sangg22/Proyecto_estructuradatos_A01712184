#ifndef TOURNAMENT_H_
#define TOURNAMENT_H_

#include <iostream>
#include <queue>
#include <stdlib.h>
#include "Team.h"

class Tournament{
    private:
        std::queue<Team> teams;

    public:
        void addTeam(const Team& team) { 
            teams.push(team);
        }

        void playMatch(Team& team1, Team& team2){
            int score1 = rand() % 41 + 60;
            int score2 = rand() % 41 + 60;

            if(score1 > score2){
                std::cout << team1.getName() << " win against " << team2.getName() << " (" << score1 << " - " << score2 << ")\n";
                teams.push(team1);            
            } else{
                std::cout << team2.getName() << " win against " << team1.getName() << " (" << score2 << " - " << score1 << ")\n";
                teams.push(team2);
            }
        }

        void startTournament(){
            while (teams.size() > 1) {
                Team team1 = teams.front(); teams.pop();
                Team team2 = teams.front(); teams.pop();

                playMatch(team1, team2);
            }

            std::cout << "The winner of the tournament is: " << teams.front().getName() << std::endl;

        }
};

#endif
