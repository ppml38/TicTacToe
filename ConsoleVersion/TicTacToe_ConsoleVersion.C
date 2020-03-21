#include<stdio.h>
#include<conio.h>
struct game
{
char bd[3][3];
int pl1;
int pl2;
int win;
int emp;
}gm;
void board();
void print();
void check();



void main()
{
int i,j;
gm.pl1=0;
gm.pl2=0;
gm.win=0;
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\aWELCOME");getch();clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\tDISPLAY EMPTY CELLS AS\n\t\t\t\t1.CELL NUMERS\n\t\t\t\t2.DOTS");
scanf("%d",&gm.emp);
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
gm.bd[i][j]='.';
}
board();
while(gm.win==0)
{
board();
print();
check();
}
clrscr();
printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\aGAME OVER");
getch();
}



void board()
{
int i,j;
clrscr();
for(i=0;i<=2;i++)
{
for(j=0;j<=2;j++)
{
if((gm.bd[i][j]=='.')&&(gm.emp==1))
printf("\t%d%d",i,j);
else
printf("\t%c",gm.bd[i][j]);
}
printf("\n");
printf("\n");
printf("\n");
printf("\n");
}
}




void print()
{
int add,c,r;

if(gm.pl1<=gm.pl2)
{
printf("\aPLAYER 1 :");
scanf("%d",&add);
c=add%10;
r=add/10;
if(gm.bd[r][c]=='.')
{
gm.bd[r][c]='X';
gm.pl1++;
}
else
{
printf("\t\t\a\a\aCANT PUT CHOOSE ANOTHER CELL");
getch();
}
}

else
{
printf("\aPLAYER 2 :");
scanf("%d",&add);
c=add%10;
r=add/10;
if(gm.bd[r][c]=='.')
{
gm.bd[r][c]='O';
gm.pl2++;
}
else
{
printf("\t\t\a\a\aCANT PUT CHOOSE ANOTHER CELL");
getch();
}
}
}

void check()
{
int i,j,x,y,count=0;
for(i=0;i<=2;i++)
{
x=0;y=0;
for(j=0;j<=2;j++)
{
if(gm.bd[i][j]=='X')
{
x++;
count++;
}
if(gm.bd[i][j]=='O')
y++;
}
if((x==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\a\PLAYER 1 WON");
getch();
gm.win=1;
}
if((y==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 2 WON");
getch();
gm.win=1;
}
}

for(i=0;i<=2;i++)
{
x=0;y=0;
for(j=0;j<=2;j++)
{
if(gm.bd[j][i]=='X')
x++;
if(gm.bd[j][i]=='O')
y++;
}
if((x==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 1 WON");
getch();
gm.win=1;
}
if((y==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 2 WON");
getch();
gm.win=1;
}
}
x=0;y=0;
for(i=0,j=2;i<=2;i++,j--)
{
if(gm.bd[i][j]=='X')
x++;
if(gm.bd[i][j]=='O')
y++;
}
if((x==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 1 WON");
getch();
gm.win=1;
}
if((y==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 2 WON");
getch();
gm.win=1;
}
x=0;y=0;
for(i=0;i<=2;i++)
{
if(gm.bd[i][i]=='X')
x++;
if(gm.bd[i][i]=='O')
y++;
}
if((x==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 1 WON");
getch();
gm.win=1;
}
if((y==3)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aPLAYER 2 WON");
getch();
gm.win=1;
}
if((count==5)&&(gm.win!=1))
{
board();
printf("\n\n\t\a\a\a\aMATCH DRAW");
getch();
gm.win=1;
}
}
