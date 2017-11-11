#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<conio.h>
float round(float a);
void main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,steps,k;
float xincr,yincr,x,y,dx,dy;
initgraph(&gd,&gm,"c:\\turboc3\\BGI");
printf("\n\tEnter x1   y1 :");
scanf("%d%d",&x1,&y1);
printf("\n\tEnter x2   y2 :");
scanf("%d%d",&x2,&y2);
dx=x2-x1;
dy=y2-y1;
if(abs(dx)>abs(dy))
steps=abs(dx);
else
steps=abs(dy);
xincr=dx/steps;
yincr=dy/steps;
x=x1;
y=y1;
for(k=1;k<=steps;k++)
{
delay(100);
x+=xincr;
y+=yincr;
putpixel(round(x),round(y),WHITE);
}
settextstyle(4,0,4);
outtextxy(200,210,"DDA");
settextstyle(1,0,1);
outtextxy(x1+15,y1-5,"(x1,y1)");
outtextxy(x2+5,y2-15,"(x2,y2)");
getch();
closegraph();
}
float round(float a)
{
int b=a+0.5;
return b;
}