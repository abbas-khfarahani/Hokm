
//*********************************************************************************************
void round2game(int card[44], int *helpwinner2, int *helpwinner3, int *helpwinner4, char hokem,char *player2,char *player3, char *player4, int *player2num, int *player3num, int *player4num)
{
    int max, i, n, m;
    if(*helpwinner2 == 1)
    {
        if(hokem == 'A')
        {
            for(i=11; i<22; i++)
            {
                if(card[i]/11 != 0)
                {
                    max=card[11];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player2num=m;
                if(n=1)
                {
                    *player2='B';
                }
                else if (n=2)
                {
                    *player2='C';
                }
                else if (n=3)
                {
                    *player2='D';
                }
            }
        }
        else if(hokem == 'B')
        {
            for(i=11; i<22; i++)
            {
                if(card[i]/11 != 1)
                {
                    max=card[11];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player2num=m;
                if(n=0)
                {
                    *player2='A';
                }
                else if (n=2)
                {
                    *player2='C';
                }
                else if (n=3)
                {
                    *player2='D';
                }
            }
        }
         else if(hokem == 'C')
        {
            for(i=11; i<22; i++)
            {
                if(card[i]/11 != 2)
                {
                    max=card[11];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player2num=m;
                if(n=0)
                {
                    *player2='A';
                }
                else if (n=1)
                {
                    *player2='B';
                }
                else if (n=3)
                {
                    *player2='D';
                }
            }
        }
         else if(hokem == 'D')
        {
            for(i=11; i<22; i++)
            {
                if(card[i]/11 != 3)
                {
                    max=card[11];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player2num=m;
                if(n=0)
                {
                    *player2='A';
                }
                else if (n=2)
                {
                    *player2='C';
                }
                else if (n=1)
                {
                    *player2='B';
                }
            }
        }
    }
    if(*helpwinner3 == 1)
    {
        if(hokem == 'A')
        {
            for(i=22; i<33; i++)
            {
                if(card[i]/11 != 0)
                {
                    max=card[22];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player3num=m;
                if(n=1)
                {
                    *player3='B';
                }
                else if (n=2)
                {
                    *player3='C';
                }
                else if (n=3)
                {
                    *player3='D';
                }
            }
        }
        else if(hokem == 'B')
        {
            for(i=22; i<33; i++)
            {
                if(card[i]/11 != 1)
                {
                    max=card[22];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player3num=m;
                if(n=0)
                {
                    *player3='A';
                }
                else if (n=2)
                {
                    *player3='C';
                }
                else if (n=3)
                {
                    *player3='D';
                }
            }
        }
         else if(hokem == 'C')
        {
            for(i=22; i<33; i++)
            {
                if(card[i]/11 != 2)
                {
                    max=card[22];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player3num=m;
                if(n=0)
                {
                    *player3='A';
                }
                else if (n=1)
                {
                    *player3='B';
                }
                else if (n=3)
                {
                    *player3='D';
                }
            }
        }
         else if(hokem == 'D')
        {
            for(i=22; i<33; i++)
            {
                if(card[i]/11 != 3)
                {
                    max=card[22];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player3num=m;
                if(n=0)
                {
                    *player3='A';
                }
                else if (n=2)
                {
                    *player3='C';
                }
                else if (n=1)
                {
                    *player3='B';
                }
            }
        }
    }
    if(*helpwinner4 == 1)
    {
        if(hokem == 'A')
        {
            for(i=33; i<44; i++)
            {
                if(card[i]/11 != 0)
                {
                    max=card[33];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player4num=m;
                if(n=1)
                {
                    *player4='B';
                }
                else if (n=2)
                {
                    *player4='C';
                }
                else if (n=3)
                {
                    *player4='D';
                }
            }
        }
        else if(hokem == 'B')
        {
            for(i=33; i<44; i++)
            {
                if(card[i]/11 != 1)
                {
                    max=card[33];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player4num=m;
                if(n=0)
                {
                    *player4='A';
                }
                else if (n=2)
                {
                    *player4='C';
                }
                else if (n=3)
                {
                    *player4='D';
                }
            }
        }
         else if(hokem == 'C')
        {
            for(i=33; i<44; i++)
            {
                if(card[i]/11 != 2)
                {
                    max=card[33];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player4num=m;
                if(n=0)
                {
                    *player4='A';
                }
                else if (n=1)
                {
                    *player4='B';
                }
                else if (n=3)
                {
                    *player4='D';
                }
            }
        }
         else if(hokem == 'D')
        {
            for(i=33; i<44; i++)
            {
                if(card[i]/11 != 3)
                {
                    max=card[33];
                    if(card[i] > max)
                    {
                        max=card[i];
                        n=i/11;
                        m=i%11;
                    }
                }
                *player4num=m;
                if(n=0)
                {
                    *player4='A';
                }
                else if (n=2)
                {
                    *player4='C';
                }
                else if (n=1)
                {
                    *player4='B';
                }
            }
        }
    }
}