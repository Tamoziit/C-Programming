#include <stdio.h>
#include <stdlib.h>
int main(){
    char *c1, c2, c3;
    c1=malloc(1000*sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]", c1);
    getchar();
    printf("Enter the character to be changed : ");
    scanf("%c", &c2);
    getchar();
    printf("Enter the character to be replaced with : ");
    scanf("%c", &c3);
    char *c4 = c1;
    while(*c1 != '\0'){
        if(*c1 == c2){
            *c1 = c3;
        }
        c1++;
    }
    printf("The modified string is: %s\n", c4);
    free(c1);
    return 0;
}