#include <stdio.h>
int main()
{int v[100],nr,pare=0,i,n=0;
float medie,s=0;
do{
printf("nr=");
scanf("%d",&nr);
if(nr!=0)
  {v[n]=nr;
   n++;
  }
}while(nr!=0 || n>100);
for(i=0;i<n;i++)
    if(v[i]%2==0)
       pare++;
printf("Sunt %d numere pare in vector",pare);
return 0;
}
