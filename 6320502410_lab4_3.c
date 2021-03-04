#include<stdio.h>
#include<string.h>
int main()
{
    char name[200];
    gets(name);
    int i,j=0,k;
    i=strlen(name);
    while(j<i)
    {
        if(name[j-1]!=name[j])
        {
            printf("%c",name[j]);
        }
        j++;
    }
}
