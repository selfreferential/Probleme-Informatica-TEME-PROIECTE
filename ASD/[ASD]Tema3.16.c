#include <stdio.h>
main()
{int nr,s=0;
printf("nr=");
scanf("%d",&nr);
s=s+nr;
while(nr!=0)
     {printf("nr=");
      scanf("%d",&nr);
      s=s+nr;
      }
printf("%d",s);
return 0;
}
