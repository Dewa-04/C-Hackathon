#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"


void delete_mcq(){
	int id;
	printf("Enter the Id to delete: ");
	scanf("%d", &id);
	int flag = 0;
	mcq val;
	FILE * fp = fopen("mcqs.db", "rb+");
	FILE * fp1 = fopen("temp.db", "ap");
	while((fread(&val, sizeof(mcq), 1, fp) == 1)){
		if(val.id != id){
			fwrite(&val, sizeof(mcq), 1, fp1);
			 
		}
		else
			flag++;	
	}
	if(flag == 1)
		printf("Id deleted\n");
	else
		printf("Id not found\n");


	remove("mcqs.db");
	rename("temp.db", "mcqs.db");
	fclose(fp);
	fclose(fp1);
}


