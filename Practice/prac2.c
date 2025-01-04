#include <stdio.h>
int main(){
    char *c1, *c2, c;
    printf("Enter the first string: ");
    scanf("%[^\n]", c1);
    getchar();
    printf("Enter the second string: ");
    scanf("%[^\n]", c2);
    printf("The concatenated string is: ");
    while(*c1 != '\0'){
        printf("%c", *c1);
        c1++;
    }
    while(*c2 != '\0'){
        printf("%c", *c2);
        c2++;
    }
}