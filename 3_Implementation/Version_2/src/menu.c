#include"menu.h"



void home()
{
    char playername[40];
    char choice;
     system("cls");
     printf("Welcome\n\n");
     printf("\n\t > Press \033[0;31m S \033[0m to start the game");
     //printf("\n\t > press \033[0;31m H \033[0m for help");
     printf("\n\t > press \033[0;31m Q \033[0m to quit\n\n\n");

     choice=toupper(getch());

   /*if (choice=='H')
	{
    help();getch();
	goto mainhome;
	}
	else*/ if (choice=='Q')
        exit(1);
	else if(choice=='S')
    {
     system("cls");
         printf("Resister your name:");
     gets(playername);
game:
    system("cls");

     printf("\n\t > Press \033[0;31m A \033[0m for c quiz");
     printf("\n\t > press \033[0;31m B \033[0m for c++ quiz");
     printf("\n\t > press \033[0;31m C \033[0m for java quiz\n\n\n");


       if (toupper(getch())=='A')
		{
		    printf("your score is:%d",quizC());
        }
	else if(toupper(getch())=='B')
		{
           printf("your score is:%d",quizCpp());
       }
       else if(toupper(getch())=='C')
       {
           printf("your score is:%d",quizJava());
       }
       else {
        printf("\n invalid entry \n");
        goto game;
       }
    }
    printf("do you want to play again:y/n\n\n");
    if(toupper(getch())=='Y')
        goto game;
    else
        exit(1);
    }
