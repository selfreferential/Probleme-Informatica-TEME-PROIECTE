#include <stdio.h>
void print_board(int board[10][10],int limit)
{
    int i,j;
    for (i=0; i<limit; i++)
    {
        for (j=0; j<limit; j++)
            if (board[i][j] == 1) printf("X|");
            else if (board[i][j] == 2) printf("O|");
            else printf(" |");
        printf("\n");
    }
}
int read_input()
{
    int n;
    do
    {
        printf("Marime tabla(3-10) : ");
        scanf("%d",&n);
    }
    while(n <= 3 && n >=10);
    return n;
}
int generate_turn()
{
    srand(time(NULL));
    int turn = rand() % 2;
    return turn;

}
int win (int board[10][10],int limit)
{
    int i,count1=0,count2=0;
    for (i=0; i<limit; i++)
        if (board[i][i] == 1) count1++;
        else if (board[i][i] == 2) count2++;
    if (count2 == limit)
    {
        printf("Ai castigat!\n");
        return 0;
    }
    else if (count1 == limit)
    {
        printf("AI a castigat!\n");
        return 0;
    }
    count1=count2=0;
    for (i=0; i<limit; i++)
        if (board[i][limit-i-1] == 1) count1++;
        else if (board[i][limit-i-1] == 2) count2++;
    if (count2 == limit)
    {
        printf("Ai castigat!\n");
        return 0;
    }
    else if (count1 == limit)
    {
        printf("AI a castigat!\n");
        return 0;
    }
    int j;
    for (i=0; i<limit; i++)
    {
        if (count2 == limit)
        {
            printf("Ai castigat!\n");
            return 0;
        }
        else if (count1 == limit)
        {
            printf("AI a castigat!\n");
            return 0;
        }
        count1=count2=0;
        for (j=0; j<limit; ++j)
            if (board[i][j] == 1) count1++;
            else if (board[i][j] == 2) count2++;
    }
    for (j=0; j<limit; j++)
    {
        if (count1 == limit)
        {
            printf("AI a castigat!\n");
            return 0;
        }
        else if (count2 == limit)
        {
            printf("Ai castigat!\n");
            return 0;
        }
        count1=count2=0;
        for (i=0; i<limit; i++)
            if (board[i][j] == 1) count1++;
            else if (board[i][j] == 2) count2++;
    }
    for (i=0; i<limit; i++)
        for (j=0; j<limit; j++)
            if (board[i][j] == 0) return 1;
    printf("Egalitate!\n");
    return 0;
}
void read_move(int board[10][10],int limit)
{
    int i,j;
    do
    {
        printf("i: ");
        scanf("%d",&i);
        printf("j: ");
        scanf("%d",&j);
    }
    while (board[i][j] == 1 || board[i][j] == 2 );
    board[i][j] = 2;
}
void easy_computer_turn (int board[10][10],int limit)
{
    int x,y;
    do
    {
        x = rand()%limit;
        y = rand()%limit;
    }
    while (board[x][y] == 1 || board[x][y] == 2);
    board[x][y] = 1;
}
void medium_computer_turn(int board[10][10],int limit)
{
    int x,y;
    if (board[0][0] == 0)
    {
        board[0][0] = 1;
        return;
    }
    else if (board[limit-1][limit-1] == 0)
    {
        board[limit-1][limit-1] = 1;
        return;
    }
    else if (limit%2!=0 && board[limit/2][limit/2] == 0)
    {
        board[limit/2][limit/2] = 1;
        return;
    }

    do
    {
        x = rand()%limit;
        y = rand()%limit;
    }
    while (board[x][y] == 1 || board[x][y] == 2);
    board[x][y] = 1;
}
void hard_computer_turn(int board[10][10],int limit)
{
    if (board[0][limit-1] == 0)
    {
        board[0][limit-1] = 1;
        return;
    }
    if (board[limit-1][0] == 0)
    {
        board[limit-1][0] = 1;
        return;
    }
    if (board[0][0] == 0)
    {
        board[0][0] = 1;
        return;
    }
    else if (board[limit-1][limit-1] == 0)
    {
        board[limit-1][limit-1] = 1;
        return;
    }
    else if (limit%2!=0 && board[limit/2][limit/2] == 0)
    {
        board[limit/2][limit/2] = 1;
        return;
    }
    int i=0;
    while (board[i][i] != 0 && i < limit)
        i++;
    if (board[i][i] == 0 && i < limit)
    {
        board[i][i] = 1;
        return;
    }
    int x,y;
    do
    {
        x = rand()%limit;
        y = rand()%limit;
    }
    while (board[x][y] == 1 || board[x][y] == 2);
    board[x][y] = 1;
}
int read_diff()
{
    int dif;
    printf("Alege dificultatea(0-USOR,1-MEDIU,2-GREU) :");
    scanf("%d",&dif);
    return dif;
}
main ()
{
    int board[10][10] = {0},turn = 0,intable,playermove,diff;
    intable = read_input();
    turn = generate_turn();
    diff = read_diff();

    while (win(board,intable))
    {
        if (turn)
        {
            printf("Tura jucator!\n");
            read_move(board,intable);
            print_board(board,intable);
            turn = 0;
        }
        else
        {
            printf("Tura computer!\n");
            switch (diff)
            {
            case 0:
                easy_computer_turn(board,intable);
                break;
            case 1:
                medium_computer_turn(board,intable);
                break;
            case 2:
                hard_computer_turn(board,intable);
                break;
            default:
                easy_computer_turn(board,intable);
            }
            print_board(board,intable);
            turn = 1;
        }
    }
    system("PAUSE");
    return 0;
}
