#include <stdio.h>
main ()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int i,j,v[m][n];
    for (i=0; i<m; i++)
        for (j=0; j<n; j++)
            scanf("%d",&v[i][j]);
    int s =0;
    for (i=0; i<m; i++)
        s+=v[i][0];
    int t;
    for (j=1; j<n; j++)
    {
        t=0;
        for (i=0; i<m; i++)
            t+=v[i][j];
        if (t > s) s = t;
    }
    for (j=0; j<n; j++)
    {
        t=0;
        for (i=0; i<m; i++)
            t+=v[i][j];
        if (t == s) printf("%d ",j);
    }
    return 0;
}
