#include <stdio.h>
int main ()
{int n,v[50],i;
do{
printf("n=");
scanf("%d",&n);
}while(n<1 || n>100);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
   }
for(i=n-1;i>=0;i--)
    printf("%d ",v[i]);



return 0;
}
