#include <stdio.h>
main()
{int n,nr,i;
 float s=0,medie;
 printf("n=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
    {printf("nr=");
     scanf("%d",&nr);
     s=s+nr;
     }
 medie=s/n;
 printf("%.2f",medie);
 return 0;
 }
