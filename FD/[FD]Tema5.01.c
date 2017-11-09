#include <stdio.h>
int prime(int);
main()
{int n,i;
printf("n=");
scanf("%d",&n);
for(i=0;i<=n;i++)
   if(prime(i)==1)
      printf("%d ",i);
return 0;
}

int prime(int x)
{int d,ok=1;
for(d=2;d<=x/2 && ok==1;d++)
    if(x%d==0)
       ok=0;
if(ok==1)
   return 1;
else
   return 0;
}
