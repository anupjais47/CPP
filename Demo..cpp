
#include <stdio.h>
#include <conio.h>
#include<graphics.h>
void main()
{
    int gd = DETECT, gm;    /*initiate graphics mode*/
    // int gd = found, gm;    /*initiate graphics mode*/
    intgraph(&gd, &gm, ""); /*initiate graphics driver & mode*/
    circle(200, 200, 100);  /*To draw a circle*/
    ellipse(450, 200, 0, 360, 150, 100);
    outtextxy(175, 200, "circle");
    outtextxy(425, 200, "ellipse");
    getch();
}
