//BSA algorithm to draw line
#include <iostream>
#include <conio.h>
#include <graphics.h>
using namespace std;
void bsline(int x,int y,int x2,int y2)
  {
    int dx,dy,p;
    dx=x2-x;
    dy=y2-y;
    p = 2 * (dy) - (dx);
    while(x <= x2)
    {
        if(p < 0)
    {
    x=x+1;
    y=y;
    p = p + 2 * (dy);
    }
    else
    {
    x=x+1;
    y=y+1;
    p = p + 2 * (dy - dx);
    }
    putpixel(x,y,RED);
    delay(10);
    }
}
int main()
{
    int x1,x2,y1,y2;
    int gd=DETECT,gm;
    cout<<"Enter the x1,y1,x2,y2 values : ";
    cin>>x1>>y1>>x2>>y2;
    initgraph(&gd,&gm,(char*)"");
    bsline(x1,y1,x2,y2);
    getch();
    closegraph();
}

