#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "roundtwo.h"
#include "board.h"
#include "showcardplayer1.h"
#include "showcardplayer2.h"
#include "showcardplayer3.h"
#include "showcardplayer4.h"
#include "teampoint.h"
#include "shaffle.h"
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
        if(helpwinner2 == 1)
        {
            system("cls");
            round2game(cards, &helpwinner2, &helpwinner3, &helpwinner4, hokem, &player2, &player3, &player4, &player2num, &player3num, &player4num);
            sleep(2);
            system("cls");
            boardGame(p1, hokem, player1, player1num, player2, player2num, player3, player3num, player4, player4num, team1, team2 ,&cardplay1, &cardplay2, &cardplay3, &cardplay4, &cardplay5, &cardplay6, &cardplay7, &cardplay8, &cardplay9, &cardplay10, &cardplay11);
            showcardp3(p3, player1, &player3, &player3num);
            sleep(2);
        }
    }
    getch();
    return 0;
}
