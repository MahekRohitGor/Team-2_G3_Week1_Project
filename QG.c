#include <stdio.h>
#include <string.h>

struct ques
    {
        char ques[200];
        char opt1[50];
        char opt2[50];
        char opt3[50];
        char opt4[50];
        char ans[50];
    };
    
    typedef struct ques question;

  void Science(){
  char a[30];      //final
    int score=0;
    
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[0]); getchar();
    
    if(a[0]=='d'||a[0]=='D'){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void Maths(){
  char a[30];      //final
    int score=0;
    
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[0]); getchar();
    
    if(a[0]=='d'||a[0]=='D'){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void GK(){
  char a[30];      //final
    int score=0;
    
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[0]); getchar();
    
    if(a[0]=='d'||a[0]=='D'){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void Sports(){
  char a[30];      //final
    int score=0;
    
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[0]); getchar();
    
    if(a[0]=='d'||a[0]=='D'){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void Tech(){
  char a[30];      //final
    int score=0;
    
    question q1={"1. Electric bulb filament is made of","a. Copper","b. Aluminium","c. Lead","d.Tungsten","d.Tungsten"};
    printf("%s\n%s \t %s\n%s \t %s\n", q1.ques,q1.opt1,q1.opt2,q1.opt3,q1.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[0]); getchar();
    
    if(a[0]=='d'||a[0]=='D'){
        printf("correct answer!!");
        printf("\nyour score is:%d", ++score);
    }

    else {printf("wrong answer!");
    printf("\nyour score is:%d", score);
    }

    question q2={"\n2. Which of the following is a non metal that remains liquid at room temperature?","a. Phosphorus","b. Bromine","c. Chlorine","d.Helium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q2.ques,q2.opt1,q2.opt2,q2.opt3,q2.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[1]); getchar();
    if(a[1]=='b'||a[1]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q3={"\n3. Chlorophyll is a naturally occuring chelate compound in which center metal atom is","a. Copper","b.Magnesium","c. Iron","d.Calcium"};
    printf("%s\n%s \t %s\n%s \t %s\n", q3.ques,q3.opt1,q3.opt2,q3.opt3,q3.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[2]); getchar();
    if(a[2]=='b'||a[2]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q4={"\n4.Brass gets discoloured in air because of the presence of which of the following gases in air?","a.Oxygen ","b. Hydrogen sulphide","c.  Carbon dioxide","d.Nitrogen"};
    printf("%s\n%s \t %s\n%s \t %s\n", q4.ques,q4.opt1,q4.opt2,q4.opt3,q4.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[3]); getchar();
    if(a[3]=='b'||a[3]=='B'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q5={"\n5.Which among the following Vitamin is added to the milk in some countries as it is lost during the process of Fat Removal (Skimming)?","a.Vitamin A ","b. Vitamin B","c. Vitamin C","d.Vitamin D"};
    printf("%s\n%s \t %s\n%s \t %s\n", q5.ques,q5.opt1,q5.opt2,q5.opt3,q5.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[4]); getchar();
    if(a[4]=='a'||a[4]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q6={"\n6.  Which of the following algae is used to make iodine?","a. Macrocystis","b.Surgassum","c.Synechococcus","d.Anabina"};
    printf("%s\n%s \t %s\n%s \t %s\n", q6.ques,q6.opt1,q6.opt2,q6.opt3,q6.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[5]); getchar();
    if(a[5]=='a'||a[5]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);

    question q7={"\n7.What is another name for cyanobacteria?","a.Blue-green algae","b.Protists","c.Golden algae","d.Slime moulds"};
    printf("%s\n%s \t %s\n%s \t %s\n", q7.ques,q7.opt1,q7.opt2,q7.opt3,q7.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[6]); getchar();
    if(a[6]=='a'||a[6]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score); 

    question q8={"\n8. The Alkali metals are called good reducing agents. This implies that__:","a.They easily capture electrons","b.They are not stable at room temperature","c.They easily lose electrons","d.They don't act with dilute acids"};
    printf("%s\n%s \t %s\n%s \t %s\n", q8.ques,q8.opt1,q8.opt2,q8.opt3,q8.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[7]); getchar();
    if(a[7]=='c'||a[7]=='C'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  

    question q9={"\n9.A passenger in a moving bus is thrown forward when the bus suddenly stops. This is explained","a.By Newton's first Law","b.By Newton's Second Law","c.By Newton's Third Law","d.By the principle of conservation of momentum"};
    printf("%s\n%s \t %s\n%s \t %s\n", q9.ques,q9.opt1,q9.opt2,q9.opt3,q9.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[8]); getchar();
    if(a[8]=='a'||a[8]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);  


    question q10={"\n10. Ribosomes are sites for","a.Protein Synthesis","b.Photosynthesis","c.Fat Synthesis","d.Respiration "};
    printf("%s\n%s \t %s\n%s \t %s\n", q10.ques,q10.opt1,q10.opt2,q10.opt3,q10.opt4);
    printf("Enter your choice: ");
    scanf("%c", &a[9]); getchar();
    if(a[9]=='a'||a[9]=='A'){
        printf("correct answer!!");
        score++;
    }
    else printf("wrong answer!");
    printf("\nyour score is:%d", score);    
  }

  void start(){
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
  }

int main()
{
    Science();
    printf("******************************************************************************************************\n");
    printf("*****************************************Welcome to Quiz**********************************************\n");
    // Instruction for player to understand game.
    printf("Here are the instructions to play this Quiz Game: \n");
    printf("1. Game will consist of 10 questions in total and will be in MCQ type.\n");
    printf("2. You can choose your topic of interest and play Quiz Game.\n");
    printf("3. For each correct answer you will get +4 and for every incorrect answer you will get -1. \n");
    printf("4. Once the game is over, your score will be displayed and if you are in top 5 then your name will be displayed in leaderboard.\n");
    printf("All the Best ! and Let's start the game \n");
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
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    

 return 0;
}