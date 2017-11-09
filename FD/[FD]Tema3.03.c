#include <stdio.h>
int perfecte(int);
main()
{int nr,p=0;
printf("nr=");
scanf("%d",&nr);
while(nr!=0)
   {if(perfecte(nr)==1)
      p++;
    printf("nr=");
    scanf("%d",&nr);
   }
printf("%d",p);
return 0;
}

int perfecte(int x)
{int s=0,d;
 for(d=1;d<=x/2;d++)
    if(x%d==0)
       s=s+d;
 if(s==x)
   return 1;
 else
   return 0;
}
