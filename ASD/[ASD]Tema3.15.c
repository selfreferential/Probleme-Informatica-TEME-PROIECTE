#include <stdio.h>
main()
{int x,n,i,counter=0,nr;
printf("n=");
scanf("%d",&n);
printf("x=");
scanf("%d",&x);
for(i=0;i<n;i++)
   {printf("nr");
    scanf("%d",&nr);
    if(x==nr)
        counter++;
   }
printf("X apare in sir de %d ori",counter);

return 0;
}
