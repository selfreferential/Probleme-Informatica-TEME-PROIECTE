#include <stdio.h>
main()
{int n,d,k=1;
printf("n=");
scanf("%d",&n);
for(d=2;d<=n/2;d++)
    if(n%d==0)
       k=0;
if(k==1)
   printf("Numarul %d este prim",n);
else
   printf("Numarul %d NU este prim",n);
return 0;
}
