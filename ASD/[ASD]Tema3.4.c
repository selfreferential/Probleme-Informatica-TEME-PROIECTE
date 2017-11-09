#include <stdio.h>
main()
{int i;
for(i=3003;i<=3993;i++)
    if(i%10==3 && i%3==0)
       printf("%d ",i);
return 0;
}
