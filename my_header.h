#ifndef MY_HEADER_H
#define MY_HEADER_H

typedef struct{
   int id;
   char sub[50];
   char quest[150];
   char options[4][20];
   int corr_option;
}mcq;
 
typedef struct{
   int id;
   int res_opt;
}result;

void view_mcqs_of_given_subject();
void delete_mcq();
void view_all_mcqs();
void add_mcq();
void edit_mcq();
void mcq_exam_menu();
void answer_review();
void quiz(char *sub, int count);
#endif
