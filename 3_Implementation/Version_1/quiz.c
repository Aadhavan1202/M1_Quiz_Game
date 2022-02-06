#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>


int main()
     {
     int countr,r,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("***********Welcome to the Game***********\n\n");
     printf("\n\t > Press S to start the game");
     //printf("\n\t > press H for help");
     printf("\n\t > press Q to quit\n\n\n");
     printf("Your choice :");
     choice=toupper(getch());

   /* if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else */if (choice=='Q')
	exit(1);
	else if(choice=='S')
    {
     system("cls");
         printf("Resister your name:");
     gets(playername);

    system("cls");

    printf("\n Welcome %s to C Program Quiz Game-- ",playername);
    printf("\n\n Here are some tips you might wanna know before playing:\n\n\n");

    printf("\n >> There are 2 rounds in this Quiz Game,QUALIFIER round,and CHALLENGER round\n");
    printf("\n >> In Qualifier round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. Answering 2 right answers will qualifies you to proceed further\n");
    printf("\n >> Real game starts with CHALLANGER ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be award you 4 points!\n");
    printf("\n >> You will be given 5 options and you have to press A, B ,C ,D or E for the");
    printf("\n    right option.\n");
    printf("\n >> you will be awarded with -2 points for every wrong answers!!\n");
    printf("\n >> choose option E to skip the question\n");
    printf("\n    No negative marking for choosing the skip option!\n");
    printf("\n >> You cannot quit once you start the game");

    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press S  to start the game!\n");
    printf("\n Press any other key to return to the main menu!\n");



    if (toupper(getch())=='S')
		{
		    goto Qualifiers;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     Qualifiers:
     system("cls");
     count=0;
     for(i=1;i<=3;i++)
     {
    system("cls");
     r1=i;
     switch(r1)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nThe country with the highest environmental performance index is...");
		printf("\n\nA.France\t\tB.Denmark\n\nC.Switzerland\t\tD.Finland");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.Switzerland");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nWhich animal laughs like human being?");
		printf("\n\nA.Polar Bear\t\tB.Hyena\n\nC.Donkey\t\tD.Chimpanzee");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Hyena");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nWho was awarded the youngest player award in Fifa World Cup 2006?");
		printf("\n\nA.Wayne Rooney\t\tB.Lucas Podolski\n\nC.Lionel Messi\t\tD.Christiano Ronaldo");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Lucas Podolski");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nWhich is the third highest mountain in the world?");
        printf("\n\nA.Mt. K2\t\tB.Mt. Kanchanjungha\n\nC.Mt. Makalu\t\tD.Mt. Kilimanjaro");
        if (toupper(getch())=='B')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is B.Mt. Kanchanjungha");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nWhat is the group of frogs known as?");
		printf("\n\nA.A traffic\t\tB.A toddler\n\nC.A police\t\tD.An Army");
		if (toupper(getch())=='D' )
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.An Army");
		       getch();
		       break;}}
		       }

	if(count>=2)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
	test:
	    system("cls");
	    printf("\n\n\Challenger Round coming soon\n\n");
    }
}
