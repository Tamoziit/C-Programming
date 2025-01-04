#include <stdio.h>

struct marks{
	int rollno;
    char student[50];
    int phy;
    int math;
    int chem;
};
struct result{
	int rollno;
    char student[50];
    int phy;
    int math;
    int chem;
    int resu;
};

int main(){
    struct marks mark[50];
    struct result res[50];
    FILE* fptr1;
    FILE* fptr2;
    char c;
    fptr1=fopen("info.txt","w");
    fptr2=fopen("result.txt","w");
    if (fptr1==NULL || fptr2==NULL){
        printf("Error1\n");
        return 1;
    }
    int n,i,j,r;
    printf("Enter no of students: ");
    scanf("%d",&n);

    for (i=0;i<n;i++){
    	printf("Enter roll no: ");
    	scanf("%d",&mark[i].rollno);
        printf("Enter name: ");
        scanf("%s",mark[i].student);
        printf("Physics: ");
        scanf("%d",&mark[i].phy);
        printf("Math: ");
        scanf("%d",&mark[i].math);
        printf("Chemistry: ");
        scanf("%d",&mark[i].chem);
        fprintf(fptr1, "%d %s %d %d %d\n", mark[i].rollno,mark[i].student, mark[i].phy, mark[i].math, mark[i].chem);
    }
    fclose(fptr1);
	fptr1=fopen("info.txt","r");
    
    for(i=0;i<n;i++){
        fscanf(fptr1, "%d %s %d %d %d", &res[i].rollno, res[i].student, &res[i].phy, &res[i].math, &res[i].chem);
        res[i].resu = res[i].phy+res[i].chem+res[i].math;
        fprintf(fptr2,"Roll no: %d\nName:%s\nMarks in\nPhysics:%d\nMath:%d\nChemistry:%d\nTotal marks:%d\n",res[i].rollno,res[i].student,res[i].phy,res[i].math,res[i].chem,res[i].resu);
    }

    fclose(fptr1);
    fclose(fptr2);
    return 0;
}