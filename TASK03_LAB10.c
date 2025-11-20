#include <stdio.h>
#include <string.h>

int main() {

    char str[100];
    int i, vowel = 0, cons = 0, digit = 0, space = 0;

    char vowels[] = "aeiouAEIOU";
    char digits[] = "0123456789";

    printf("Enter text: ");
    scanf(" %[^\n]", str);

    for(i = 0; str[i] != '\0'; i++){


        if(strchr(vowels, str[i]) != NULL){
            vowel++;
        }

        else if(strchr(digits, str[i]) != NULL){
            digit++;
        }

        else if(str[i] == ' '){
            space++;
        }

        else if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
            cons++;
        }
    }

    printf("\n\nStatistics: \n");
    printf("\nVowels: %d", vowel);
    printf("\nConsonants: %d", cons);
    printf("\nDigits: %d", digit);
    printf("\nSpaces: %d", space);
    printf("\n\nTotal Characters: %lu", strlen(str));

    return 0;
}

