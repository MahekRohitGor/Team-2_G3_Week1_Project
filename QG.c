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
    // struct ques q1,q2,q3,q4,q5,q6,q7,q8,q9,q10,q11,q12,q13,q14,q15;
    switch (choice)
    {
    case 1:
        printf("You have choosen Science !\n");
        printf("Here are your questions: \n");
        int N=10, score, i;
        score = 0;
        for(i=0; i<N; i++){
            int r = rand()%N;
            if(r ==0){
                printf("Q. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            else if(r ==1){
                printf("Q. Which of the following is a non metal that remains liquid at room temperature?\n a. Phosphorus   b. Bromine \n c. Chlorine     d. Helium \n");
                if(getchar()=='b' || 'B'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            else if(r ==2){
                printf("Q. Chlorophyll is a naturally occuring chelate compound in which center metal atom is\na. Copper       b. Magnesium\nc. Iron         d. Calcium\n");
                if(getchar()=='b' || 'B'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==3){
                printf("Q.Brass gets discoloured in air because of the presence of which of the following gases in air?\n a. Oxygen      b. Hydrogen sulphide\n c. Carbon dioxide        d. Nitrogen\n");
                if(getchar()=='b' || 'B'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==4){
                printf("Q. Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?\n a. Vitamin A      b. Vitamin B \n c. Vitamin C        d. Vitamin D \n");
                if(getchar()=='a' || 'A'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==5){
                printf("Q. Which of the following algae is used to make iodine?\n a.Macrocystis      b.  Surgassum \n c.Synechococcus       d. Anabina \n");
                if(getchar()=='a' || 'A'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r == 6){
                printf("Q. What is another name for cyanobacteria?\n a.Blue-green algae      b. Protists \n c.Golden algae        d. Slime moulds\n");
                if(getchar()=='a' || 'A'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==7){
                printf("Q. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
            if(r ==0){
                printf("1. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                if(getchar()=='d' || 'D'){
                    printf("Correct Answer !");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!");
                    score -= 1;
                }
            }
        }
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

struct ques{
        char ques[200];
        char opt1[50];
        char opt2[50];
        char opt3[50];
        char opt4[50];
        char ans[50];
    };



int main(){
    start();
    return 0;
}