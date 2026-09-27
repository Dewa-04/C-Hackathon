#include<stdio.h>
#include "my_header.h"
#include<string.h>

void start_random_quiz(){
  int choice;
  mcq mcq1;
  int count = 0;

  do{
     printf("=========================================================================\n");
     printf("START RANDOM QUIZ\n");
     printf("=========================================================================\n\n");
     printf("Subjects \n1.Aptitude\n2. C++\n3. Embedded C\n4. IoT\n5. Microcontroller\n6. Data Structure\n7. Operating Systems\n8. RTOS\n9. Device Drivers\n\n");
     printf("Select Subject : ");
     scanf("%d",&choice);

     FILE *fp = fopen("mcqs.db","rb");
        if(fp == NULL)
           printf("Error inn DB\n");

     switch(choice){

       case 0 : printf("Exit\n");
                break;
       case 1 : 
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Aptitude") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 2 : 
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "C++") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 3 : 
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Embedded C") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 4 : 
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "IoT") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 5 : 
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Microcontroller") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 6 : 
                
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Data Structure") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 7 : 
           
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Operating Systems") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 8 : 
                
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "RTOS") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       case 9 :
             
                while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
		      if(strcmp(mcq1.sub, "Device Drivers") == 0)
		          count++;
                }
		printf("Available Questions : %d\n",count);
		printf("Number of Questions : %d\n",count);
		quiz(mcq1.sub,count);
		answer_review();
                count = 0;
		fclose(fp);         
                break;
       default : printf("Invalid choice\n");
    }
    }while(choice != 0);
}
