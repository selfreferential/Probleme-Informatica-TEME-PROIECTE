#include <stdio.h>
int main()
{int v[100],a[100],b[100],x,i,n,k=0,z=0,min,max,w,q;
printf("n=");
scanf("%d",&n);
printf("x=");
scanf("%d",&x);
for(i=0;i<n;i++)
     {printf("v[%d]=",i);
      scanf("%d",&v[i]);
     }
for(i=0;i<n;i++)
    {if(v[i]==x)
         {printf("%d",i);
          goto finish;
         }
     if(v[i]<x)
         {a[k]=v[i];
          k++;
         }
     else
         {b[z]=v[i];
         z++;
         }

    }
max=a[0];
min=b[0];
for(i=0;i<k;i++)
   if(a[i]>max)
      {max=a[i];
       w=i;
      }
for(i=0;i<z;i++)
   if(b[i]<min)
      {min=b[i];
       q=i;
      }
if(x-max<min-x)
   printf("%d",w);
else
   printf("%d",q);
finish:
return 0;
}
