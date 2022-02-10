/**
 * @file help.c
 * @author aadhavan (aadhav.1202@gmail.com)
 * @brief this is the instruction page for the quiz game
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "menu.h"

void help()
	{
    system("cls");
    printf("\n ......................... C program Quiz Game......................... ");
    printf("\n >> There are three options in the game");
    printf("\n >> You can choose to play C , c++ or in Java");
    printf("\n >> you will be asked total of 10 questions in each section");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> Correct answers will give you 4 points");
    printf("\n >> Wrong answer will decrease your points by 2");
    printf("\n >> Press anything else to skip the question\n\n");

	printf("\n\n*********************BEST OF LUCK*********************************");
	getch();

	home();

	}
