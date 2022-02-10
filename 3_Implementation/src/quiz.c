#include<stdio.h>  
#include<stdlib.h>  
#include<conio.h>  
  
struct play {  
            char name[10];  
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
     printf("\n >> There will be a total of 10 questions");  
     printf("\n >> You will be given 4 options and you have to press 1, 2 ,3 or 4 for the");  
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
          char rating[10];  
  
          FILE *fp;  
  
          if((fp=fopen("\\tmp\play2.txt","a"))==NULL)  
             {  
                 printf("error opening file\n");  
             }  
  
  
        printf("\nPlease enter your name: ");  
        scanf("%s",p.name);  
        printf("******************* Welcome \" %s \"  to C Quiz Game *************************** \n\n", p.name);  
         printf("Q(1).Which of the following billionire went to space in 2021 \n 1.Jeff Bezos \t\t2.Benard arnault\n 3.Elon Musk\t\t 4.none of these\n\n");  
         printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
            ++count;  
            }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Jef Bezos\n\n");  
        }  
        printf("Q(2)Which United States president had his Facebook account suspended in 2021 ? \n 1.George Bush\t\t2.Donald Trump \n3.Barack Obama\n4.Joe Biden\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
         if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count; 
                }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Donald Trump\n\n");  
        }  
  
        printf("Q(3) Which US city was the first to require people to show proof of Covid-19 vaccination to enter businesses? \n1.Los Angeles\t\t2.New York City\n3.Chicago\t4.San Antonio\n\n");  
  
        printf("Your answer: ");  
        scanf("%d",&ans);  
  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.New York city\n\n");  
        }  
         printf("Q(4).Which country hosted the delayed 2020 Olympics in 2021? \n1.Chaina\t2.Japan\n3.Thailand\t4.India\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==2)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 2.Japan\n\n");  
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
        printf("Q(7). What anniversary is the Harry Potter film franchise celebrating in 2021? \n1.10th\t2.20th\n3.30th\t4.25th\n\n");  
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
        printf("Q(8). In 2021, who was the first woman of color to win an Oscar for Best Director \n1.Chloé Zhao for Nomadland\t2.Kelly Reichardt for First Cow\n3.Regina King for One Night in Miami\t4.Lorene Scafaria for Hustlers\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.Chloé Zhao for Nomadlandt\n\n");  
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
  
        printf("Q(10).How many new IPL teams are joining in 2022 IPL league? \n1.2\t2.1\n3.3\t4.4\n\n");  
        printf("Your answer: ");  
        scanf("%d",&ans);  
        if(ans==1)  
        {  
            printf("Correct! +5 points\n\n");  
  
                ++count;  
        }  
        else  
        {  
            printf("Wrong answer! Correct answer is 1.2\n\n");  
        }  
        //counting number of correct answers and, ratings  
        if(count > 0)  
        {  
                printf("Thanks for playing, Your scored: %d points \t", count*5);  
  
                p.score=count*5;  
  
                if(p.score >= 45)  
                {  
                    printf("Rating: * * * * *");  
                    p.rat=5;  
                }  
                else if(p.score >= 35 && p.score < 45)  
                {  
                    printf("Rating: * * * *");  
                    p.rat=4;  
                }  
                else if(p.score >= 25 && p.score < 35)  
                {  
                    printf("Rating: * * *");  
                  p.rat=3;  
                }  
                else if(p.score >= 15 && p.score < 25)  
                {  
                    printf("Rating: * *");  
                    p.rat=2;  
                }  
                else if(p.score < 10)  
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
