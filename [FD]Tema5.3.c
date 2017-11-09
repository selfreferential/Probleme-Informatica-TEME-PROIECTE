#include <stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    unsigned long  p=1;
    int k=1;
    while (k<=n)
    {
        p <<=1;
        printf("%u ",p);
        k++;
    }
    return 0;
}
// Genereaza puterile lui 2 pana la n
