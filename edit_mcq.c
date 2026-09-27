#include<stdio.h>
#include<string.h>
#include "my_header.h"

void edit_mcq(){
   mcq mcq1;
   int id,found = 0; 
   printf("Enter MCQ ID to Edit : ");
   scanf("%d",&id);
   FILE *fp = fopen("mcqs.db","rb+");
   
   if(fp==NULL){
       printf("Error In DB\n");
       return;
   }

   while(fread(&mcq1, sizeof(mcq),1,fp) != 0){
        if(mcq1.id == id){
	  found = 1;
	  char new_quest[150];
	  char new_options[4][50];
	  int new_corr_option;
	  int choice;

	  printf("Current Question : %s\n",mcq1.quest);
	  printf("New Question (Press Enter to keep) : ");
	  scanf(" %[^\n]s",new_quest);
	  if(strcmp(new_quest, "\n") == 0)
	     strcpy(mcq1.quest, mcq1.quest);
	  else 
	     strcpy(mcq1.quest, new_quest);

	  for(int i=0; i<4; i++){
	    printf("Option %d (press enter to keep) : ", i+1);
	    scanf(" %[^\n]s", new_options[i]);
	    if(strcmp(new_options[i], "\n") == 0)
	       strcpy(mcq1.options[i], mcq1.options[i]);
	    else 
	       strcpy(mcq1.options[i], new_options[i]);
          } 
	  printf("Correct Option [%d] (1-4, Enter to keep) : ", mcq1.corr_option);
	  scanf("%d",&new_corr_option);
	  if(new_corr_option == '\n')
	     mcq1.corr_option = mcq1.corr_option;
	  else 
	     mcq1.corr_option = new_corr_option;

      
	  printf("Current Subject : %s\n", mcq1.sub);
	  printf("0. Keep Current Subject\n1. Aptitude\n2. C++\n3. Embedded C\n4. IoT\n5. MicroControllers\n6. Data Structures\n7. Operating Systems\n8. RTOS\n9. Device Drivers\n");
	  printf("Select New Subject : ");
	  scanf("%d",&choice);
	  
	  switch(choice){
	    case 0 : strcpy(mcq1.sub, mcq1.sub);
	             break;
	    case 1 : strcpy(mcq1.sub, "Aptitude");
	             break;
	    case 2 : strcpy(mcq1.sub, "C++");
	             break;
	    case 3 : strcpy(mcq1.sub, "Embedded C");
	             break;
	    case 4 : strcpy(mcq1.sub, "IoT");
	             break;
	    case 5 : strcpy(mcq1.sub, "MicroControllers");
	             break;
	    case 6 : strcpy(mcq1.sub, "Data Structure");
	             break;
	    case 7 : strcpy(mcq1.sub, "Operating Systems");
	             break;
	    case 8 : strcpy(mcq1.sub, "RTOS");
	             break;
	    case 9 : strcpy(mcq1.sub, "Device Drivers");
	             break;
            default : printf("Invalid Choice\n");		     

	 }
	 fseek(fp,-1*sizeof(mcq),SEEK_CUR);
	 fwrite(&mcq1,sizeof(mcq),1,fp);
	 printf("\nMCQ Updated Successfully.\n");
	 break;
       }	 
    }
    if(!found)
      printf("ID Not Found\n");

   fclose(fp);
}
