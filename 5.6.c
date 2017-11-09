#include <stdio.h>
main ()
{
    int n;
    scanf("%d",&n);
    int i,j,v[100][100];
    for (i=0; i<n; i++)
        for (j=0; j<n; j++)
            scanf("%d",&v[i][j]);
    int s=0,s1,s2;
    for (j=0; j<n; j++)
        s+=v[0][j];
    for (i=1; i<n; i++)
    {
        s1=s2=0;
        for (j=0; j<n; j++)
        {
            s1+=v[i][j];
            s2+=v[j][i];
        }
        if (s1 != s || s2 !=s)
        {
            printf("Nu este patrat magic\n");
            return 0;
        }
    }
    s1=s2=0;
    for (i=0; i<n; i++)
    {
        s1+=v[i][i];
        s2+=v[i][n-i-1];
    }
    if (s1 != s || s2!=s)
    {
        printf("Nu este patrat magic\n");
        return 0;
    }
    printf("Este patrat magic\n");
    return 0;
}
//Aflam daca matricea este
//patrat perfect
