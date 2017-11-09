#include <stdio.h>

main()
{int x,rez=0,k,z=1;
printf("x=");
scanf("%d",&x);
printf("k=");
scanf("%d",&k);
while(x!=0)
   {if(x%10%k!=0)
      {rez=rez+x%10*z;
       z=z*10;
      }
    x=x/10;
   }

printf("%d",rez);

return 0;
}
