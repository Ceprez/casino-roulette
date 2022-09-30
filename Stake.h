#include <iostream>
#include <random>

void stakeColor(double &accCoins){
    srand(time(0));
    int red[] = {1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36};
    int black[] = {2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35};
    int randomNum = rand() % 37;
    std::string userColor;
    double coins;
    std::cout << "Choose your color(lowercase): ";
    std::cin >> userColor;
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;
    int check = 0;
    if (userColor == "red"){
        for (int i = 0; i < sizeof(red) / sizeof(red[0]); ++i) {
            if (red[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userColor == "black"){
        for (int i = 0; i < sizeof(black) / sizeof(black[0]); ++i) {
            if (black[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
}

void stakeNumber(double &accCoins){
    srand(time(0));
    int randomNum = rand() % 37;
    int userNum;
    double coins;
    std::cout << "Choose a number: ";
    std::cin >> userNum;
    if (userNum < 0 || userNum > 36){
        std::cout << std::endl;
        std::cout << "Enter a number from 1 to 36!" << std::endl;
        std::cout << std::endl;
    }
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;

    if (userNum == randomNum && randomNum == 0) {
        std::cout << std::endl;
        std::cout << "You won!!!" << std::endl;
        std::cout << "Number was " << randomNum << "!" << std::endl;
        accCoins += coins*35;
        std::cout << std::endl;
    }

    else if (userNum == randomNum){
        std::cout << std::endl;
        std::cout << "You won!!!" << std::endl;
        std::cout << "Number was " << randomNum << "!" << std::endl;
        accCoins += coins;
        std::cout << std::endl;
    }
    else if (userNum != randomNum){
        std::cout << std::endl;
        std::cout << "You lost!!!" << std::endl;
        std::cout << "Number was " << randomNum << "!" << std::endl;
        accCoins -= coins;
        std::cout << std::endl;
    }
    else {
        std::cout << std::endl;
        std::cout << "You can enter only numbers!" << std::endl;
        std::cout << std::endl;
    }
}

void stakeHighLow(double &accCoins){
    srand(time(0));
    int low[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    int high[] = {19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36};
    int randomNum = rand() % 37;
    std::string userChoice;
    double coins;
    std::cout << "Choose low(1-18) or high(19-36)(lowercase): ";
    std::cin >> userChoice;
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;
    int check = 0;
    if (userChoice == "low"){
        for (int i = 0; i < sizeof(low) / sizeof(low[0]); ++i) {
            if (low[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "high"){
        for (int i = 0; i < sizeof(high) / sizeof(high[0]); ++i) {
            if (high[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
}

void stakeEvenOdd(double &accCoins){
    srand(time(0));
    int even[] = {2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36};
    int odd[] = {1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35};
    int randomNum = rand() % 37;
    std::string userChoice;
    double coins;
    std::cout << "Choose even or odd(lowercase): ";
    std::cin >> userChoice;
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;
    int check = 0;
    if (userChoice == "even"){
        for (int i = 0; i < sizeof(even) / sizeof(even[0]); ++i) {
            if (even[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "odd"){
        for (int i = 0; i < sizeof(odd) / sizeof(odd[0]); ++i) {
            if (odd[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
}

void stakeColumn(double &accCoins){
    srand(time(0));
    int first[] = {	1, 4, 7, 10, 13, 16, 19, 22, 25, 28, 31, 34};
    int second[] = {2, 5, 8, 11, 14, 17, 20, 23, 26, 29, 32, 35};
    int third[] = {3, 6, 9, 12, 15, 18, 21, 24, 27, 30, 33, 36};
    int randomNum = rand() % 37;
    std::string userChoice;
    double coins;
    std::cout << "Choose first, second or third(lowercase): ";
    std::cin >> userChoice;
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;
    int check = 0;
    if (userChoice == "first"){
        for (int i = 0; i < sizeof(first) / sizeof(first[0]); ++i) {
            if (first[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "second"){
        for (int i = 0; i < sizeof(second) / sizeof(second[0]); ++i) {
            if (second[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "third"){
        for (int i = 0; i < sizeof(third) / sizeof(third[0]); ++i) {
            if (third[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
}

void stakeDozen(double &accCoins){
    srand(time(0));
    int first[] = {	1, 2,3,4,5,6,7,8,9,10,11,12};
    int second[] = {13,14,15,16,17,18,19,20,21,22,23,24};
    int third[] = {25,26,27,28,29,30,31,32,33,34,35,36};
    int randomNum = rand() % 37;
    std::string userChoice;
    double coins;
    std::cout << "Choose first, second or third(lowercase): ";
    std::cin >> userChoice;
    std::cout << "Choose amount of coins: ";
    std::cin >> coins;
    int check = 0;
    if (userChoice == "first"){
        for (int i = 0; i < sizeof(first) / sizeof(first[0]); ++i) {
            if (first[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "second"){
        for (int i = 0; i < sizeof(second) / sizeof(second[0]); ++i) {
            if (second[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
    else if (userChoice == "third"){
        for (int i = 0; i < sizeof(third) / sizeof(third[0]); ++i) {
            if (third[i] == randomNum){
                std::cout << std::endl;
                std::cout << "You won!!!" << std::endl;
                accCoins += coins;
                check = 1;
                break;
            }
        }
        if(check == 0){
            std::cout << std::endl;
            std::cout << "You lost!!!" << std::endl;
            accCoins  -= coins;
        }
        std::cout << "The number was: " << randomNum << std::endl;
    }
}