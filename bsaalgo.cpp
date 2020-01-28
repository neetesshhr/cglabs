#include<graphics.h>
#include<iostream>
using namespace std ;
int main()
{
    int gd = DETECT , gm ,x1,y1,x2,y2,p,dx,dy;
    initgraph(&gd,&gm,NULL);
    cout<<"Enter x1,y1 & x2,y2 : ";
    cin>>x1>>y1>>x2>>y2;
    dx = x2 - x1;
    dy = y2 - y1;
    p = 2*dy - dx ;
    while(y1<=y2)
    {
        if(p<0)
        {
            p = p + 2*dy ;
            putpixel(x1,y1,RED);
        }
        else
        {
            p = p + 2*dy -2*dy;
            y1++;
            putpixel(x1,y1,RED);
        }
        x1++;
        
    }
    getch();
    closegraph();
    return 0;
}