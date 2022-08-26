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
    char ans1, ans2, ans3, ans4, ans5, ans6, ans7, ans8, ans9, ans10, ans11, ans12, ans13, ans14, ans15;
    switch (choice)
    {
    case 1:
        printf("You have choosen Science !\n");
        printf("Here are your questions: \n");
        int score;
        score = 0;
                printf("Q. Electric bulb filament is made of\n a. Copper      b. Aluminium \n c. Lead        d. Tungsten \n");
                scanf("%c", ans1);
                if(ans1=='d' || 'D'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
                printf("Q. Which of the following is a non metal that remains liquid at room temperature?\n a. Phosphorus   b. Bromine \n c. Chlorine     d. Helium \n");
                scanf("%c", ans2);
                if(ans2 =='b' || 'B'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
                printf("Q. Chlorophyll is a naturally occuring chelate compound in which center metal atom is\na. Copper       b. Magnesium\nc. Iron         d. Calcium\n");
                scanf("%c", ans3);
                if(ans3 =='b' || 'B'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
            
                printf("Q.Brass gets discoloured in air because of the presence of which of the following gases in air?\n a. Oxygen      b. Hydrogen sulphide\n c. Carbon dioxide        d. Nitrogen\n");
                scanf("%c", ans4);
                if(ans4=='b' || 'B'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
           
           
                printf("Q. Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?\n a. Vitamin A      b. Vitamin B \n c. Vitamin C        d. Vitamin D \n");
                scanf("%c", ans5);
                if(ans5=='a' || 'A'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
            
                printf("Q. Which of the following algae is used to make iodine?\n a.Macrocystis      b.  Surgassum \n c.Synechococcus       d. Anabina \n");
                scanf("%c", ans6);
                if(ans6=='a' || 'A'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
                printf("Q. What is another name for cyanobacteria?\n a.Blue-green algae      b. Protists \n c.Golden algae        d. Slime moulds\n");
                scanf("%c", ans7);
                if(ans7=='a' || 'A'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
           
                printf("Q. The Alkali metals are called good reducing agents. This implies that__:\n a.They easily capture electrons\n      b. They are not stable at room temperature \n c. They easily lose electrons\n        d. They don’t act with dilute acids\n");
                scanf("%c", ans8);
                if(ans8=='c' || 'C'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
           
            
                printf("Q. Plants growing on marshy areas are commonly called as _____?\n a. Oxylophytes      b.  Lithophytes \n c. Helophytes        d. Psilophytes \n");
                scanf("%c", ans9);
                if(ans9 =='c' || 'C'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
            
                printf("Q.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained\n a. By Newton's first Law      b.  By Newton's Second Law  \n c. By Newton'third Law        d. By the principle of conservation of momentum \n");
                scanf("%c", ans10);
                if(ans10=='a' || 'A'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
           
            
                printf("Q. Ribosomes are sites for\n a. Protein Synthesis     b.Photosynthesis\n c.Fat Synthesis        d. Respiration\n");
                scanf("%c", ans11);
                if(ans11 =='a' || 'A'){
                    printf("Correct Answer !\n");
                    score += 4;
                }
                else{
                    printf("Wrong Answer!\n");
                    score -= 1;
                }
            
            // else if(r == 11){
            //     printf("Q. Which of the following organism breathes from skin?\n a. Snake      b. Earthworm \n c. Monkey        d. Humans \n");
            //     scanf("%c", ans12);
            //     if(ans12=='b' || 'B'){
            //         printf("Correct Answer !\n");
            //         score += 4;
            //     }
            //     else{
            //         printf("Wrong Answer!\n");
            //         score -= 1;
            //     }
            // }
            // else if(r ==12){
            //     printf("Q. Which of the following animals does not have gills?\n a. Octopus     b.Squid \n c.Clown Fish        d. Whale \n");
            //     scanf("%c", ans13);
            //     if(ans13=='d' || 'D'){
            //         printf("Correct Answer !\n");
            //         score += 4;
            //     }
            //     else{
            //         printf("Wrong Answer!\n");
            //         score -= 1;
            //     }
            // }
            // else if(r ==13){
            //     printf("Q. The value of 1 Angstrom is _________ (in micron)\n a. 10^-4 micron      b.  10^-6 micron \n c.10^-10 micron      d.  10^-2 micron\n");
            //     scanf("%c", ans14);
            //     if(ans14=='a' || 'A'){
            //         printf("Correct Answer !\n");
            //         score += 4;
            //     }
            //     else{
            //         printf("Wrong Answer!\n");
            //         score -= 1;
            //     }
            // }
            // else if(r ==14){
            //     printf("Q. At which point of the Earth is there no gravity?\n a. At North and South Pole      b. At Equator  \n c. On the ocean surface        d. At center of the earth\n");
            //     scanf("%c", ans15);
            //     if(ans15=='d' || 'D'){
            //         printf("Correct Answer !\n");
            //         score += 4;
            //     }
            //     else{
            //         printf("Wrong Answer!\n");
            //         score -= 1;
            //     }
            // }

            // getchar();
        printf("Your score is %d\n",score);
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