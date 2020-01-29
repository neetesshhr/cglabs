#include<graphics.h>
int main()
{
    int gd = DETECT , gm ;
    initgraph(&gd,&gm,NULL);
    setcolor(GREEN);
    line(0,0,getmaxx(),getmaxy());
    getch();
    closegraph();
    return 0;
}