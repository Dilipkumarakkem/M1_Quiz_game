#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>  
  
struct play {  
            char name[20];  
            int score;  
            int rat;       //star ratings  
}p;  
void high_score();  
void start();  
void help();  
void main()  
{  
    //clrscr();  
       int chc=0;  
       printf("Press 1 to start the game\n2 to see high scores \n3 to see game help\n0 to exit :   ");  
    scanf("%d",&chc);  
    switch(chc)  
    {  
        case 1:  
        start();  
        break;  
  
        case 2:  
        high_score();  
        break;  
  
        case 3:  
        help();  
        break;  
  
          default:  
          exit(1);  
    }  
  
  getch();  
}  
  
void help()  
{  
     int ch;  
  
     printf("\n\n ************************* GAME HELP *************************");  
     printf("\n -------------------------------------------------------------------------");  
     printf("\n .................... C program Quiz Game...........\n");  
     printf("\n >> There will be a total of 20 questions");  
     printf("\n >> You will be given 4 options and you have to press a, b ,c or d for the");  
     printf("\n    right option");  
     printf("\n >> Each question will carry 5 points");  
     printf("\n >> You will be asked questions continuously.");  
     printf("\n >> There is no negative marking for wrong answer");  
  
    printf("\n\n ************************* BEST OF LUCK *************************\n\n");  
  
  
    printf("\nContinue playing ? (1/0) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
}  
  
void start()  
{  
          int ans;  
          int count=0;  
          char rating[20];  
  
          FILE *fp;  
  
          if((fp=fopen("\\tmp\play2.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  
  
        printf("\nPlease enter your name: ");  
        scanf("%s",p.name);  
        printf("******************* Welcome \" %s \"  to C Quiz Game *************************** \n\n", p.name);  
         printf("Q(1).Grand Central Terminal, Park Avenue, New York is the world's \n 1.largest railway station \t\t2.highest railway station\n 3.longest railway station\t\t 4.None of the above\n\n");  
         printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
            ++count;  
            }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.largest railway station\n\n");  
        }  
        printf("Q(2) Entomology is the science that studies \n a.Behavior of human beings\t\t2.Insects \n3.The origin and history of technical and scientific terms\n4.The formation of rocks\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
         if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count; 
                }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Insects\n\n");  
        }  
  
        printf("Q(3) Eritrea, which became the 182nd member of the UN in 1993, is in the continent of \n1.Asia\t\t2.Africa\n3.Europe\t4.Australia\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Africa\n\n");  
        }  
         printf("Q(4).Garampani sanctuary is located at \n1.Junagarh, Gujarat\t2.Diphu, Assam\n3.Kohima, Nagaland\t4.Gangtok, Sikkim\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Diphu, Assam\n\n");  
        }  
        printf("Q(5).For which of the following disciplines is Nobel Prize awarded? \n1.Physics and Chemistry\t2.Physiology or Medicine\n3.Literature, Peace and Economics\t4.All of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==4)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 4.All of the above\n\n");  
        }  
        printf("Q(6).Hitler party which came into power in 1933 is known as \n1.Labour Party\t2.Nazi Party\n3.Ku-Klux-Klan\t4.Democratic Party\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Nazi Party\n\n");  
        }  
        printf("Q(7). FFC stands for \n1.Foreign Finance Corporation\t2.Film Finance Corporation\n3.Federation of Football Council\t4.None of the above\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Film Finance Corporation\n\n");  
        }  
        printf("Q(8). Fastest shorthand writer was \n1.Dr. G. D. Bist\t2. J.R.D. Tata\n3. J.M. Tagore\t4. Khudada Khan\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Dr. G. D. Bist\n\n");  
        }  
  
        printf("Q(9). Epsom (England) is the place associated with \n1.Horse racing\t2.Polo\n3.Shooting\t4.Snooker\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Horse racing\n\n");  
        }  
  
        printf("Q(10). First human heart transplant operation conducted by Dr. Christian Bernard on Louis Washkansky, was conducted in \n1.1967\t2.1968\n3.1958\t4.1922\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1. 1967\n\n");  
        }  
        //counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", count*5);  
  
                p.score=count*5;  
  
                if(p.score >= 80)  
                {  
                    printf("Rating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 60 && p.score < 80)  
                {  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 40 && p.score < 60)  
                {  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 20 && p.score < 40)  
                {  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 20)  
                {  
                    printf("Rating: *");  
                     p.rat=1;  
                }  
  
            //writing to file  
  
                    fprintf(fp,"%s %d %d", p.name,p.score,p.rat);  
                    fclose(fp);  
        }  
        else  
        {  
            printf("Try again!");  
        }  
}  
  
void high_score()  
{  
  
    int ch;  
  
    FILE *fp;  
    if((fp=fopen("\\tmp\play2.txt", "r"))==NULL)  
          {  
                //printf("error opening file\n");  
                printf("\nNo games played yet!\n");  
            }  
            else  
            {  
  
    printf("\n******************************* HIGH SCORES *******************************\n\n");  
    printf("NAME     POINTS     RATING\n");  
    while(fscanf(fp,"%s %d %d",p.name,&p.score, &p.rat) !=EOF)  
    {  
        printf("____________________________\n");  
        printf("%s     %d     %d star(s)\n\n",p.name,p.score,p.rat);  
    }  
  
    fclose(fp);  
  
    }  
    printf("\nContinue playing ? (1 - Yes and 0 - No) :  ");  
    scanf("%d",&ch);  
  
    if(ch==1)  
    {  
        start();  
    }  
    else  
    {  
        exit(1);  
    }  
  
} 
