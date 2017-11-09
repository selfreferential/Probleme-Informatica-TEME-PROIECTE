#include <stdio.h>
int prim(int n)
{
    int d;
    for (d=2; d*d<=n; d++)
        if (n%d == 0 ) return 0;
    return 1;
}
main ()
{
    int n;
    scanf("%d",&n);
    if (prim(n)) printf("Este prim");
    else printf("Nu este prim");
    return 0;
}
