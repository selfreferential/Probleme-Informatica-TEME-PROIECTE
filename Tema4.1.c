#include <stdio.h>
int main ()
{int n,v[50],nul=0,i;
do{
printf("n=");
scanf("%d",&n);
}while(n<1 || n>50);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
    if(v[i]==0)
       nul++;
   }
printf("Sunt %d elemente nule in vectorul V",nul);
return 0;
}
