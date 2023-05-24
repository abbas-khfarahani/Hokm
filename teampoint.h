void teamwinner(char player1, char player2, char player3, char player4, int *team1, int *team2, int player1num, int player2num, int player3num, int player4num,int  *helpwinner1 ,int  *helpwinner2 ,int  *helpwinner3 ,int  *helpwinner4)
{
    int temp1, temp2, i;
    for(i=0; i<1; i++)
    {
        *helpwinner1=0, *helpwinner2=0, *helpwinner3=0; *helpwinner4=0;
        if((player1 == player2) && (player1 == player3) && (player1 == player4))
        {
            if(player1num > player3num)
            {
                temp1 = player1num;
            }
            else
            {
                temp1 = player3num;
            }
            if(player2num > player4num)
            {
                temp2 = player2num;
            }
            else
            {
                temp2 = player4num;
            }
            if(temp1>temp2)
            {
                *team1=*team1+1;
                if(temp1 == player1num)
                {
                    *helpwinner1=*helpwinner1+1; 
                }
                else
                {
                    *helpwinner3=*helpwinner3+1;
                }
            }
            else
            {
                *team2=*team2+1;
                 if(temp2 == player2num)
                {
                    *helpwinner2=*helpwinner2+1; 
                }
                else
                {
                    *helpwinner4=*helpwinner4+1;
                }
            }
        }
    }
} 