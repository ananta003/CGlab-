//DDA algorithm to draw line
#include <graphics.h>
#include <iostream>
#include <math.h>
#include<conio.h>
using namespace std;
main( )
{
    float x,y,x1,y1,x2,y2,dx,dy,step;

    cout<<"Enter the value of x1 and y1 : ";
    cin>>x1>>y1;
    cout<<"Enter the value of x2 and y2: ";
    cin>>x2>>y2;
    int i,gd=DETECT,gm;
    initgraph(&gd,&gm,(char *)"");
    dx=abs(x2-x1);
    dy=abs(y2-y1);
    if(dx>=dy)
    step=dx;
    else
    step=dy;
    dx=dx/step;
    dy=dy/step;
    x=x1;
    y=y1;
    i=1;
    while(i<=step)
    {
    putpixel(x,y,5);// 5 is for red color
    x=x+dx;
    y=y+dy;
    i=i+1;
    delay(100); //for visualization of line generation step by step
    }
    getch();
    closegraph();
}
