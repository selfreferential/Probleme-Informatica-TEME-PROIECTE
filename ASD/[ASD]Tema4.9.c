#include <stdio.h>
int main()
{int v[50],n,i,x;
do
{printf("n=");
 scanf("%d",&n);
}while(n<1 || n>50);
for(i=0;i<n;i++)
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
    }
printf("x=");
scanf("%d",&x);
for(i=0;i<n;i++)
   if(v[i]==x)
       {printf("Pozitia primei aparitii a lui X in vector este %d",i);
        break;
       }
return 0;
}
