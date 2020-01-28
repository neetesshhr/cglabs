#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
    int gd = DETECT,gm,x,y,x1,y1,x2,y2,steps,dx,dy,xinc,yinc,i;
    initgraph(&gd,&gm,NULL);
    cout<<"Enter x1,y1,x2,y2 :";
    cin>>x1>>y1>>x2>>y2;
    dx = x2 - x1 ;
    dy = y2 - y1 ; 
    x=x1;
    y =y1;
    if(dx>dy)
    {
        steps = dx ;
    }
    else
    {
        steps = dy ;
    }
    xinc = dx/steps;
    yinc = dy/steps;
    for(i= 0 ; i <= steps ; i++)
    {
        x = x + xinc;
        y = y + yinc;
        putpixel(x,y,RED);

    }
    getch();
    closegraph();
    return 0;
}