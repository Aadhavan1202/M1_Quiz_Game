/**
 * @file menu.c
 * @author aadhavan (aadhav.1202@gmail.com)
 * @brief this file serve as the main home page for the quiz game
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include"menu.h"
#include<stdio.h>
#include <curses.h>
#include<ctype.h>
#include<stdlib.h>

char playername[40],choice;

void home()
{
     system("cls");
     printf("Welcome to quiz game made with c\n\n");
     printf("\n\t > Press \033[0;31m S \033[0m to start the game");
     printf("\n\t > press \033[0;31m H \033[0m for help");
     printf("\n\t > press \033[0;31m W \033[0m to view the highest score");
     printf("\n\t > press \033[0;31m Q \033[0m to quit\n\n\n");

     choice=toupper(getch());

   if (choice=='H')
	{
    help();getch();
	}
	else if (choice=='W'){
        show_record();
        home();
	}
	else if (choice=='Q')
        exit(0);
	else if(choice=='S')
    {
     system("cls");
         printf("Register your name:");
     fgets(playername,40,stdin);
    game();
    
    }
}
void game(){
    system("cls");

     printf("\n\t > Press \033[0;31m A \033[0m for c quiz");
     printf("\n\t > press \033[0;31m B \033[0m for c++ quiz");
     printf("\n\t > press \033[0;31m C \033[0m for java quiz\n\n\n");
     choice=toupper(getch());
       if (choice=='A')
		{
		    printf("your score is:\033[0;31m %d \033[0m",quizC());
        }
	else if(choice=='B')
		{
           printf("your score is:\033[0;31m %d \033[0m",quizCpp());
       }
       else if(choice=='C')
       {
           printf("your score is:\033[0;31m %d \033[0m",quizJava());
       }
       else {
        printf("\n invalid entry \n");
        getch();
        home();
       }

    printf("\n\ndo you want to play again:y/n\n\n");
    if(toupper(getch())=='Y')
        game();
    else{
        edit_score(score,playername);
        exit(0);
    }
}

