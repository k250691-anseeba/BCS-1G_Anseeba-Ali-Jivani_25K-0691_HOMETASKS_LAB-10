#include <stdio.h>
#include <string.h>

void encrypt(char str[100], char encrypted[100]){
	int i;
	for(i=0; str[i]!='\0' ;i++){
	if(str[i] != ' '){
		encrypted[i] = str[i] + 3;
	}
	else{
		encrypted[i] = str[i];
	}
    }
    
    encrypted[strlen(str)+1] = '\0';
    printf("%s", encrypted);
}


void decrypt(char encrypted[100], char decrypted[100]){
	int i;
	for(i=0; encrypted[i]!='\0' ;i++){
	if(encrypted[i] != ' '){
		decrypted[i] = encrypted[i] - 3;
	}
	else{
		decrypted[i] = encrypted[i];
	}
    }
    decrypted[strlen(encrypted)+1] = '\0';
    printf("%s", decrypted);
}

int main(){
	
	int i;
	char str[100];
	char encrypted[100], decrypted[100];
	
	printf("Enter a message: ");
	scanf(" %[^\n]", str);
	
	printf("\n\nEncrypted Message:\n");
	encrypt(str, encrypted);
	printf("\n\nEncrypted Message:\n");
	decrypt(encrypted, decrypted);
	
	
	return 0;
}

