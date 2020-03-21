#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
void puto(int);
void putx(int);
void play();
int check();
int enter(int,char);
char board[3][3];
int main(void)
{

   int gdriver = DETECT, gmode, errorcode;
   int xmax, ymax;


   initgraph(&gdriver, &gmode, "c:\\tc\\bgi\\");


   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }

   setcolor(LIGHTGRAY);
   xmax = getmaxx();
   ymax = getmaxy();


   rectangle(0, 0, xmax, ymax);

   setcolor(WHITE);
   rectangle(xmax/4,ymax/4,(xmax*3/4),(ymax*3/4));
   setfillstyle(SOLID_FILL,BROWN);
     floodfill((xmax/4)+10,(ymax/4)+10,WHITE);
     setfillstyle(SOLID_FILL,LIGHTGRAY);

   floodfill(10,10,WHITE);
   rectangle((xmax/4)+(((xmax*3/4)-(xmax/4))/3),(ymax/4)+(((ymax*3/4)-(ymax/4))/3),(xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)),(ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)));
   rectangle(xmax/4,ymax/4,(xmax/4)+(((xmax*3/4)-(xmax/4))/3),(ymax/4)+(((ymax*3/4)-(ymax/4))/3));
   rectangle((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)),(ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)),xmax*3/4,ymax*3/4);
   rectangle((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)),(ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)),xmax/4,ymax/4);
   rectangle(xmax*3/4,ymax*3/4,(xmax/4)+(((xmax*3/4)-(xmax/4))/3),(ymax/4)+(((ymax*3/4)-(ymax/4))/3));

   play();
   cleardevice();
   setcolor(GREEN);
   settextstyle(0,0,4);
   outtextxy((xmax/2)-150,(ymax/2)-50,"Thank you");
   settextstyle(0,0,1);outtextxy((xmax/2)+150,(ymax/2)+20,"Liju");
   /* clean up */
   getch();
   closegraph();
   return 0;
}

void puto(int s)
{
int x,y;
int xmax = getmaxx();
int ymax = getmaxy();

switch(s)
{
case 1:
x=((xmax/4)+((xmax/4)+(((xmax*3/4)-(xmax/4))/3)))/2;
y=((ymax/4)+((ymax/4)+(((ymax*3/4)-(ymax/4))/3)))/2;
circle(x,y,25);
break;
case 2:
x=((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=(ymax/4)+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);

break;
case 3:
x=((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=(ymax/4)+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);

break;
case 4:
x=(xmax/4)+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);

break;
case 5:
x=(((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2;
y=(((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2;
circle(x,y,25);
break;
case 6:
x=((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);

break;
case 7:
x=(xmax/4)+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);
break;
case 8:
x=((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
circle(x,y,25);

break;
case 9:
x=(((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+((xmax*3/4)))/2;
y=(((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+((ymax*3/4)))/2;
circle(x,y,25);
break;
default:
break;
}
}

void putx(int s)
{
int x,y;
int xmax = getmaxx();
int ymax = getmaxy();

switch(s)
{
case 1:
x=((xmax/4)+((xmax/4)+(((xmax*3/4)-(xmax/4))/3)))/2;
y=((ymax/4)+((ymax/4)+(((ymax*3/4)-(ymax/4))/3)))/2;
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);
break;
case 2:
x=((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=(ymax/4)+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);


break;
case 3:
x=((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=(ymax/4)+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);


break;
case 4:
x=(xmax/4)+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);

break;
case 5:
x=(((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2;
y=(((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2;
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);

break;
case 6:
x=((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);


break;
case 7:
x=(xmax/4)+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);

break;
case 8:
x=((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+(((((xmax/4)+(((xmax*3/4)-(xmax/4))/3))+((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3))))/2)-((xmax/4)+(((xmax*3/4)-(xmax/4))/3)));
y=((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+(((((ymax/4)+(((ymax*3/4)-(ymax/4))/3))+((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3))))/2)-((ymax/4)+(((ymax*3/4)-(ymax/4))/3)));
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);


break;
case 9:
x=(((xmax/4)+2*((((xmax*3/4)-(xmax/4))/3)))+((xmax*3/4)))/2;
y=(((ymax/4)+2*((((ymax*3/4)-(ymax/4))/3)))+((ymax*3/4)))/2;
line(x,y,x-25,y-25);
line(x,y,x+25,y+25);
line(x,y,x+25,y-25);
line(x,y,x-25,y+25);

break;
default:
break;
}
}

void play()
{
char w;int n1,n,i,flag=1,win,x,y,j;

for(x=0;x<3;x++)
{
for(y=0;y<3;y++)
{
board[x][y]='.';
}
}
for(i=1;;i++)
{
w=getch();
n1=w;
n=n1-48;

 if((n<=9)&&(n>=1))
 {	if(flag==0)
	{

	if(enter(n,'o'))
	{
	puto(n);
	win=check();
	if(win)break;
	flag=1;
	}
	}
	else
	{

	if(enter(n,'x'))
	{
	putx(n);
	win=check();
	if(win)break;
	flag=0;
	}
	}
 }
}
if (win==1) {setcolor(GREEN);settextstyle(0,0,6);outtextxy(20,20,"X won");}
if(win==2)  {setcolor(GREEN);settextstyle(0,0,6);outtextxy(20,20,"O won");}
if(win==3)  {setcolor(RED);settextstyle(0,0,6);outtextxy(20,20,"Match Draw");}
getch();


}

int enter(int n,char s)
{
int v;
switch(n)
{
case 1:
v=00;
break;
case 2:
v=01;
break;
case 3:
v=02;
break;
case 4:
v=10;
break;
case 5:
v=11;
break;
case 6:
v=12;
break;
case 7:
v=20;
break;
case 8:
v=21;
break;
case 9:
v=22;
break;
}
if(board[(v/10)][(v%10)]=='.')
{
board[(v/10)][(v%10)]=s;
return 1;
}
 return 0;
}
int check()
{
int i,j,x,y,count=0,win=0;
for(i=0;i<=2;i++)
{
x=0;y=0;
for(j=0;j<=2;j++)
{
if(board[i][j]=='x')
{
x++;
count++;
}
if(board[i][j]=='o')
y++;
}
if((x==3)&&(win!=1))
{
return 1;
//win=1;
}
if((y==3)&&(win!=1))
{
return 2;
//win=1;
}
}



for(i=0;i<=2;i++)
{
x=0;y=0;
for(j=0;j<=2;j++)
{
if(board[j][i]=='x')
x++;
if(board[j][i]=='o')
y++;
}
if((x==3)&&(win!=1))
{
return 1;
//win=1;
}
if((y==3)&&(win!=1))
{
return 2;
//win=1;
}
}


x=0;y=0;
for(i=0,j=2;i<=2;i++,j--)
{
if(board[i][j]=='x')
x++;
if(board[i][j]=='o')
y++;
}
if((x==3)&&(win!=1))
{
return 1;
//win=1;
}
if((y==3)&&(win!=1))
{
return 2;
//win=1;
}


x=0;y=0;
for(i=0;i<=2;i++)
{
if(board[i][i]=='x')
x++;
if(board[i][i]=='o')
y++;
}
if((x==3)&&(win!=1))
{
return 1;
//win=1;
}
if((y==3)&&(win!=1))
{
return 2;
//win=1;
}
if((count==5)&&(win!=1))
{
return 3;
//win=1;
}
return 0;
}