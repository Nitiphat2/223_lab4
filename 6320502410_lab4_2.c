#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int n,i,j,l,a=0,b;
    scanf("%d",&n);
    char num[n],s[n];
    int m[n];
    for(i=0; i<n; i++)
    {
        m[a]=0;
        scanf(" %s",num);
        j=strlen(num);
        if(!(strcmp(num,"+")))
        {
            m[a-2]=m[a-2]+m[a-1];
            a--;
        }
        else if(!(strcmp(num,"-")))
        {
            m[a-2]=m[a-2]-m[a-1];
            a--;
        }
        else if(!(strcmp(num,"*")))
        {
            m[a-2]=m[a-2]*m[a-1];
            a--;
        }
        else
        {
            for(l=0; l<j; l++)
            {
                b = j-l-1;
                switch(b)
                {
                    case 0 : m[a] = m[a]+(num[l] - 48); break;
                    case 1 : m[a] = m[a]+(num[l] - 48) * 10; break;
                    case 2 : m[a] = m[a]+(num[l] - 48) * 100; break;
                    case 3 : m[a] = m[a]+(num[l] - 48) * 1000; break;
                    case 4 : m[a] = m[a]+(num[l] - 48) * 10000; break;
                    case 5 : m[a] = m[a]+(num[l] - 48) * 100000; break;
                }
            }
            a++;
        }
    }
    printf("%d\n",m[0]);
}
