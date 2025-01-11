#include <stdio.h>
#include <stdlib.h>
int main(){
    char *c1 = malloc(1000*sizeof(char));
    char *c2 = malloc(1000*sizeof(char));
    int seq = 0;
    scanf("%[^\n]", c1);
    getchar();
    scanf("%[^\n]", c2);
    while(*c1 != '\0'){
        if(*c1 == *c2){
            seq++;
            c2++;
        }
        c1++;
    }
    printf("%d\n", seq);
    free(c1);
    free(c2);
    return 0;

}
