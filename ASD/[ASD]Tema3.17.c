#include <stdio.h>
main()
{int nr,maxim;
printf("nr=");
scanf("%d",&nr);
maxim=nr;
while(nr!=0)
     {printf("nr=");
      scanf("%d",&nr);
      if(nr>maxim)
         maxim=nr;
      }
printf("%d",maxim);
return 0;
}
