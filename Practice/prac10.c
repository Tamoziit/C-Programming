#include<stdio.h>
#include<stdlib.h>
int findcap(int i,char *s){
    if(*(s+i)>='A' && *(s+i)<='Z')
        return i;
    if(*(s+i)==NULL)
        return -1;
    i++;
    findcap(i,s);
    
}
int main(){
    char *str;
    str = malloc(sizeof(char)*100);
    printf("Enter a string : ");
    scanf("%[^\n]",str);
    printf("%d is the index of the Capital Letter",findcap(0,str));
    free(str);
    return 0;
}