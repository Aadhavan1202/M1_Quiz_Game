/**
 * @brief header file that declare the functions used in the program
 * 
 */
#define MENU_H_INCLUDED

void home();
int quizc();
int quizCpp();
int quizJava();
void help();
char ans;
int score,count,countp,countj;
void edit_score(float score, char plnm[20]);
void show_record();
void reset_score();

#endif // MENU_H_INCLUDED