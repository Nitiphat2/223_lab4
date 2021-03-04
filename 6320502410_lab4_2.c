#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,l,a=0;
    scanf("%d",&n);
    char num[n],s[n];
    int m[n];
    for(i=0;i<n;i++)
    {
        m[a]=0;
        scanf(" %s",&num);
        j=strlen(num);
        if(j==1)
        {
            if(strcmp(num,"+"))
            {
                m[a-2]=m[a-2]+m[a-1];
                a--;
            }
            else if(strcmp(num,"-"))
            {
                m[a-2]=m[a-2]-m[a-1];
                a--;
            }
            else if(strcmp(num,"*"))
            {
                m[a-2]=m[a-2]*m[a-1];
                a--;
            }
            else
            {
                m[a]=m[a]+((int)num[0]-48);
                a++;
            }
        }
        else
        {
            for(l=0;l<j;l++)
            {
                m[a] = m[a]+(((int)num[l] - 48) * pow(10,j-l));
            }
            a++;
        }
    }
    printf("%d",m[a-1]);
}
