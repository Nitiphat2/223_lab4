#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char name[4][50];
    int i=0,j=0,l=0,k[4];
    for(i=0; i<4; i++)
    {
        scanf("%s",name[i]);
        k[i]=strlen(name[i]);
        for(j=0; j<k[i]; j++)
        {
            name[i][j]=tolower(name[i][j]);
        }
    }
    int less=k[0],max=k[0];
    for(i=0; i<4; i++)
    {
        if(less > k[i])
        {
            less = k[i];
        }
        if(max < k[i])
        {
            max = k[i];
        }
    }
    char nam[3][50];
    int e,b=1,a=0,z=0;
    for(i=0; i<4; i++)
    {
        if(less != k[i])
        {
            strcpy(nam[i],name[i]);
        }
    }
    for(i=0; i<max;)
    {
        if(nam[0][i]==nam[1][j]==nam[2][l])
        {
            if(b!=0)
            {

            }
        }
        else if(nam[0][i]==nam[1][j])
        {
            b++;
            l++;
        }
        else if(nam[0][i]==nam[2][l])
        {
            b++;
            i++;
        }
        else if(nam[2][l]==nam[1][j])
        {
            b=0;
            j++;
        }
        else
        {

            b=0;
            l++;
            j++;
            i++;
        }
    }

}
