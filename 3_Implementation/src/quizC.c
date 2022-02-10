/**
 * @file quizC.c
 * @author aadhavan (aadhav.1202@gmail.com)
 * @brief this is the c programming mcq page
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "menu.h"

int quizC()
{
    int count=0;

    for(int i=0;i<10;i++){
        system("cls");
         switch(i)
		{
		case 1:
		printf("\n\nWhere in C the order of precedence of operators do not exist?\n");
		printf("\n\na) Within conditional statements, if, else \nb) Within while, do-while \nc) Within a macro definition \nd) None of the mentioned\n");
		ans=toupper(getch());
		if (ans=='D'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

		case 2:
		printf("\n\n\n Which of the following typecasting is accepted by C language?\n");
		printf("\n\na) Widening conversions \nb) Narrowing conversions\nc) Widening & Narrowing conversions\nd) None of the mentioned\n");
		ans=toupper(getch());
		if (ans=='C'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }
        case 3:
		printf("\n\n\nWhat is an example of iteration in C? \n");
		printf("\n\na) for\nb) while\nc) do-while\nd) all of the mentioned\n");
		ans=toupper(getch());
		if (ans=='D'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

        case 4:
		printf("\n\n\nWhat is #include <stdio.h>?\n");
		printf("\n\na) Preprocessor directive\nb) Inclusion directive\nc) File inclusion directive\nd) None of the mentioned\n");
		ans=toupper(getch());
		if (ans=='A'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }
        case 5:
		printf("\n\n\nWhich of the following are C preprocessors?\n");
		printf("\n\na) #ifdef\nb) #define\nc) #endif\nd) all of the mentioned\n");
		ans=toupper(getch());
		if (ans=='D'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }
		case 6:
		printf("\n\n\nThe C-preprocessors are specified with _________ symbol.\n");
		printf("\n\na) #\nb) $\nc) ” ”\nd) &\n");
		ans=toupper(getch());
		if (ans=='A'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

        case 7:
		printf("\n\n\nHow many number of pointer (*) does C have against a pointer variable declaration?\n");
		printf("\n\na) 7\nb) 127\nc) 255\nd) No limits\n");
		ans=toupper(getch());
		if (ans=='D'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

        case 8:
		printf("\n\n\nWhat will be the value of the following assignment expression?\n\t\t(x = foo())!= 1 considering foo() returns 2\n");
		printf("\n\na) 2\nb) True\nc) 1\nd) 0\n");
		ans=toupper(getch());
		if (ans=='A'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

        case 9:
		printf("\n\n\nWhich of the following return-type cannot be used for a function in C?");
		printf("\n\na) char *\nb) struct\nc) void\nd) none of the mentioned\n");
		ans=toupper(getch());
		if (ans=='D'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }

        case 10:
		printf("\n\n\nWhat are the elements present in the array of the following C code?\n\t\tint array[5] = {5};");
		printf("\n\na) 5, 5, 5, 5, 5\nb) 5, 0, 0, 0, 0\nc) 5, (garbage), (garbage), (garbage), (garbage)\nd) (garbage), (garbage), (garbage), (garbage), 5\n");
		ans=toupper(getch());
		if (ans=='B'){
			printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 }
			 else if(ans!='A'&&ans!='B'&&ans!='C'&&ans!='D'){
                printf("\nyou chose to skip\n");
                getch();
                break;
			 }
		else
		       {
		           printf("\n\nWrong!!!");
		           getch();
		       count=count-2;
		       break;
		       }
        }
    }
    score=count;
    return count;
}