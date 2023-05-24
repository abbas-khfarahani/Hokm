void boardGame(int p1[][11],char hokem, char player1, int player1num, char player2, int player2num, char player3, int player3num, char player4, int player4num, int team1, int team2, int *cardplay1, int *cardplay2, int *cardplay3, int *cardplay4, int *cardplay5, int *cardplay6, int *cardplay7, int *cardplay8, int *cardplay9, int *cardplay10, int *cardplay11)
{   
    int i, j; 
    int temp1=0, temp2=0, temp3=0, temp4=0, temp5=0, temp6=0, temp7=0, temp8=0, temp9=0, temp10=0, temp11=0; 
    int aid1=0, aid2=0, aid3=0, aid4=0, aid5=0, aid6=0, aid7=0, aid8=0, aid9=0, aid10=0, aid11=0;
    int n, m;
    int count =0;
    int q, w;
    if(96<hokem<101)
    {
    printf("\n                                  HOKEM IS : %c", hokem-32);   
    }
    else 
        printf("\n                              HOKEM IS : %c", hokem);
    // above if-else use to print the capital letter.              
    printf("\n                                     p3                                      team1 : %d", team1);
    printf("\n         ");
    for(q=0; q<56; q++)
    {
        printf("-");
        
    }
    printf("\n         |                          %c%2d                         |", player3, player3num);                                                 
    for(w=0; w<8; w++)
    {
        printf("\n         |                                                      |");
        
    }
    printf("\n      p2 |%c%2d                                                %c%2d|p4", player2, player2num, player4, player4num);
    for(w=0; w<8; w++)
    {
        printf("\n         |                                                      |");
        
    }
    printf("\n         |                          %c%2d                         |", player1, player1num );
    printf("\n         --------------------------------------------------------           team 2 : %d", team2);
    printf("\n                                    p1");
    printf("\n         ");
    for(q=0; q<56; q++)
    {
        printf("-");
    
    }
    printf("\n    symbol  |");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {   
                if (temp1 == *cardplay1)
                {
                    printf("  - |");    
                }
                else if(temp2 == *cardplay2)
                {
                    printf("  - |");
                }
                else if(temp3 == *cardplay3)
                {
                    printf("  - |");
                }
                else if(temp4 == *cardplay4)
                {
                    printf("  - |");
                }
                else if(temp5 == *cardplay5)
                {
                    printf("  - |");
                }
                else if(temp6 == *cardplay6)
                {
                    printf("  - |");
                }
                else if(temp7 == *cardplay7)
                {
                    printf("  - |");
                }
                else if(temp8 == *cardplay8)
                {
                    printf("  - |");
                }
                else if(temp9 == *cardplay9)
                {
                    printf("  - |");
                }
                else if(temp10 == *cardplay10)
                {
                    printf("  - |");
                }
                else if(temp11 == *cardplay11)
                {
                    printf("  - |");
                }
                else if(i==0)
                {
                    printf("  A |");
                }
                else if(i==1)
                {
                    printf("  B |");
                }
                else if(i==2)
                {
                    printf("  C |");
                }
                else if(i==3)
                {
                    printf("  D |");
                }
                temp1++;
                temp2++;
                temp3++;
                temp4++;
                temp5++;
                temp6++;
                temp7++;
                temp8++;
                temp9++;
                temp10++;
                temp11++;
            }
        }
    }
    if(n == 0)
    {
        player1= 'A';
    }
    else if(n == 1)
    {
        player1= 'B';
    }
     else if(n == 2)
    {
        player1= 'C';
    }
    else if(n == 3)
    {
        player1= 'D';
    } 
    printf("\n            --------------------------------------------- \n");
    printf("    number  |");
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (aid1 == *cardplay1)
                {
                    printf("  0 |");
                }
                else if (aid2 == *cardplay2)
                {
                     printf("  0 |");
                }
                else if (aid3 == *cardplay3)
                {
                     printf("  0 |");
                }
                else if (aid4 == *cardplay4)
                {
                     printf("  0 |");
                }
                else if (aid5 == *cardplay5)
                {
                     printf("  0 |");
                }
                else if (aid6 == *cardplay6)
                {
                     printf("  0 |");
                }
                else if (aid7 == *cardplay7)
                {
                     printf("  0 |");
                }
                else if (aid8 == *cardplay8)
                {
                     printf("  0 |");
                }
                else if (aid9 == *cardplay9)
                {
                     printf("  0 |");
                }
                else if (aid10 == *cardplay10)
                {
                     printf("  0 |");
                }
                else if (aid11 == *cardplay11)
                {
                     printf("  0 |");
                }
                else if(i==0)
                {
                    printf(" %2d |", j+1);
                }
                else if(i==1)
                {
                   printf(" %2d |", j+1);
                }
                else if(i==2)
                {
                    printf(" %2d |", j+1);
                }
                else if(i==3)
                {
                    printf(" %2d |", j+1);
                }
                aid1++;
                aid2++;
                aid3++;
                aid4++;
                aid5++;
                aid6++;
                aid7++;
                aid8++;
                aid9++;
                aid10++;
                aid11++;
            }
        }
    } 
    printf("\n            ---------------------------------------------");
    printf("\n               0    1    2    3    4    5    6    7    8    9    10");
}