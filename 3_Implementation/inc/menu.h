/**
 * @brief header file that declare the functions used in the program
 * 
 */
#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void home();
int quizC();
int quizCpp();
int quizJava();
void help();
char ans;
int score,count,countp,countj;
void edit_score(float score, char plnm[20]);
void show_record();
void game();

#endif // MENU_H_INCLUDED