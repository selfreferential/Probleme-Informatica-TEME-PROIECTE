#include <stdio.h>

int main()
{float s=0, v[25], medie;
int i, promovati=0, nepromovati=0, a=0, b=0, c=0;
for(i=0;i<25;i++)
   do
    {printf("v[%d]=",i);
     scanf("%f",&v[i]);
    }while(v[i]<1 || v[i]>10);
for(i=0;i<25;i++)
   {if(v[i]>=5)
       {promovati++;
       s=s+v[i];
       }
    else
        nepromovati++;
    if(v[i]>=5 && v[i]<=6)
        a++;
    if(v[i]>=7 && v[i]<=8)
        b++;
    if(v[i]>=9 && v[i]<=10)
       c++;
  }
printf("Au promovat %d studenti\n", promovati);
printf("Nu au promovat %d studenti\n", nepromovati);
medie=s/promovati;
printf("Media grupei este %f \n",medie);
printf("%d%%  dintre studenti au luat note intre 5-6\n", a*100/25);
printf("%d%% dintre studenti au luat note intre 7-8\n", b*100/25);
printf("%d%% dintre studenti au luat note intre 9-10\n", c*100/25);
return 0;
}
