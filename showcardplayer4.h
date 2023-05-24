void showcardp4(int p4[][11], char player1, char *player4, int *player4num)
{
    int max, j;
    if(player1 == 'A')
    {
        *player4='A';
        max=p4[0][0];
        for(j=1; j<11; j++)
        {
            if(p4[0][j] > max)
            {
                max=p4[0][j];
                *player4num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p4[0][j] == max)
            {
                p4[0][j]=-1;
            }
        }
    }
    if(player1 == 'B')
    {
        *player4='B';
        max=p4[1][0];
        for(j=1; j<11; j++)
        {
            if(p4[1][j] > max)
            {
                max=p4[1][j];
                *player4num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p4[1][j] == max)
            {
                p4[1][j]=-1;
            }
        }
    }
    if(player1 == 'C')
    {
        *player4='C';
        max=p4[2][0];
        for(j=1; j<11; j++)
        {
            if(p4[2][j] > max)
            {
                max=p4[2][j];
                *player4num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p4[2][j] == max)
            {
                p4[2][j]=-1;
            }
        }
    }
    if(player1 == 'D')
    {
        *player4='D';
        max=p4[3][0];
        for(j=1; j<11; j++)
        {
            if(p4[3][j] > max)
            {
                max=p4[3][j];
                *player4num=j+1;
            }
        }
        for(j=1; j<11; j++)
        {
            if(p4[3][j] == max)
            {
                p4[3][j]=-1;
            }
        }
    }
}