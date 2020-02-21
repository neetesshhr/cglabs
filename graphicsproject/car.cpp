#include<graphics.h>
#include<iostream>
 using namespace std;
 int main()
 {
     int gd = DETECT,gm;
     initgraph(&gd,&gm,NULL);
     line(275,200,425,200);
    //  line(200,250,200,300);
    //  line(500,250,500,300);
     line(350,200,350,300);
    //  line(150,250,550,250);
     line(200,250,275,200);
     line(425,200,500,250);
    //  line(150,300,550,300);
    //  line(550,250,550,300);
    //  line(150,250,150,300);
    rectangle(150,250,550,300);
     getch();
     closegraph();
     
     return 0;
 }