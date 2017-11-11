#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
     int gd=DETECT,gm;
	 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	 setcolor(4);
	 ellipse(300,200,0,360,100,150);
	 ellipse(270,135,0,360,25,15);
     ellipse(330,135,0,360,25,15);
     ellipse(300,235,0,360,25,15);
setfillstyle(1,YELLOW);
floodfill(300,200,4);
setcolor(WHITE);
settextstyle(7,0,4);
outtextxy(230,360,"__FACE__");
getch();
cleardevice();
closegraph();
}