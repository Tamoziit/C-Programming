#include <stdio.h>
int main(int argc, char* argv[]){
    FILE *fp1, *fp2;
    char ch;
    int i=1;
    if(argc!=3){
        printf("Usage: %s <read file> <write file>\n", argv[0]);
        return 1;
    }
    fp1 = fopen(argv[1], "r");
    if(fp1==NULL){
        printf("Cannot open file %s\n", argv[1]);
        return 1;
    }
    fp2 = fopen(argv[2], "w");
    if(fp2==NULL){
        printf("Cannot open file %s\n", argv[2]);
        return 1;
    }
    fprintf(fp2, "%d. ", i);
    while((ch=fgetc(fp1))!=EOF){
        fprintf(fp2, "%c", ch);
        if(ch=='\n'){
            i++;
            fprintf(fp2, "%d. ", i);
        }
    }
    fclose(fp1);
    fclose(fp2);
    return 0;
}