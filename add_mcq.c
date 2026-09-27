#include<stdio.h>
#include "my_header.h"

void add_mcq(){
   mcq mcq1;
   
   FILE *fp = fopen("mcqs.db","ab");
   if(fp == NULL){
      printf("Error in Db\n");
      return;
   }
   printf("Enter MCQ ID : ");
   scanf("%d",&mcq1.id);
   printf("Enter MCQ Subject : ");
   scanf(" %[^\n]s",mcq1.sub);
   printf("Enter MCQ Question : ");
   scanf(" %[^\n]s",mcq1.quest);

   for(int i=0; i<4; i++){
     printf("Enter MCQ Option %d : \n", i+1);
     scanf(" %[^\n]s",mcq1.options[i]);
   }  

   printf("Enter MCQ's correct option number : ");
   scanf("%d",&mcq1.corr_option);

   fwrite(&mcq1,sizeof(mcq),1,fp);

   fclose(fp);
}
