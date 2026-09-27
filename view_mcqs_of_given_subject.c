#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"

 

void view_mcqs_of_given_subject(){
	int ch;
	mcq val;
	FILE * fp = fopen("mcqs.db", "rb");
	int flag = 0;
	
	do{
		printf("\n");
		printf("Subjects\n");
		printf("1. Aptitude\n");
		printf("2. C++\n");
		printf("3. Embedded C\n");
		printf("4. IoT\n");
		printf("5. Microcontroller\n");
		printf("6. Data Structure\n");
		printf("7. Operating Systems\n");
		printf("8. RTOS\n");
		printf("9. Device Drivers\n");
		printf("10. Exit\n");
		printf("\n");
		printf("Enter the Subject no to see it's MCQS: ");
		scanf("%d", &ch);
				
		switch(ch){
			case 1:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Aptitude") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
			            
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 2:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "C++") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 3:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Embedded C") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 4:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "IoT") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 5:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Microcontrollers") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 6:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Data Structures") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 7:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Operating Systems") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 8:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "RTOS") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
			case 9:
			      while(fread( &val, sizeof(mcq), 1, fp) == 1){
			            if(strcmp(val.sub, "Device Drivers") == 0){
			              printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		                      printf("Q: %s\n", val.sub);
		                      printf("1.%s\n", val.options[0]);
		                      printf("2.%s\n", val.options[1]);
		                      printf("3.%s\n", val.options[2]);
		                      printf("4.%s\n", val.options[3]);
		                      printf("Correct Answer: %d\n", val.corr_option );
		                      printf("\n");
		                      flag++;
			            }
	      
			        }
			        if(flag == 0){
			          printf("No Mcqs are available for given subject\n");
			          flag = 0;
			        }
				break;
				
			case 10:
				printf("Exit\n");
				break;
			}
		}while(ch != 10 );
	
 
}


