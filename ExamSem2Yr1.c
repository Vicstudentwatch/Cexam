#include <stdio.h>

int main(){
	
	int i, marksGot[7];
	char grade , grades;
	
	for(i=0;i<7;i++){
		printf("Please input marks subject(%d): ",i);
		scanf("%d",&marksGot[i]);
	}
	
	printf("\n");
	
	void displayGrade(grades){
		printf("Grade for subject is %c \n",grades);
	};
	
	for(i=0;i<7;i++){
		if(marksGot[i]<100 && marksGot[i]>80){
			grade = 'A';
			
		}else if(marksGot[i] <= 80 && marksGot[i] > 70){
			grade = 'B';
			
		}else if(marksGot[i] <= 70 && marksGot[i] > 60){
			grade = 'C';
			
		}else if(marksGot[i] <= 60 && marksGot[i] >= 50){
			grade = 'D';
			
		}else if(marksGot[i] < 50 && marksGot[i] > 0){
			grade = 'E';
			
		}else {
			printf("An Error Occured\n");
		}
		displayGrade(grade);
		
//		printf("Grade for subject(%d) is %c \n",i,grade);
		//printf("Marks for subject(%d) is %d \n",i,marksGot[i]);
	}
	
	return 0;
}
