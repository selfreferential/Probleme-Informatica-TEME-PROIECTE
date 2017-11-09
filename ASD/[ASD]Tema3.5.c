#include <stdio.h>
main()
{int i,j;
for(i=1;i<=75;i++)
    {for(j=150;j>=i;j--)
        if(i+j==150 && j%11==0 & i%7==0)
             printf("(%d,%d)\n",i,j);
    }

return 0;
}
