#include <stdio.h>
#include<string.h>
int main()
{
    int n,j,i,k;
    scanf("%d",&n);
    char play[50];
    for(i=0;i<n;i++)
    {
        int w[4]={1,0,0,0},p,h;
        scanf(" %s",play);
        k=strlen(play);
        for(j=0;j<k;j++)
        {
            if(play[j]=='A')
            {
                p = w[1];
                w[1] = w[2];
                w[2] = p;
            }
            else if(play[j]=='B')
            {
                p = w[0];
                w[0] = w[3];
                w[3] = p;
            }
            else if(play[j]=='C')
            {
                p = w[0];
                w[0] = w[2];
                w[2] = p;
                p = w[1];
                w[1] = w[3];
                w[3] = p;
            }
            else if(play[j]=='D')
            {
                p = w[0];
                w[0] = w[1];
                w[1] = p;
                p = w[2];
                w[2] = w[3];
                w[3] = p;
            }
            else if(play[j]=='E')
            {
                p = w[0];
                w[0] = w[3];
                w[3] = p;
                p = w[1];
                w[1] = w[2];
                w[2] = p;
            }
            for(j=0;j<4;j++)
            {
                if(w[j]==1)
                {
                    printf("%d\n",j+1);
                }
            }
        }
    }
}
