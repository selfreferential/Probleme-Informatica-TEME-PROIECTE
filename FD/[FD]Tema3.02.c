#include <stdio.h>
main()
{int n,d,p=1;
printf("n=");
scanf("%d",&n);
for(d=2;d<=n/2;d++)
    if(n%d==0)
       p=p*d;

printf("%d",p);
return 0;
}
