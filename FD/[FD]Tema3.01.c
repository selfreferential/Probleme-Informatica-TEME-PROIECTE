#include <stdio.h>
main()
{int n,i,s=0;
printf("n=");
scanf("%d",&n);
for(i=0;i<n;i++)
    s=s+2*i+1;
printf("%d",s);
return 0;
}
