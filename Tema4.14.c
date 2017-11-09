#include <stdio.h>
int main()
{int v[100],i,n,k,j,q=0;
printf("n=");
scanf("%d",&n);
printf("k=");
scanf("%d",&k);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
    if(v[i]==k)
        q++;
   }
for(i=0;i<n;i++)
    if(v[i]==k)
       {for(j=i;j<n-1;j++)
          v[j]=v[j+1];
        v[n-1]=k;
       }
if(q>1)
   for(i=0;i<n;i++)
    if(v[i]==k)
       {for(j=i;j<n-1;j++)
          v[j]=v[j+1];
        v[n-1]=k;
        break;
       }


for(i=0;i<n;i++)
     printf("%d ",v[i]);


return 0;
}
