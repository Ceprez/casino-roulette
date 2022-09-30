#include <iostream>
#include <random>
#include "Stake.h"

class User {
public:
    std::string name;
    std::string surname;
    std::string idNumber;
    int age;
    double coins;

    User(std::string name, std::string surname, std::string idNumber, int age, double coins){
        this -> name = name;
        this -> surname = surname;
        this -> idNumber = idNumber;
        this -> age = age;
        this -> coins = coins;
    }
};

void stakeNumber(double &accCoins);
void stakeColor(double &accCoins);
void stakeHighLow(double &accCoins);
void stakeEvenOdd(double &accCoins);
void stakeColumn(double &accCoins);
void stakeDozen(double &accCoins);

int main() {

    User user("David", "Gaurgashvili", "01924095188", 18, 1000);
    if (user.age < 18){
        std::cout << "You must be over 18!" << std::endl;
        return 0;
    }
    int userInput;
    do {
        std::cout << "Welcome to our Roulette Casino, " << user.name << "!" << std::endl;
        std::cout << "1. Stake" << std::endl;
        std::cout << "2. Check Coins" << std::endl;
        std::cout << "3. See my info" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Your Choice: ";
        std::cin >> userInput;
        switch (userInput) {
            case 1:{
                int userStakeChoice;
                std::cout << std::endl;
                std::cout << "1. Stake by number" << std::endl;
                std::cout << "2. Stake by color" << std::endl;
                std::cout << "3. Stake 1-18 or 19-36" << std::endl;
                std::cout << "4. Stake even or odd" << std::endl;
                std::cout << "5. Stake columns" << std::endl;
                std::cout << "6. Stake dozens" << std::endl;
                std::cout << "7. Exit" << std::endl;
                std::cout << "Your Choice: ";
                std::cin >> userStakeChoice;
                switch (userStakeChoice) {
                    case 1:{
                        stakeNumber(user.coins);
                        break;
                    }
                    case 2:{
                        stakeColor(user.coins);
                        break;
                    }
                    case 3:{
                        stakeHighLow(user.coins);
                        break;
                    }
                    case 4:{
                        stakeEvenOdd(user.coins);
                        break;
                    }
                    case 5:{
                        stakeColumn(user.coins);
                        break;
                    }
                    case 6:{
                        stakeDozen(user.coins);
                        break;
                    }
                    default:{
                        std::cout << "Enter 1-3!" << std::endl;
                    }
                }

            }
            case 2:{
                std::cout << std::endl;
                std::cout << "You have " << user.coins << " coins on your account" << std::endl;
                std::cout << std::endl;
                break;
            }
            case 3:{
                std::cout << std::endl;
                std::cout << "Name: " << user.name << std::endl;
                std::cout << "Surname: " << user.surname << std::endl;
                std::cout << "ID Number: " << user.idNumber << std::endl;
                std::cout << "Age: " << user.age << std::endl;
                std::cout << "Your balance: " << user.coins << std::endl;
                std::cout << std::endl;
                break;
            }
            case 4:{
                return 0;
            }
            default:{
                std::cout << std::endl;
                std::cout << "Choose 1-3!" << std::endl;
                std::cout << std::endl;
            }
        }
    } while (userInput != 4);



    return 0;
}
