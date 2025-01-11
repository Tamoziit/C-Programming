#include<stdio.h>
int main(int argc, char* argv[]){
    FILE *fp; int sz;
    fp = fopen(argv[1], "r");
    fseek(fp,0,SEEK_END);
    printf("The size of the file is : %d",ftell(fp));
}