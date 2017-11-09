#include <stdio.h>
int main()
{int v[1000],nr,n=0,i;
float medie,s=0;
do{
printf("nr=");
scanf("%d",&nr);
if(nr!=0)
  {v[n]=nr;
   n++;
  }
}while(nr!=0 || n>1000);
for(i=0;i<n;i++)
   s=s+v[i];
medie=s/n;
printf("%f",medie);
return 0;
}
