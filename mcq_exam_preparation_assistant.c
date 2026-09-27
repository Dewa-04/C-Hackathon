#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"my_header.h"

void mcq_exam_menu(){
	int choise;
	do{
		printf("=====================================================\n" );
		printf("         MCQ EXAM PREPARATION ASSISTANT              \n" );
		printf("=====================================================\n" );
		printf("MCQs:     |		Quiz Attempted:		     \n" );
		printf("1. Manage MCQs\n2. Start Random Quiz\n3. View Quiz Score History\n4. Subject-wise Score Analysis\n5. Exit\n");
		printf("Enter your choice: \n");
		scanf("%d", &choise);
		switch(choise){
			case 1:
				manage_mcqs();
				break;
			case 2:
				start_random_quiz();
				break;
			case 3:
				//view_quiz_score_history();
				break;
			case 4:
				//subject_wise_score_analysis();
				break;
			case 5:
				printf("Good Byeeee\n");
				break;
			default:
				printf("Please Enter a valid choice\n");
				break;
		}		
	}while(choise != 5);
}

int main(){
	mcq_exam_menu();
}


