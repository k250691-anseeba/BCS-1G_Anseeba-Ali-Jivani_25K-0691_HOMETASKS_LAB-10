#include <stdio.h>

int main(){
	
	char name[5][10];
	int marks[5];
	int i, sum=0;
	int max=0, max_index;
	float avg;
	
	for(i=0 ; i<5 ; i++){
	    printf("Enter name  for Student %d:  ", i+1);
		scanf(" %s", name[i]);
		printf("Enter marks for Student %d:  ", i+1);
		scanf("%d", &marks[i]);
		sum = sum + marks[i];
		if(marks[i] > max){
			max = marks[i];
			max_index = i;
		}
    }
	
	avg = sum/5;
	
	
	printf("\n\n\nStudent Marks: \n\n\n");
	printf("  Name \t\t\t Marks");
	printf("\n-----------------------------------\n");
	for(i=0 ; i<5 ; i++){
	    printf("  %-10s            %4d\n", name[i], marks[i]); 
    }
    printf("\n\nHighest Score: %s with %d marks", name[max_index], max);
    printf("\nAverage Marks: %.2f\n\n", avg);



	return 0;
}
