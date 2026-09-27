#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"


void answer_review(){
	printf("ANSWER REVIEW\n");
	printf("-------------------------------\n");
	result val;
	mcq val1;
	FILE * fp = fopen("result.db", "rb");
	FILE * fp1 = fopen("mcqs.db", "rb");
	while(fread( &val, sizeof(result), 1, fp) == 1){
		while(fread( &val1, sizeof(mcq), 1, fp1) == 1){
			if(val.id == val1.id){
				printf("%s\n", val1.quest);
				printf("Your answer : %d\n", val.res_opt);
				printf("Correct answer : %d\n", val1.corr_option);
				if(val.res_opt == val1.corr_option){
					printf("Result: Correct\n");
					printf("\n");
				}
				else
					printf("Result: Wrong\n");
					printf("\n");

			
			}
		
		}
		
	}
	
	fclose(fp);
	fclose(fp1);
	

}



