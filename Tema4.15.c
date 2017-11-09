#include <stdio.h>
int main()
{int v[100],n,i,j,q=0;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
     if(v[i]==0)
        q++;
    }
for(i=0;i<n;i++)
   if(v[i]==0)
     {for(j=i;j<n-1;j++)
        v[j]=v[j+1];
      n--;
     }
if(q>1)
   for(i=0;i<n;i++)
   if(v[i]==0)
     {for(j=i;j<n-1;j++)
        v[j]=v[j+1];
      n--;
      break;
     }
for(i=0;i<n;i++)
   printf("%d ",v[i]);
return 0;
}
