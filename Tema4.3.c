#include <stdio.h>
int main ()
{int n,v[50],min,i;
do{
printf("n=");
scanf("%d",&n);
}while(n<1 || n>50);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
   }
min=v[0];
for(i=0;i<n;i++)
    if(v[i]<min)
       min=v[i];
for(i=0;i<n;i++)
   if(v[i]==min)
      printf("%d ",i);

return 0;
}
