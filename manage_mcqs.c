#include<stdio.h>
#include "my_header.h"

void manage_mcqs(){
   int ch;
  do{
     printf("=============================================================================================\n");
     printf("MCQ MANAGEMENT\n");
     printf("=============================================================================================\n");
     printf("1. Add MCQ\n2. View Al MCQs\n3. Edit MCQ\n4. Delete MCQ\n5. View MCQs of Given Subject\n6. Back\n");
     printf("\nEnter Choice : ");
     scanf("%d",&ch);

     switch(ch){

      case 1 : add_mcq();
               break;
      case 2 : view_all_mcqs();
               break;
      case 3 : edit_mcq();
               break;
      case 4 : delete_mcq();
               break;
      case 5 : view_mcqs_of_given_subject();
               break;
      case 6 : printf("6\n");
               break;
      default : printf("Invalid Choice!!!\n");	       
     }
   }while(ch != 6);

}
  
