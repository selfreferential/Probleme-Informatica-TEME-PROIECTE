#include <stdio.h>
int main()
{int v[50],n,i,k,j,z,m;
printf("n=");
scanf("%d",&n);
printf("k=");
scanf("%d",&k);
printf("v[0]=");
scanf("%d",&v[0]);
for(i=1;i<n;i++)
    do
     {printf("v[%d]=",i);
      scanf("%d",&v[i]);
     }while(v[i]<v[i-1]);
m=n;
if(k<=v[0])
     {m++;
      for(j=m;j>0;j--)
         v[j]=v[j-1];
      v[0]=k;
      goto mark1;
     }
else
   if(k>=v[m-1])
        {m++;
         v[m-1]=k;
         goto mark2;
        }

for(i=0;i<n-1;i++)
    {if(v[i]<=k && v[i+1]>=k)
        {m++;z=i+1;
         for(j=m;j>i+1;j--)
               v[j]=v[j-1];
          break;
         }
      }
v[z]=k;
mark1:
mark2:
for(i=0;i<m;i++)
     printf("%d ",v[i]);


return 0;
}
