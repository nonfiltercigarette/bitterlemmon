#include <iostream>
#include <string>

int main(){

    //Variables

    std::string yourName;

    std::string customerOne = "Mike";
    std::string customerTwo = "T";
    std::string customerThree = "Luke";

    int moneyCustomerOne = 2700;
    int moneyCustomerTwo = 2140;
    int moneyCustomerThree = 2330;

    int chooseCustomerNumber;
    bool chooseCustomerCheck;



    std::cout << "----------------------------------------\n";
    std::cout << "------- Bitter like a Lemmon 714 -------\n";
    std::cout << "----------------------------------------\n\n\n\n\n\n\n\n";

    std::cout << "----------------------------------------";
    std::cout << "Before we start: Why don't you tell me your name? ";
    std::cin >> yourName;
    std::cout << "Perfect! Then welcome " << yourName << ". Are you ready? Never mind... let's get started!";
    std::cout << "----------------------------------------\n\n\n\n\n\n\n\n";

    std::cout << "In an old medicine cabnet at your grandma's,\nyou found an originally sealed bottle of Lemmon 714.\n\n";

    std::cout << "You immidietly called your old pal Vito and\ntell him about it. He said that he'll call some people who may wanna buy them.\n\n";

    std::cout << "----------------------------------------\n\n";

    std::cout << "After a couple of hours he called back and got three potentional customers:\n\n";

    std::cout << "----------------------------------------\n\n";

    std::cout << "First we have " << customerOne << ". He'll buy them for $" << moneyCustomerOne << ".\n";
    std::cout << "Then we have " << customerTwo << ". He'll buy them for $" << moneyCustomerTwo << ".\n";
    std::cout << "And for the third one we have " << customerThree << ". He'll buy them for $" << moneyCustomerThree << ".\n\n";

    std::cout << "----------------------------------------\n\n";

    std::cout << "Vito: So" << yourName << "here are your three customers. But a little reminder:\n\nDealing drugs is a nasty ass business.\n";
    std::cout << "That means please be carefull, choose wisely and don't just pick the guy with the most money! It could be a scam... or worse. Or nothing. Good luck" << yourName; "!\n\n";

    std::cout << "----------------------------------------\n\n";

    std::cout << "Now choose who you're gonna sell them good old Lemmons:\n\n";

    std::cout << "1) Mike\n";
    std::cout << "2) T\n";
    std::cout << "3) Luke\n\n";

    std::cout << "Now... select the number on who it should be?: ";
    std::cin >> chooseCustomerNumber;
    std::cout << "\n";

    if(chooseCustomerNumber >= 1 && chooseCustomerNumber <= 3){
        chooseCustomerCheck = true;
    } else{
        chooseCustomerCheck = false;
    }

    while(chooseCustomerCheck == false){
        std::cout << "Are you a fucking retard" << yourName << "? You can only\npick a number between 1 and 3 and you choosed " << chooseCustomerNumber << "??\n\n";

        std::cout << "Try again... please: ";
        std::cin >> chooseCustomerNumber;
        std::cout << "\n";

        if(chooseCustomerNumber >= 1 && chooseCustomerNumber <= 3){
            chooseCustomerCheck = true;
        }

    }

    switch (chooseCustomerNumber)
    {
    case 1:
        std::cout << "----------------------------------------\n\n";
        std::cout << "Vito: Okay " << yourName << ", I'll orginaze a meeting with " << customerOne << "!\n\n";
        std::cout << "Two days past and " << customerOne << " showed up.\nFirst he'll check the bottle of it's real.\n\n";
        std::cout << customerOne << ": Seems real to me.\n\nHe grabs in the inside of his jacket. But insteat of the agreed amount, he pulled a Glock, shoots you and run away...\n\n";
        std::cout << "And the here we are. The Lemmons are gone, with the $" << moneyCustomerOne << "...\n\n";
        std::cout << "----------------------------------------\n\n";
        std::cout << "GAME OVER! Sorry " << yourName << "...";
        std::cout << "----------------------------------------\n\n";
        break;
    case 2:
        std::cout << "----------------------------------------\n\n";
        std::cout << "Vito: Okay " << yourName << ", I'll orginaze a meeting with " << customerTwo << "!\n\n";
        std::cout << "Two days past and " << customerTwo << " showed up.\nFirst he'll check the bottle of it's real.\n\n";
        std::cout << customerTwo << ": Seems real to me.\n\nBut right before he grabs in his pocket for the money, a group of DEA Agents ran towards you!\n";
        std::cout << "You start to run, but it's to late. At the corner of the street waited 10 agents. You accept your fate and get arrestes... no comming back\n\n";
        std::cout << "And the here we are. The Lemmons are gone, with the $" << moneyCustomerTwo << "...\n\n";
        std::cout << "----------------------------------------\n\n";
        std::cout << "GAME OVER! Sorry " << yourName << "...";
        std::cout << "----------------------------------------\n\n";
        break;
    case 3:
        std::cout << "Vito: Okay " << yourName << ", I'll orginaze a meeting with " << customerThree << "!\n\n";
        std::cout << "Two days past and " << customerOne << " showed up.\n First he'll check the bottle of it's real.\n\n";
        std::cout << customerOne << "Seems real to me.\n\n He grabs in the inside of his jacket, pulled out the agreet amount of money and give it to you.\n";
        std::cout << "So now you got the money, didn't got ripped off, are still alive and are not in jail. Good Job " << yourName << "!\n\n";
        std::cout << "And the here we are. The Lemmons are gone, with the $" << moneyCustomerThree << "...\n\n";
        std::cout << "----------------------------------------\n\n";
        std::cout << "YOU WON! CONGRATS " << yourName << "!";
        std::cout << "----------------------------------------\n\n";
        break;
    default:
        break;
    }

    return 0;

}