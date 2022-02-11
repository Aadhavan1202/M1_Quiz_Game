/**
 * @file quizCpp.c
 * @author aadhavan (yaadhav.1202@gmail.com)
 * @brief this is the c++ programming mcq page
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "menu.h"
#include <ctype.h>

int quizCpp()
{
   countp=0;
    for(int i=0;i<10;i++){
       // system("clear");
         switch(i)
		{
		case 1:
		printf("\n\nWhich of the following is the correct syntax of including a user defined header files in C++?");
		printf("\n\na) #include [userdefined]\nb) #include “userdefined”\nc) #include <userdefined.h>\nd) #include <userdefined>\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }

		case 2:
		printf("\n\n\n Which of the following user-defined header file extension used in c++?");
		printf("\n\na) hg\nb) cpp\nc) h\nd) hf\n");
		ans=toupper(getch());
		if (ans=='C')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }
        case 3:
		printf("\n\n\nWhich of the following is used for comments in C++?");
		printf("\n\na) /* comment */\nb) // comment */\nc) // comment\nd) both // comment or /* comment */\n");
		ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }

        case 4:
		printf("\n\n\nWhich of the following is a correct identifier in C++?");
		printf("\n\na) VAR_1234\nb) $var_name\nc) 7VARNAME\nd) 7var_name\n");
		ans=toupper(getch());
		if (ans=='A')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }

        case 5:
		printf("\n\n\n Which of the following is not a type of Constructor in C++?");
		printf("\n\na) Default constructor\nb) Parameterized constructor\nc) Copy constructor\nd) Friend constructor\n");
		ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }
		case 6:
		printf("\n\n\nWhat happens if the following C++ statement is compiled and executed?\n\tint *ptr = NULL;\n\tdelete ptr;");
		printf("\n\na) The program is not semantically correct\nb) The program is compiled and executed successfully\nc) The program gives a compile-time error\nd) The program compiled successfully but throws an error during run-time\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }

        case 7:
		printf("\n\n\n Which of the following type is provided by C++ but not C?");
		printf("\n\na) double\nb) float\nc) int\nd) bool\n");
				ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }
        case 8:
		printf("\n\n\nBy default, all the files in C++ are opened in _________ mode.");
		printf("\n\na) Binary\nb) VTC\nc) Text\nd) ISCII\n");
				ans=toupper(getch());
		if (ans=='C')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }

        case 9:
		printf("\n\n\nWhich of the following correctly declares an array in C++?");
		printf("\n\na) array{10};\nb) array array[10];\nc) int array;\nd) int array[10];");
				ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }
        case 10:
		printf("\n\n\nWhat is the size of wchar_t in C++?");
		printf("\n\na) Based on the number of bits in the system\nb) 2 or 4\nc) 4\nd) 2\n");
				ans=toupper(getch());
		if (ans=='A')
			{
			    printf("\n\nCorrect!!!");
			countp=countp+4;
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
		       countp=countp-2;
		       break;
		       }
        }
    }
        score=countp;
    return countp;
}