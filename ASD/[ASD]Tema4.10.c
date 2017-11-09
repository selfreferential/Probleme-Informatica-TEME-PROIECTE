#include <stdio.h>
int main()
{int v[50],n,i,x,vF[32000]={0};
do
{printf("n=");
 scanf("%d",&n);
}while(n<1 || n>50);
printf("x=");
scanf("%d",&x);
for(i=0;i<n;i++)
    {printf("v[%d]=",i);
     scanf("%d",&v[i]);
    }
for(i=0;i<n;i++)
    if(v[i]==x)
        {vF[x]++;
         printf("Pozitia %d \n",i);
        }

printf("\n");
printf("Elementul X a aparut de %d ori",vF[x]);


return 0;
}
