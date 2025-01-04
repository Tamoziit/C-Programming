#include <stdio.h>
#include <stdlib.h>
int main(){
    char *s,tmp;
    s=malloc(sizeof(char)*100);
    printf("Enter the string to be sorted : \n");
    scanf("%s",s);
    char *sz = s;
    int i,j,k,size=0;
    while(*sz!='\0'){
        size++;
        *sz++;
    }
    for(i=0;i<size/2-1;i++){
        for(j=0;j<size/2-i;j++){
            if(*(s+j)>*(s+j+1)){
                tmp = *(s+j);
                *(s+j) = *(s+j+1);
                *(s+j+1) = tmp;
            }
        }
    }
    for(i=size/2+1;i<size-1;i++){
        for(j=size/2+1,k=0;j<size-k;j++,k++){
            if(*(s+j)<*(s+j+1)){
                tmp = *(s+j+1);
                *(s+j+1) = *(s+j);
                *(s+j) = tmp;
            }
        }
    }
    printf("The sorted string is : %s",s);
}