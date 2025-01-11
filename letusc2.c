#include<stdio.h>
int main(int argc,char* argv[]){
    FILE *fp1,*fp2;char ch;
    fp1=fopen(argv[1], "a");
    fp2=fopen(argv[2], "r");
    while((ch = fgetc(fp2))!=EOF){
        fprintf(fp1,"%c",ch);
    }
    fclose(fp1);
    fclose(fp2);
}