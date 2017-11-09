#include <stdio.h>
int main()
{int n,i,v[100],pare=0,impare=0,div3=0;
 printf("n=");
 scanf("%d",&n);
 for(i=0;i<n;i++)
      {printf("v[%d]=",i);
       scanf("%d",&v[i]);
       if(v[i]%2==0)
           pare++;
       else
           impare++;
       if(v[i]%3==0)
           div3++;
      }
printf("Sunt %d numere pare\n",pare);
printf("Sunt %d numere impare\n",impare);
printf("Sunt %d numere divizibile cu 3\n",div3);
return 0;
}
