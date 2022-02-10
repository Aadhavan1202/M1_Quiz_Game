/**
 * @file quizJava.c
 * @author aadhavan (aadhav.1202@gmail.com)
 * @brief this is the java programming mcq page
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "menu.h"


int quizJava()
{
    countj=0;
    for(int i=0;i<10;i++){
        system("cls");
         switch(i)
		{
		case 1:
		printf("\n\nWhich one of the following is not a Java feature?");
		printf("\n\na) Object-oriented\nb) Use of pointers\nc) Portable\nd) Dynamic and Extensible\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }

		case 2:
		printf("\n\n\n Which of these cannot be used for a variable name in Java?");
		printf("\n\na) identifier & keyword\nb) identifier\nc) keyword\nd) none of the mentioned\n");
		ans=toupper(getch());
		if (ans=='C')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
        case 3:
		printf("\n\n\nWhat is the extension of java code files?");
		printf("\n\na) .js\nb) .txt\nc) .class\nd) .java\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
        case 4:
		printf("\n\n\nWhich environment variable is used to set the java path?");
		printf("\n\naa) MAVEN_Path\nb) JavaPATH\nc) JAVA\nd) JAVA_HOME\n");
		ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
        case 5:
		printf("\n\n\n Which of the following is not an OOPS concept in Java?");
		printf("\n\na) Polymorphism\nb) Inheritance\nc) Compilation\nd) Encapsulation\n");
		ans=toupper(getch());
		if (ans=='C')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
		case 6:
		printf("\n\n\nWhat is not the use of “this” keyword in Java?");
		printf("\n\na) Referring to the instance variable when a local variable has the same name\nb) Passing itself to the method of the same class\nc) Passing itself to another method\nd) Calling another constructor in constructor chaining\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
        case 7:
		printf("\n\n\n What will be the error in the following Java code?\n\tbyte b = 50;\n\tb = b * 50;");
		printf("\n\na) b cannot contain value 50\nb) b cannot contain value 100, limited by its range\nc) No error in this code\nd) * operator has converted b * 50 into int, which can not be converted to byte without casting\n");
		ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }

        case 8:
		printf("\n\n\n Which of the following is a type of polymorphism in Java Programming?");
		printf("\n\na) Multiple polymorphism\nb) Compile time polymorphism\nc) Multilevel polymorphism\nd) Execution time polymorphism\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }

        case 9:
		printf("\n\n\nWhich exception is thrown when java is out of memory?");
		printf("\n\na) MemoryError\nb) OutOfMemoryError\nc) MemoryOutOfBoundsException\nd) MemoryFullException\n");
		ans=toupper(getch());
		if (ans=='B')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }

        case 10:
		printf("\n\n\nWhich of these are selection statements in Java?");
		printf("\n\na) break\nb) continue\nc) for()\nd) if()\n");
		ans=toupper(getch());
		if (ans=='D')
			{
			    printf("\n\nCorrect!!!");
			countj=countj+4;
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
		       countj=countj-2;
		       break;
		       }
        }
    }
        score=countj;
    return countj;
}