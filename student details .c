#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[20];
    char branch[20];
    float cgpa;
    
}st[10];
int main()
{
    int n; 
    printf("enter number of students:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter the student %d name,branch and cgpa\n",i+1);
        scanf("%s %s %f",st[i].name,st[i].branch,&st[i].cgpa);
    }

    printf("name\tbranch\tcgpa\n");
    for(int i=0;i<n;i++)
    {
        printf("%s\t%s\t%.2f\n",st[i].name,st[i].branch,st[i].cgpa);

    }


}



