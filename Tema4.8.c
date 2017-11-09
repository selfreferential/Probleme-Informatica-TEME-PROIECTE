#include <stdio.h> // ALGORITM DACA 1 SIR E SUBSIR AL ALTUI SIR
int main()
{int v[100],u[100],m,n,k=0,i,diferenta,ok,j;
printf("n=");
scanf("%d",&n);
do
{printf("m=");
 scanf("%d",&m);
}while(m>n);
for(i=0;i<n;i++)
   {printf("v[%d]=",i);
    scanf("%d",&v[i]);
   }
for(i=0;i<m;i++)
   {printf("u[%d]=",i);
    scanf("%d",&u[i]);
   }
for(i=0;i<n;i++)
    printf("%d ", v[i]);
printf("\n");

for(i=0;i<m;i++)
    printf("%d ",u[i]);
printf("\n");
diferenta=n-m;
printf("diferenta n-m este:%d",diferenta);
printf("\n");
for(k=0;k<=diferenta;k++)
   {ok=1;
    for(j=0;j<m;j++)
       if(v[j+k]!=u[j])
          ok=0;
    if(ok==1)break;
   }
if(ok==0)
    printf("nu e subsir");
else
    printf("sirul e subsir");
return 0;
}
