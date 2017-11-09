#include <stdio.h>
int main ()
{int i,v[100],n,s=0,k=0,poz;
printf("n=");
scanf("%d",&n);
poz=3*k+1;
for(i=0;i<n;i++)
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
    }
for(i=0;i<n;i++)
    if(i==poz)
       {s=s+v[i];
        k++;
        poz=3*k+1;
       }
printf("%d",s);
return 0;
}
