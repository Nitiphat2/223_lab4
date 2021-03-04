#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],c[n],sum[n];
    int i,j,k;
    for(i=0;i<n;i++)
    {
        scanf("%d%d%d",&a[i],&b[i],&c[i]);
    }
    for(i=0;i<n;i++)
    {
        sum[i]=(a[i]*4)+(b[i]*2)+(c[i]*1);
    }
    int m[n-2];
    for(i=0;i<n-2;i++)
    {
        m[i]=sum[i]+sum[i+1]+sum[i+2];
    }
    int max=m[0],less=m[0];
    for(i=0;i<n-2;i++)
    {
        if(max < m[i])
        {
            max = m[i];
            j=i+1;
        }
        if(less > m[i])
        {
            less = m[i];
            k=i+1;
        }
    }
    printf("%d %d",j,k);
}
