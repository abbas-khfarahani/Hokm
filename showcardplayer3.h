void showcardp3(int p3[][11], char player1, char *player3, int *player3num)
{
    int max, j;
    if(player1 == 'A')
    {
        *player3='A';
        max=p3[0][0];
        for(j=1; j<11; j++)
        {
            if(p3[0][j] > max)
            {
                max=p3[0][j];
                *player3num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p3[0][j] == max)
            {
                p3[0][j]=-1;
            }
        }
    }
    if(player1 == 'B')
    {
        *player3='B';
        max=p3[1][0];
        for(j=1; j<11; j++)
        {
            if(p3[1][j] > max)
            {
                max=p3[1][j];
                *player3num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p3[1][j] == max)
            {
                p3[1][j]=-1;
            }
        }
    }
    if(player1 == 'C')
    {
        *player3='C';
        max=p3[2][0];
        for(j=1; j<11; j++)
        {
            if(p3[2][j] > max)
            {
                max=p3[2][j];
                *player3num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p3[2][j] == max)
            {
                p3[2][j]=-1;
            }
        }
    }
    if(player1 == 'D')
    {
        *player3='D';
        max=p3[3][0];
        for(j=1; j<11; j++)
        {
            if(p3[3][j] > max)
            {
                max=p3[3][j];
                *player3num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p3[3][j] == max)
            {
                p3[3][j]=-1;
            }
        }
    }
} 