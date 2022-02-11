/**
 * @file file.c
 * @author aadhavan (aadhav.1202@gmail.com)
 * @brief this file is used to store and show the scores of the players
 * @version 0.1
 * @date 2022-02-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include "menu.h"

void reset_score()
    {
    //system("clear");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);
    }

void show_record()
    {
    //system("clear");
	char name[20];
	float scr;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&scr);
	printf("\n\n\t\t %s has secured the Highest Score %0.2f",name,scr);;
	fclose(f);
	getch();
	}

void edit_score(float score, char plnm[20])
	{
    //system("clear");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  {
	    sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);
	    }
}
