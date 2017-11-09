#include <stdio.h>
main()
{int minim,nr,n,i;
printf("n=");
scanf("%d",&n);
printf("nr=");
scanf("%d",&nr);
minim=nr;
for(i=1;i<n;i++)
   {printf("nr=");
    scanf("%d",&nr);
    if(minim>nr)
        minim=nr;
    }
printf("Minimul este %d",minim);
return 0;
}
