#include <stdio.h>
#include <string.h>

int main(){
	
	
	char str[50];
	char *sign, *dot;
	
do{

	printf("Email Domain Extraction\n");
	printf("Enter email address: ");
	scanf(" %[^\n]", str);

    sign = strchr(str, '@');
    dot = strrchr(str, '.');

	if (sign == NULL || dot == NULL || dot < sign) {
        printf("\nINVALID EMAIL ADDRESS!\n\n");     
	}

    } while(sign == NULL || dot == NULL || dot < sign);
	

    printf("\n\nDomain: %s\n", sign + 1);


	
	return 0;
}
