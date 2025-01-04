#include <stdio.h>
#include <stdlib.h>
int main(){
    char *c1 = malloc(1000*sizeof(char));
    printf("Enter the string: ");
    scanf("%[^\n]", c1);
    getchar();
    int up = 0,low = 0;
    while (*c1 != '\0'){
    
        if(*c1 >= 'A' && *c1 <= 'Z'){
            up++;
        }
        else if(*c1 >= 'a' && *c1 <= 'z'){
            low++;
        }
        c1++;
    }
    printf("The number of uppercase characters in the string is: %d\n", up);
    printf("The number of lowercase characters in the string is: %d\n", low);
    return 0;
}