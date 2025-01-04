#include<stdio.h>

int main(int argc, char* argv[]){
    FILE *fp1,*fp2; char c;
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");
    while((c=fgetc(fp1))!=EOF){
        if(c>='a' && c<='z')
            fputc(c-32,fp2);
        else
            fputc(c,fp2);
        
    }
    fclose(fp1);
    fclose(fp2);
}