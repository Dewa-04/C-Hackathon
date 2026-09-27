#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"
void view_all_mcqs(){
	mcq val;
	FILE * fp = fopen("mcqs.db", "rb");
	printf("==============================================\n");
	printf("MCQ LIST\n");
	printf("==============================================\n");	
	while(fread( &val, sizeof(mcq), 1, fp) == 1){
		printf("ID: %d  |  Subject: %s\n", val.id, val.sub);
		printf("Q: %s\n", val.quest);
		printf("1.%s\n", val.options[0]);
		printf("2.%s\n", val.options[1]);
		printf("3.%s\n", val.options[2]);
		printf("4.%s\n", val.options[3]);
		printf("Correct Answer: %d\n", val.corr_option );
		printf("\n");
	}
	fclose(fp);
}


