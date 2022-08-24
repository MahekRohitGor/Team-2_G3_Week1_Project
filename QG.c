#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

void help(){
    // Instruction for player to understand game.
    printf("Here are the instructions to play this Quiz Game: \n");
    printf("1. Game will consist of 10 questions in total and will be in MCQ type.\n");
    printf("2. You can choose your topic of interest and play Quiz Game.\n");
    printf("3. For each correct answer you will get +4 and for every incorrect answer you will get -1. \n");
    printf("4. Once the game is over, your score will be displayed and if you are in top 5 then your name will be displayed in leaderboard.\n");
    printf("All the Best ! \n");
}

void start(){
    // Taking an input of his/her name from a player to get their name displayed in leaderboard. 
    printf("Enter your Name: ");
    char name[50];
    gets(name);
    printf("Welcome %s to Quiz Game", name);
    printf("\n");
    // Giving player a choice of their topic 
    printf("Below are some of the topics for Quiz Game, You can choose your topic by pressing the respective number as given below: \n");
    printf("1. Science \n");
    printf("2. Maths \n");
    printf("3. G.K \n");
    printf("4. Sports \n");
    printf("5. Technology \n");

    // asking user to enter their choice by using switch-case, and getting started with quiz.
    int choice;
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("You have choosen Science !");
        break;
    case 2:
        printf("You have choosen Maths !");
        break;
    case 3:
        printf("You have choosen G.K !");
        break;
    case 4:
        printf("You have choosen Sports !");
        break;
    case 5:
        printf("You have choosen Technology !");
        break;
    
    default:
        printf("Please Enter choice between 1-5 !");
        break;
    }





}





int main(){
    struct ques{
        char ques[200];
        char opt1[50];
        char opt2[50];
        char opt3[50];
        char opt4[50];
        char ans[50];
    };
    



    return 0;
}