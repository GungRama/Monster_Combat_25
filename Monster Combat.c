#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

struct coordinate{
    int x;
    int y;
    int direction;
};

void gotoxy(int x, int y)
    {
     COORD coord;
     coord.X = x;
     coord.Y = y;
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    }

void AA()
{
    printf("Aerobird\n");
}

void BB()
{
    printf("Barraculla\n");
}

void CC()
{
    printf("Chimpazilla\n");
}

void DD()
{
    printf("Droconos\n");
}

void EEE()
{
    printf("Enigmammal\n");
}

void FF()
{
    printf("Freezefox\n");
}

void GG()
{
    printf("Gargantulla\n");
}

void ZZ()
{
    printf("Zapping Bee\n");
}

void II()
{
    printf("Inksquid\n");
}

void SS()
{
    printf("Seapug\n");
}


void A()
{
    gotoxy(0,4);
    printf("Attack : 50");
    gotoxy(0,5);
    printf("Defend : 30");
}

void B()
{
    gotoxy(0,4);
    printf("Attack : 60");
    gotoxy(0,5);
    printf("Defend : 40");
}

void C()
{
    gotoxy(0,4);
    printf("Attack : 60");
    gotoxy(0,5);
    printf("Defend : 10");
}

void D()
{
    gotoxy(0,4);
    printf("Attack : 50");
    gotoxy(0,5);
    printf("Defend : 20");
}

void E()
{
    gotoxy(0,4);
    printf("Attack : 10");
    gotoxy(0,5);
    printf("Defend : 90");
}

void F()
{
    gotoxy(0,4);
    printf("Attack : 40");
    gotoxy(0,5);
    printf("Defend : 60");
}

void G()
{
    gotoxy(0,4);
    printf("Attack : 20");
    gotoxy(0,5);
    printf("Defend : 40");
}

void Z()
{
    gotoxy(0,4);
    printf("Attack : 70");
    gotoxy(0,5);
    printf("Defend : 10");
}

void I()
{
    gotoxy(0,4);
    printf("Attack : 30");
    gotoxy(0,5);
    printf("Defend : 50");
}

void S()
{
    gotoxy(0,4);
    printf("Attack : 20");
    gotoxy(0,5);
    printf("Defend : 40");
}

void EA()
{
    gotoxy(0,9);
    printf("Attack : 50");
    gotoxy(0,10);
    printf("Defend : 30");
}

void EB()
{
    gotoxy(0,9);
    printf("Attack : 60");
    gotoxy(0,10);
    printf("Defend : 40");
}

void EC()
{
    gotoxy(0,9);
    printf("Attack : 60");
    gotoxy(0,10);
    printf("Defend : 10");
}

void ED()
{
    gotoxy(0,9);
    printf("Attack : 50");
    gotoxy(0,10);
    printf("Defend : 20");
}

void EE()
{
    gotoxy(0,9);
    printf("Attack : 10");
    gotoxy(0,10);
    printf("Defend : 90");
}

void EF()
{
    gotoxy(0,9);
    printf("Attack : 40");
    gotoxy(0,10);
    printf("Defend : 60");
}

void EG()
{
    gotoxy(0,9);
    printf("Attack : 20");
    gotoxy(0,10);
    printf("Defend : 40");
}

void EZ()
{
    gotoxy(0,9);
    printf("Attack : 70");
    gotoxy(0,10);
    printf("Defend : 10");
}

void EI()
{
    gotoxy(0,9);
    printf("Attack : 30");
    gotoxy(0,10);
    printf("Defend : 50");
}

void ES()
{
    gotoxy(0,9);
    printf("Attack : 20");
    gotoxy(0,10);
    printf("Defend : 40");
}

int main()
{
    system("cls");
    int p,r,q,HEA=200,ATT=0,DEF=0,hea=200,att=0,def=0,pl,pil,rn;
    printf("\t| Monster | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |\n");
    printf("\t| Health  |200|200|200|200|200|200|200|200|200|200 |\n");
    printf("\t| Attack  |50 |60 |60 |50 |10 |40 |20 |70 |30 |20  |\n");
    printf("\t| Defend  |30 |40 |10 |20 |90 |60 |40 |10 |50 |40  |\n\n");
    printf("1. Aerobird\n");
    printf("2. Barraculla\n");
    printf("3. Chimpazilla\n");
    printf("4. Droconos\n");
    printf("5. Enigmammal\n");
    printf("6. Freezefox\n");
    printf("7. Gargantulla\n");
    printf("8. Zapping Bee\n");
    printf("9. Inksquid\n");
    printf("10. SeaPug\n\n");
    printf("Pilih Monster: ");
    scanf("%d",&p);
    srand(time(NULL));
    system("cls");
    switch(p)
    {
        case 1: AA(); break;
        case 2: BB(); break;
        case 3: CC(); break;
        case 4: DD(); break;
        case 5: EEE(); break;
        case 6: FF(); break;
        case 7: GG(); break;
        case 8: ZZ(); break;
        case 9: II(); break;
        case 10: SS(); break;
        default: return main(); break;
        break;
    }
    for(q=0;q<=250000000;q++);
    printf("   VS\n");
    for(q=0;q<=250000000;q++);
    ER:
    r=rand()%11;
    switch(r)
    {
        case 1: AA(); break;
        case 2: BB(); break;
        case 3: CC(); break;
        case 4: DD(); break;
        case 5: EEE(); break;
        case 6: FF(); break;
        case 7: GG(); break;
        case 8: ZZ(); break;
        case 9: II(); break;
        case 10: SS(); break;
        default: goto ER; break;
    }
    for(q=0;q<=250000000;q++);
    system("cls");
    gotoxy(25,5);
    printf("BEGIN!!!");
    for(q=0;q<=250000000;q++);
    while (HEA>0&&hea>0)
    {
        system("cls");
        printf("\t\t<MONSTER COMBAT>");
        gotoxy(0,2);
        switch(p)
        {
            case 1: AA(); break;
            case 2: BB(); break;
            case 3: CC(); break;
            case 4: DD(); break;
            case 5: EEE(); break;
            case 6: FF(); break;
            case 7: GG(); break;
            case 8: ZZ(); break;
            case 9: II(); break;
            case 10: SS(); break;
            break;
        }
        gotoxy(0,3);
        printf("Health : %d",HEA);
        switch(p)
        {
            case 1: A(); ATT=50; DEF=30; break;
            case 2: B(); ATT=60; DEF=40;break;
            case 3: C(); ATT=60; DEF=10;break;
            case 4: D(); ATT=50; DEF=20;break;
            case 5: E(); ATT=10; DEF=90;break;
            case 6: F(); ATT=40; DEF=60;break;
            case 7: G(); ATT=20; DEF=40;break;
            case 8: Z(); ATT=70; DEF=10;break;
            case 9: I(); ATT=30; DEF=50;break;
            case 10: S(); ATT=20; DEF=40;break;
            break;
        }
        gotoxy(0,7);
        switch(r)
        {
            case 1: AA(); break;
            case 2: BB(); break;
            case 3: CC(); break;
            case 4: DD(); break;
            case 5: EEE(); break;
            case 6: FF(); break;
            case 7: GG(); break;
            case 8: ZZ(); break;
            case 9: II(); break;
            case 10: SS(); break;
            break;
        }
        gotoxy(0,8);
        printf("Health : %d",hea);
        switch(r)
        {
            case 1: EA(); att=50; def=30; break;
            case 2: EB(); att=60; def=40;break;
            case 3: EC(); att=60; def=10;break;
            case 4: ED(); att=50; def=20;break;
            case 5: EE(); att=10; def=90;break;
            case 6: EF(); att=40; def=60;break;
            case 7: EG(); att=20; def=40;break;
            case 8: EZ(); att=70; def=10;break;
            case 9: EI(); att=30; def=50;break;
            case 10: ES(); att=20; def=40;break;
            break;
        }
        gotoxy(0,12);
        printf("ATTACK/DEFENDS (1/0)");
        scanf("%d",&pl);
        gotoxy(0,12);
        printf("                     ");
        gotoxy(0,12);
        {

        }
        rn=rand()%2;
        if(pl==0&&rn==0)
            {
                switch(p)
                {
                    case 1:
                        {
                            printf("Aerobird Has Defended\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Has Defended\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Has Defended\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Has Defended\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Has Defended\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Has Defended\n");
                        };break;
                    case 7:
                        {
                            printf("Gargantulla Has Defended\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Has Defended\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Has Defended\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Has Defended\n");
                        };break;
                }
                for(q=0;q<=250000000;q++);
                {

                }
                switch(r)
                {
                    case 1:
                        {
                            printf("Aerobird Has Defended\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Has Defended\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Has Defended\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Has Defended\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Has Defended\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Has Defended\n");
                        };break;
                    case 7:
                        {
                            printf("Gargantulla Has Defended\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Has Defended\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Has Defended\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Has Defended\n");
                        };break;
                }
            }
        else if(pl==1&&rn==0)
            {
                switch(p)
                {
                    case 1:
                        {
                            printf("Aerobird Does Airwave Attack\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Does Fangtooth Attack\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Does Boulder Attack\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Does Firebreath Attack\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Does Confusion Attack\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Does Blizzard Attack\n");
                        };break;
                    case 7:
                        {
                            printf("Garganrulla Does Sticky Web Attack\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Does Zap Attack\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Does ink Squirt Attack\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Does Water Splash Attack\n");
                        };break;
                }
                for(q=0;q<=250000000;q++);
                {

                }
                switch(r)
                {
                    case 1:
                        {
                            printf("Aerobird Has Defended\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Has Defended\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Has Defended\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Has Defended\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Has Defended\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Has Defended\n");
                        };break;
                    case 7:
                        {
                            printf("Gargantulla Has Defended\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Has Defended\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Has Defended\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Has Defended\n");
                        };break;
                }
                def=def-ATT;
                for(q=0;q<=250000000;q++);
                {

                }
                if(def<=0)
                hea=hea+def;
                if(hea<=0)
                hea=0;
            }

        else if(pl==0&&rn==1)
            {
                switch(p)
                {
                    case 1:
                        {
                            printf("Aerobird Has Defended\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Has Defended\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Has Defended\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Has Defended\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Has Defended\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Has Defended\n");
                        };break;
                    case 7:
                        {
                            printf("Gargantulla Has Defended\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Has Defended\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Has Defended\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Has Defended\n");
                        };break;
                }
                DEF=DEF-att;
                for(q=0;q<=250000000;q++);
                {

                }
                switch(r)
                {
                    case 1:
                        {
                            printf("Aerobird Does Airwave Attack\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Does Fangtooth Attack\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Does Boulder Attack\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Does Firebreath Attack\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Does Confusion Attack\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Does Blizzard Attack\n");
                        };break;
                    case 7:
                        {
                            printf("Garganrulla Does Sticky Web Attack\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Does Zap Attack\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Does ink Squirt Attack\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Does Water Splash Attack\n");
                        };break;
                }
                if(DEF<=0)
                HEA=HEA+DEF;
                if(HEA<=0)
                HEA=0;
            }
        else
            {
                switch(p)
                {
                    case 1:
                        {
                            printf("Aerobird Does Airwave Attack\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Does Fangtooth Attack\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Does Boulder Attack\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Does Firebreath Attack\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Does Confusion Attack\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Does Blizzard Attack\n");
                        };break;
                    case 7:
                        {
                            printf("Garganrulla Does Sticky Web Attack\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Does Zap Attack\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Does ink Squirt Attack\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Does Water Splash Attack\n");
                        };break;
                }
                hea=hea-ATT;
                for(q=0;q<=250000000;q++);
                {

                }
                switch(r)
                {
                    case 1:
                        {
                            printf("Aerobird Does Airwave Attack\n");
                        };break;
                    case 2:
                        {
                            printf("Barraculla Does Fangtooth Attack\n");
                        };break;
                    case 3:
                        {
                            printf("Chimpazilla Does Boulder Attack\n");
                        };break;
                    case 4:
                        {
                            printf("Droconos Does Firebreath Attack\n");
                        };break;
                    case 5:
                        {
                            printf("Enigmammal Does Confusion Attack\n");
                        };break;
                    case 6:
                        {
                            printf("Freezefox Does Blizzard Attack\n");
                        };break;
                    case 7:
                        {
                            printf("Garganrulla Does Sticky Web Attack\n");
                        };break;
                    case 8:
                        {
                            printf("Zapping Bee Does Zap Attack\n");
                        };break;
                    case 9:
                        {
                            printf("Inksquid Does ink Squirt Attack\n");
                        };break;
                    case 10:
                        {
                            printf("Seapug Does Water Splash Attack\n");
                        };break;
                }
                HEA=HEA-att;
                if(HEA<=0)
                HEA=0;
                if(hea<=0)
                hea=0;
            }
        for(q=0;q<=250000000;q++);
        gotoxy(9,3);
        printf("%d    ",HEA);
        gotoxy(9,3);
        printf("%d    ",HEA);
        gotoxy(9,8);
        printf("%d    ",hea);
        gotoxy(9,8);
        printf("%d    ",hea);
        gotoxy(0,14);
        for(q=0;q<=250000000;q++);
    }
    system("cls");
    if(hea<HEA)
    printf("YOU WIN!!\n");
    else if(HEA<hea)
    printf("YOU LOSE!!\n");
    else
    printf("TIE!!\n");
    getch();
    system("cls");
    printf("Replay? (1/0)");
    scanf("%d",&pil);
    if(pil==1)
    {
        return main();
    }
    return 0;
}
