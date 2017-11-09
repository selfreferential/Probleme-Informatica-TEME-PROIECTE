#include <stdio.h>
int main()
{int v[100],n,i,s=0,s1=0;
printf("n=");
scanf("%d",&n);
for(i=0;i<n-1;i++)
    do
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
    }while(v[i]<0 || v[i]>n);
for(i=1;i<=n;i++)
    s=s+i;
for(i=0;i<n-1;i++)
   s1=s1+v[i];
printf("%d",s-s1);
return 0;
}
