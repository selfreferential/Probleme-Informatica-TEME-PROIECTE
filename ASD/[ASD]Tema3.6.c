#include <stdio.h>
main()
{int n,d;
printf("n=");
scanf("%d",&n);
for(d=1;d<=n;d++)
    if(n%d==0)
       printf("%d ",d);
return 0;
}
