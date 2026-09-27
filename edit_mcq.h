#ifndef EDIT_MCQ_H
#define EDIT_MCQ_H

typedef struct{
   int id;
   char sub[50];
   char quest[150];
   char options[4][20];
   int corr_option;
}mcq;

void edit_mcq();

#endif
