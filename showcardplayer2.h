void showcardp2(int p2[][11], char player1, char *player2, int *player2num)
{
    int max, j;
    if(player1 == 'A')
    {
        *player2='A';
        max=p2[0][0];
        for(j=1; j<11; j++)
        {
            if(p2[0][j] > max)
            {
                max=p2[0][j];
                *player2num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p2[0][j] == max)
            {
                p2[0][j]=-1;
            }
        }

    }
    else if(player1 == 'B')
    {
        *player2='B';
        max=p2[1][0];
        for(j=1; j<11; j++)
        {
            if(p2[1][j] > max)
            {
                max=p2[1][j];
                *player2num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p2[1][j] == max)
            {
                p2[1][j]=-1;
            }
        }
    }
    else if(player1 == 'C')
    {
        *player2='C';
        max=p2[2][0];
        for(j=1; j<11; j++)
        {
            if(p2[2][j] > max)
            {
                max=p2[2][j];
                *player2num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p2[2][j] == max)
            {
                p2[2][j]=-1;
            }
        }
    }
    else if(player1 == 'D')
    {
        *player2='D';
        max=p2[3][0];
        for(j=1; j<11; j++)
        {
            if(p2[3][j] > max)
            {
                max=p2[3][j];
                *player2num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p2[3][j] == max)
            {
                p2[3][j]=-1;
            }
        }
    }
}
