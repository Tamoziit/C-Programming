#include <stdio.h>
#include <stdlib.h>
void strRev(char *s){
    char *sz = s, tmp;
    int size=0,i;
    while(*sz!='\0'){
        size++;
        sz++;
    }
    for(i=0; i<size/2;i++){
        tmp = s[i];
        s[i]=s[size-i-1];
        s[size-i-1]=tmp;
    }

    printf("%s",s);
}
int main(){
    char *st;
    printf("Enter the string :");
    scanf("%s",st);
    printf("Reversed string :");
    strRev(st);
}