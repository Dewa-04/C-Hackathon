#include<stdio.h>
#include<string.h>
#include "my_header.h"

void quiz(char * sub, int no_of_qs){
   mcq mcq1;
   result result1;
   int count = 0;
   FILE *fp = fopen("mcqs.db","rb");
   FILE *fp2 = fopen("result.db","ab");
   if(fp == NULL){
      printf("Error in DB\n");
      return;
   }
   while(fread(&mcq1,sizeof(mcq),1,fp) == 1){
         if(strcmp(mcq1.sub, sub) == 0){

   printf("============================================================\n");
   printf("APTITUDE QUIZ\t\t Question %d of %d \n",++count,no_of_qs);
   printf("============================================================\n\n");
	     int user_ans;
	     printf("%s\n",mcq1.quest);
	     for(int i=0; i<4; i++){
	        printf("%d. %s\n",i+1,mcq1.options[i]);
             }		

	     printf("\nYour Answer (1-4) : ");
	     scanf("%d",&user_ans);
	     result1.id = mcq1.id;
	     result1.res_opt = user_ans;
     
	     fwrite(&result1, sizeof(result),1,fp2);
          }
   }
   fclose(fp2);
   fclose(fp);
}   
