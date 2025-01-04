#include <stdio.h>
int main(){
    char text[100];
    int ch=0,w=0;
    printf("Enter a line of text: ");
    scanf("%[^\n]", text);
    for(ch=0;text[ch]!='\0';ch++);
    printf("Number of characters: %d\n",ch);
    for(ch=0;text[ch]!='\0';ch++){
        if(text[ch]==' '){
            w++;
        }
    }
    printf("Number of words: %d\n",w+1);
    
}