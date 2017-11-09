#include <stdio.h>
int main ()
{int n,v[50],max,i;
do{
printf("n=");
scanf("%d",&n);
}while(n<1 || n>50);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
   }
max=v[0];
for(i=0;i<n;i++)
    if(v[i]>max)
       max=v[i];
printf("Valoarea maxima din vector este %d",max);
return 0;
}
