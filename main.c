#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
void boardGame(int p1[][11],char hokem, char player1, int player1num, char player2, int player2num, char player3, int player3num, char player4, int player4num, int team1, int team2, int *cardplay1, int *cardplay2, int *cardplay3, int *cardplay4, int *cardplay5, int *cardplay6, int *cardplay7, int *cardplay8, int *cardplay9, int *cardplay10, int *cardplay11);
void showcardp1(int p1[][11], int cardplay1, int cardplay2, int cardplay3, int cardplay4, int cardplay5, int cardplay6, int cardplay7, int cardplay8, int cardplay9, int cardplay10, int cardplay11, char *n, int *m);
void showcardp2(int p2[][11], char player1, char *player2, int *player2num);
void showcardp3(int p3[][11], char player1, char *player3, int *player3num);
void showcardp4(int p4[][11], char player1, char *player4, int *player4num);
void teamwinner(char player1, char player2, char player3, char player4, int *team1, int *team2, int player1num, int player2num, int player3num, int player4num,int  *helpwinner1 ,int  *helpwinner2 ,int  *helpwinner3 ,int  *helpwinner4);
void round2game(int card[44], int *helpwinner2, int *helpwinner3, int *helpwinner4, char hokem,char *player2,char *player3, char *player4, int *player2num, int *player3num, int *player4num);
void shuffle_card(int* card);
int main()
{
    int cards[44];
    int p1[4][11], p2[4][11], p3[4][11], p4[4][11];
    int  helpwinner1=0, helpwinner2=0, helpwinner3=0, helpwinner4=0; 
    char n;
    int i, j, m, loop, player1num=0, player2num=0, player3num=0, player4num=0, team1=0, team2=0;
    char player1='0', player2='0', player3='0', player4='0';
    int helpCountA=0, helpCountB=0,  helpCountC=0,  helpCountD=0; //bray moghavem sazi hokem entekhabi estefadeh mishe.   
    int cardplay1=-2, cardplay2=-2, cardplay3=-2, cardplay4=-2, cardplay5=-2, cardplay6=-2, cardplay7=-2, cardplay8=-2, cardplay9=-2, cardplay10=-2, cardplay11=-2;
    shuffle_card(cards);
   
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            p1[i][j]=-1;
        }
    }
    for(i=0;i<=4;i++)
    {
        p1[cards[i]/11][cards[i]%11]=cards[i];
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if(i==0)
                {
                    printf("A%d\t",p1[i][j]%11 +1);
                    helpCountA++; 
                }
                if(i==1)
                {
                    printf("B%d\t",p1[i][j]%11 +1);
                    helpCountB++;
                }
                if(i==2)
                {
                    printf("C%d\t",p1[i][j]%11 +1);
                    helpCountC++;
                }
                if(i==3)
                {
                    printf("D%d\t",p1[i][j]%11 +1);
                    helpCountD++;
                }
                
            }
        }

    }
    printf("\nchoice one of the letter: ");
    char hokem;
    scanf("%c", &hokem);
    while(1)
    {   if(96>hokem>68 || hokem>100 || hokem<65  )
        {
            printf("the entered char is wrong! \nenter another char:");
            scanf("\n %c", &hokem);
        }
        // above if use to dose not let to enter letter expected aAbBcCdD.     
        if(hokem == 'a' || hokem == 'A')
        {
            if(helpCountA == 0)
            {
                printf("the entered char is wrong! \nenter another char:");
                scanf("\n %c", &hokem);
            }
            else
                break;
        }
        else if(hokem == 'b' || hokem == 'B' )
        {
            if(helpCountB == 0)
            {
                printf("the entered char is wrong! \nenter another char:");
                scanf("\n %c", &hokem);
            }
            else
                break;
        }
        else if(hokem == 'c' || hokem == 'C' )
        {
            if(helpCountC == 0)
            {
                printf("the entered char is wrong! \nenter another char:");
                scanf("\n %c", &hokem);
            }
            else
                break;
        }
        else if(hokem == 'd' || hokem == 'D' )
        {
            if(helpCountD == 0)
            {
                printf("the entered char is wrong! \nenter another char:");
                scanf("\n %c", &hokem);
            }
            else
                break;
        }
    }    
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            p1[i][j]=-1;
        }
    }
    for(i=0;i<=3;i++)
    {
        p1[cards[i]/11][cards[i]%11]=cards[i];
    }
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if(i==0)
                {
                    printf("A%d\t",p1[i][j]%11 +1);
                }
                if(i==1)
                {
                    printf("B%d\t",p1[i][j]%11 +1);
                }
                if(i==2)
                {
                    printf("C%d\t",p1[i][j]%11 +1);
                }
                if(i==3)
                {
                    printf("D%d\t",p1[i][j]%11 +1);
                }
                
            }
        }
    }
    system("cls");
    for(i=0;i<=10;i++)
    {
        p1[cards[i]/11][cards[i]%11]=cards[i];
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            p2[i][j]=-1;
        }
    }
    for(i=11;i<=21;i++)
    {
        p2[cards[i]/11][cards[i]%11]=cards[i];
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            p3[i][j]=-1;
        }
    }
    for(i=22;i<=32;i++)
    {
        p3[cards[i]/11][cards[i]%11]=cards[i];
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            p4[i][j]=-1;
        }
    }
    for(i=33;i<=43;i++)
    {
        p4[cards[i]/11][cards[i]%11]=cards[i];
    }    
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 , &cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11); 
        printf("\n    which card do you whant to play?");
        scanf("%d", &cardplay1);
        while(1)
        {
            if(cardplay1>10 || cardplay1<0)
            {
                printf("the entered number is wrong! \nplease enter another number. number should be among (0-10) :");
                scanf("%d", &cardplay1);
            }
            else
                break;
        }
    system("cls");
    showcardp1(p1, cardplay1, cardplay2, cardplay3, cardplay4, cardplay5, cardplay6, cardplay7, cardplay8, cardplay9, cardplay10, cardplay11, &n, &m);
    player1=n;
    player1num=m;
    system("cls");
    boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    showcardp2(p2, player1, &player2, &player2num);
    sleep(2);
    system("cls");
    boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    showcardp3(p3, player1, &player3, &player3num);
    sleep(2);
    system("cls");
    boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    showcardp4(p4, player1, &player4, &player4num);
    sleep(2);
    system("cls");
    boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    sleep(2);
    system("cls");
    teamwinner(player1, player2, player3, player4, &team1, &team2, player1num,  player2num, player3num, player4num, &helpwinner1, &helpwinner2, &helpwinner3, &helpwinner4);
    boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    if(helpwinner1 == 1)
    {
        printf("\n    which card do you whant to play?");
        scanf("%d", &cardplay2);
        while(1)
        {
            if(cardplay2>10 || cardplay2<0)
            {
                printf("the entered number is wrong! \nplease enter another number. number should be among (0-10) :");
                scanf("%d", &cardplay2);
            }
            else
                break;
        }
        system("cls");
        showcardp1(p1, cardplay1, cardplay2, cardplay3, cardplay4, cardplay5, cardplay6, cardplay7, cardplay8, cardplay9, cardplay10, cardplay11, &n, &m);
        player1=n;
        player1num=m;
        system("cls");
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
        showcardp2(p2, player1, &player2, &player2num);
        sleep(2);
        system("cls");
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
        showcardp3(p3, player1, &player3, &player3num);
        sleep(2);
        system("cls");
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
        showcardp4(p4, player1, &player4, &player4num);
        sleep(2);
        system("cls");
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
        sleep(2);
        system("cls");
        teamwinner(player1, player2, player3, player4, &team1, &team2, player1num,  player2num, player3num, player4num, &helpwinner1, &helpwinner2, &helpwinner3, &helpwinner4);
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    }
    else
    {
        sleep(4);
        system("cls");
        round2game(cards, &helpwinner2, &helpwinner3, &helpwinner4, hokem, &player2, &player3, &player4, &player2num, &player3num, &player4num);
        boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
    }
}
 //************************************************************************************************
 void shuffle_card(int* card) {
    int i, r, temp;
    for (temp = 0, i = 0; temp < 44; i++, temp++)
        card[temp] = i;
    srand(time(NULL));
    for (i = 43; i > 0; i--) {
        r = rand() % i;
        temp = card[i];
        card[i] = card[r];
        card[r] = temp;
    }
}
//*************************************************************************************************
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
        sleep(.001);
    }
    printf("\n         |                          %c%2d                         |", player3, player3num);                                                 
    for(w=0; w<8; w++)
    {
        printf("\n         |                                                      |");
        sleep(.001);
    }
    printf("\n      p2 |%c%2d                                                %c%2d|p4", player2, player2num, player4, player4num);
    for(w=0; w<8; w++)
    {
        printf("\n         |                                                      |");
        sleep(.001);
    }
    printf("\n         |                          %c%2d                         |", player1, player1num );
    printf("\n         --------------------------------------------------------           team 2 : %d", team2);
    printf("\n                                    p1");
    printf("\n         ");
    for(q=0; q<56; q++)
    {
        printf("-");
        sleep(.001);
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
//**********************************************************************************************************
void showcardp1(int p1[][11], int cardplay1, int cardplay2, int cardplay3, int cardplay4, int cardplay5, int cardplay6, int cardplay7, int cardplay8, int cardplay9, int cardplay10, int cardplay11, char *n, int *m)
{
    int temp1=0, temp2=0, temp3=0, temp4=0, temp5=0, temp6=0, temp7=0, temp8=0, temp9=0, temp10=0, temp11=0;
    int i, j;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp1 == cardplay1)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp1++;
            }
        }
    }   
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp2 == cardplay2)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp2++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp3 == cardplay3)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp3++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp4 == cardplay4)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp4++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp5 == cardplay5)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp5++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp6 == cardplay6)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp6++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp7 == cardplay7)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp7++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp8 == cardplay8)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp8++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp9 == cardplay9)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp9++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp10 == cardplay10)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp10++;
            }
        }
    }
     for(i=0;i<=3;i++)
    {
        for(j=0;j<=10;j++)
        {
            if(p1[i][j]!=-1)
            {
                if (temp11 == cardplay11)
                {
                    if (i == 0)
                    {
                        *n='A';
                    }
                    else if(i == 1)
                    {
                        *n='B';
                    }
                    else if(i == 2)
                    {
                        *n='C';
                    }
                    else if(i == 3)
                    {
                        *n='D';
                    }
                    *m=j+1;

                }
                temp11++;
            }
        }
    }         
}
//**************************************************************************************************************
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
//***********************************************************************************************************************
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
//*************************************************************************************************************
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
//*****************************************************************************************************
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