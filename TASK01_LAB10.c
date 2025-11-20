#include <stdio.h>
#include <string.h>

int main(){
	
	char str[20];
	int i, uppercase = 0, num = 0, specialchar = 0, length = 0;
	
do{	
   
	printf("\nEnter password: ");
	scanf(" %[^\n]", str);
	
	
	length = strlen(str);
	if(length<8){
		printf("Password must be atleast 8 characters long.\n");
	}

	for(i=0 ; str[i]!='\0' ; i++){
		if(str[i] >= 'A' && str[i]<= 'Z'){
			uppercase = 1;
		}
		
    if (strchr("0123456789", str[i]) != NULL){
        num = 1;
    }

    if (strchr("@!#$%", str[i]) != NULL){
        specialchar = 1;
    }
}


	if(!(uppercase)){
		printf("Password must contain atleast one uppercase letter.\n");
	}
	if(!(num)){
		printf("Password must contain at least one digit.\n");
	}
	if(!(specialchar)){
		printf("Password must contain at least one special character (!, @, #, $, %c).\n", 37);
	}
}while(!(length>8 && uppercase && num && specialchar));
	
	if(length>8 && uppercase && num && specialchar){
		printf("\n\nPassword changed successfully!\n\n");
	}
	
	return 0;
}

