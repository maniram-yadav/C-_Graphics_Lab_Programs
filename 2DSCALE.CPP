#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int gd=DETECT,gm,a,b;
float x1,y1,x2,y2,sx,sy,x3,y3,x4,y4;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("Enter the starting point coordinates:  ");
scanf("%f %f",&x1,&y1);
printf("Enter the ending point coordinates:  ");
scanf("%f %f",&x2,&y2);
printf("Enter scaling factors sx,sy:  ");
scanf("%f%f",&sx,&sy);
setcolor(14);
a=(int)getmaxx()/2;
b=(int)getmaxy()/2;
line(a+(int)x1,b+(int)y1,a+(int)x2,b+(int)y2);
outtextxy(a+x2+2,b+y2+2,"Original line");
line(a,0,a,getmaxy());
line(0,b,getmaxx(),b);
x3=a+x1*sx;
y3=b+y1*sy;
x4=a+x2*sx;
y4=b+y2*sy;
setcolor(7);
line((int)x3,(int)y3,(int)x4,(int)y4);
outtextxy(a+x4+2,b+y4+2,"Line after scaling");
getch();
}