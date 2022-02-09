#include "menu.h"

int quizCpp()
{
   int count=0;
    for(int i=0;i<10;i++){
        system("cls");
         switch(i)
		{
		case 1:
		printf("\n\nWhich of the following is the correct syntax of including a user defined header files in C++?");
		printf("\n\n a) #include [userdefined]\nb) #include “userdefined”\nc) #include <userdefined.h>\nd) #include <userdefined>\n");
		if (toupper(getch())=='B')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\n Which of the following user-defined header file extension used in c++?");
		printf("\n\na) hg\nb) cpp\nc) h\nd) hf\n");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nWhich of the following is used for comments in C++?");
		printf("\n\na) /* comment */\nb) // comment */\nc) // comment\nd) both // comment or /* comment */\n");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nWhich of the following is a correct identifier in C++?");
		printf("\n\na) VAR_1234\nb) $var_name\nc) 7VARNAME\nd) 7var_name\n");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\n Which of the following is not a type of Constructor in C++?");
		printf("\n\na) Default constructor\nb) Parameterized constructor\nc) Copy constructor\nd) Friend constructor\n");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nWhat happens if the following C++ statement is compiled and executed?\n\tint *ptr = NULL;\n\tdelete ptr;");
		printf("\n\na) The program is not semantically correct\nb) The program is compiled and executed successfully\nc) The program gives a compile-time error\nd) The program compiled successfully but throws an error during run-time\n");
		if (toupper(getch())=='B' )
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\n Which of the following type is provided by C++ but not C?");
		printf("\n\na) double\nb) float\nc) int\nd) bool\n");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nBy default, all the files in C++ are opened in _________ mode.");
		printf("\n\na) Binary\nb) VTC\nc) Text\nd) ISCII\n");
		if (toupper(getch())=='C')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nWhich of the following correctly declares an array in C++?");
		printf("\n\na) array{10};\nb) array array[10];\nc) int array;\nd) int array[10];");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
		printf("\n\n\nWhat is the size of wchar_t in C++?");
		printf("\n\na) Based on the number of bits in the system\nb) 2 or 4\nc) 4\nd) 2\n");
		if (toupper(getch())=='A')
			{
			    printf("\n\nCorrect!!!");
			count=count+4;
			getch();
			 break;
			 getch();
			 }
			 else if(toupper(getch())!='A'||toupper(getch())!='B'||toupper(getch())!='C'||toupper(getch())!='D'){
                printf("you chose to skip\n");
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
    return count;
}