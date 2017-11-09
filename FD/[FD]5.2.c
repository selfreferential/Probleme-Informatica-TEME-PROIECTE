#include <stdio.h>
main ()
{
    int n;
    scanf("%d",&n);
    printf("numarul este %s", (n&1)?"impar":"par");
    return 0;
}
