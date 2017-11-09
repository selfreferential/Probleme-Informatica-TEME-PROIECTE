#include <stdio.h>
int main()
{int v[50],n,i;
do
{printf("n=");
 scanf("%d",&n);
}while(n<1 || n>50);
for(i=0;i<n;i++)
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
    }
n++;
for(i=n;i>0;i--)
   v[i]=v[i-1];
v[0]=0;
for(i=0;i<n;i++)
    printf("%d ",v[i]);
return 0;
}
