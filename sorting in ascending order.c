#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct str
{
    char s[5];
};
int main()
{
    int i,j;
    struct str *p;
    p=(struct str*)malloc(sizeof(struct str));
    scanf("%s",p->s);
    for(i=0;i<strlen(p->s)-1;i++)
    {
        for(j=i;j<strlen(p->s);j++)
        {
            if((p->s[i])>(p->s[j]))
            {
                int t=(p->s[i]);
                (p->s[i])=(p->s[j]);
                (p->s[j])=t;
            }
        }
        
    }
    for(i=0;i<strlen(p->s);i++)
    {
        printf("%c ",(p->s[i]));
    }
    
    return 0;
}
