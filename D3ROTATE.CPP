#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
int x1,x2,y1,y2,mx,my,depth;
void draw();
void rotate();
void main()
{
int gd=DETECT,gm,c;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
printf("\n3D Transformation Rotating\n\n");
printf("\nEnter 1st top value(x1,y1):");
scanf("%d%d",&x1,&y1);
printf("Enter right bottom value(x2,y2):");
scanf("%d%d",&x2,&y2);
depth=(x2-x1)/4;
mx=(x1+x2)/2;
my=(y1+y2)/2;
draw();
getch();
rotate();
getch();
}
void draw()
{
bar3d(x1,y1,x2,y2,depth,1);
}
void rotate()
{
float t;
int a1,b1,a2,b2,dep;
printf("Enter the angle to rotate=");
scanf("%f",&t);
t=t*(3.14/180);
a2=abs((x1-x2)/2)+mx*cos(t);//((x1)*cos(t)-(y1)*sin(t));
a1=abs((x1-x2)/2)-mx*cos(t);//((x2)*cos(t)-(y2)*sin(t));
b2=abs((y1-y2)/2)+my*(sin(t));//((x1)*sin(t)-(y1)*cos(t));
b1=abs((y1-y2)/2)-my*sin(t);//((x2)*sin(t)-(y2)*cos(t));
if(a2>a1)
dep=(a2-a1)/4;
else
dep=(a1-a2)/4;
setcolor(5);
bar3d((int)a1,(int)b1,(int)a2,(int)b2,(int)dep,1);
getch();

}