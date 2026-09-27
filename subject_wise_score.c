#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"


void subject_wise_score(){
	result val;
	typedef struct{
		int apt = 0;
		int cpp = 0;
		int embc = 0;
		int iot = 0;
		int mc = 0;
		int ds = 0;
		int os = 0;
		int rtos = 0;
		int dd = 0;
		
	}cnt;
	cnt count;
	FILE * fp = fopen("result.db", "rb");
	while(fread( &val, sizeof(result), 1, fp) == 1){
		if((strcmp(val.sub, "Aptitude") == 0)){
			count.apt++;	
		} 
		else if((strcmp(val.sub, "C++") == 0)){
			count.cpp++;	
		} 
		else if((strcmp(val.sub, "Embedded C") == 0)){
			count.embc++;	
		} 
		else if((strcmp(val.sub, "IoT") == 0)){
			count.iot++;	
		} 
		else if((strcmp(val.sub, "Microcontroller") == 0)){
			count.mc++;	
		} 
		else if((strcmp(val.sub, "Data Structure") == 0)){
			count.ds++;	
		} 
		else if((strcmp(val.sub, "Operating Systems") == 0)){
			count.os++;	
		} 
		else if((strcmp(val.sub, "RTOS") == 0)){
			count.rtos++;	
		} 
		else if((strcmp(val.sub, "Device Drivers") == 0)){
			count.dd++;	
		} 
	}
	fclose(fp);
	

	printf("============================================\n");
	printf("SUBJECT-WISE SCORE ANALYSIS\n");
	printf("=============================================\n");
	printf("Subject		Attempts	Average%  \n");
	printf("----------------------------------------------------\n");	

	FILE * fp = fopen("result.db", "rb");
	while(fread( &val, sizeof(result), 1, fp) == 1){
		if((strcmp(val.sub, "Aptitude") == 0)){
		  printf("Aptitude    %d        %f    ", count.apt, (count.apt/10 * 100) );
		}
	}

}


	
int main(){
	subject_wise_score();

}
