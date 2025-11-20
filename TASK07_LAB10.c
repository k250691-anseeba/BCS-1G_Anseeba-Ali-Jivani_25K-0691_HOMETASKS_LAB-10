#include<stdio.h>
#include <string.h>

int main(){

    char name[4][10];
    char course[4][5][20];
    int i,j, count[20];
    char search[20];
    int found = 0;
    int overload = 0;

    
        
    for(i=0 ; i<4 ; i++){
        printf("\nEnter name for Student %d: ", i+1);
        scanf(" %s", name[i]);
	    printf("%s, enter the number of course you want to register:  ", name[i]);
	    scanf("%d", &count[i]);
	    for(j=0 ; j<count[i] ; j++){
	    	printf("Enter course name no.%d: ", j+1);
	    	scanf("%s", course[i][j]);
	    }
    }

    printf("\n\n  Student Name       No. of Registered Courses        Course Names\n");
    printf("--------------------------------------------------------------------------\n");

    for(i = 0; i < 4; i++){
        printf("%-15s     %-5d                        ", name[i], count[i]);

        for(j = 0; j < count[i]; j++){
            printf("%s ", course[i][j]);
        }
        printf("\n");
    }
    
    //search
    printf("\nEnter course name to search (e.g., Physics): ");
    scanf("%s", search);

    printf("\nStudents taking %s:\n", search);

    for(i = 0; i < 4; i++){
        for(j = 0; j < count[i]; j++){
            if(strcmp(course[i][j], search) == 0){
                printf("%s\n", name[i]);
                found = 1;
                break;
            }
        }
    }

    if(!found){
        printf("No student registered for %s.\n", search);
    }

    //overload
    printf("\nOverloaded students (more than 3 courses):\n");

    for(i = 0; i < 4; i++){
        if(count[i] > 3){
            printf("%s\n", name[i]);
            overload = 1;
        }
    }

    if(!overload){
        printf("No students are overloaded.\n");
    }

    return 0;
}


