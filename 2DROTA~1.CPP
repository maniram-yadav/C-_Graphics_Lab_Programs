#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm;
float x1,y1,x2,y2,x3,y3,x4,y4,a,t,p,q,r,s;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("Enter coordinates of starting point:  ");
scanf("%f%f",&x1,&y1);
printf("Enter coordinates of ending point : ");
scanf("%f%f",&x2,&y2);
printf("Enter angle for rotation :  ");
scanf("%f",&a);
p=x1;
q=y1;
r=x2;
s=y2;
line(getmaxx()/2,0,getmaxx()/2,getmaxy());
line(0,getmaxy()/2,getmaxx(),getmaxy()/2);
x1=getmaxx()/2+x1;
y1=getmaxy()/2+y1;
x2=getmaxx()/2+x2;
y2=getmaxy()/2+y2;
setcolor(5);
line((int)x1,(int)y1,(int)x2,(int)y2);
outtextxy(x2+2,y2+2,"Original line");
t=a*(3.14/180);
x3=getmaxx()/2+(p*cos(t))-(q*sin(t));
y3=getmaxy()/2+(p*sin(t))+(q*cos(t));
x4=getmaxx()/2+(r*cos(t))-(s*sin(t));
y4=getmaxy()/2+(r*sin(t))+(s*cos(t));
setcolor(14);
line((int)x3,(int)y3,(int)x4,(int)y4);
outtextxy(x4+2,y4,"Line after rotation");
getch();
cleardevice();
closegraph();
}