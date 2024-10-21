#ifndef PLAYER_H_
#define PLAYER_H_

#include <iostream>
#include <string>

class Player{
    private:
        std::string name;
        std::string position;
        int number;
        int points;
        float height;
        std::string teamName;

    public:
        Player(){
            this -> name = "Unknown";
            this -> position = "Unknown";
            this -> number = 0;
            this -> points = 0;
            this -> height = 0.0;
            this -> teamName = "Unknown";
        };

        Player(std::string nam, std::string pos, int num, int poi, float hei, std::string tea){
            this -> name = nam;
            this -> position = pos;
            this -> number = num;
            this -> points = poi;
            this -> height = hei;
            this -> teamName = tea;
        };

        void setName(std::string nam){this -> name = nam;};
        void setPosition(std::string pos){this -> position = pos;};
        void setNumber(int num){this -> number = num;};
        void setPoints(int poi){this -> points = poi;};
        void setHeight(float hei){this -> height = hei;};
        void setTeam(std::string tea){this -> teamName = tea;};

        std::string getName(){return name;};
        std::string getPosition(){return position;};
        int getNumber(){return number;};
        int getPoints(){return points;};
        float getHeight(){return height;};
        std::string getTeam(){return teamName;};

        void scorePoint(int scpoints){points += scpoints;};

        void showInfo() {
            std::cout << "Name: " << name << std::endl;
            std::cout << "Position: " << position << std::endl;
            std::cout << "Number: " << number << std::endl;
            std::cout << "Points: " << points << std::endl;
            std::cout << "Height: " << height << std::endl;
            std::cout << "Team: " << teamName << std::endl;
        };
};

#endif
