#include <stdio.h>
int main()
{int v[100],i,n,max,aux,k,j;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
   }
max=v[0];
k=0;
for(i=1;i<n;i++)
   if(v[i]>max)
      {max=v[i];
       k=i;
      }
aux=v[k];
v[k]=v[n-1];
v[n-1]=aux;
for(j=0;j<n;j++)
   printf("%d ",v[j]);

return 0;
}
