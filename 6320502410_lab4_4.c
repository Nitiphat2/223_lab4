#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char m[1000],n[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
    scanf("%[^\n]s",m);
    int i=0,j,k;
    char *o;
    o=strtok(m," ");
    while(o!=NULL)
    {
        for(j=0;j<11;j++)
        {
            if(strcmp(o,n[j]))
            {
                k=1;
            }
        }
        if(i==0||k!=1)
        {
            printf("%c",toupper(o[0]));
        }
        k=0;
        o=strtok(NULL," ");
        i++;
    }
}
