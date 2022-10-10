
#include<stdio.h>
#include<graphics.h>

int main(){
        int gd = DETECT, gm;
        int points[] = {320, 150, 440, 230,340,320, 150};
         initgraph(&gd, &gm, "C:\\TC\\BGI");
         drawpoly(4,points);
         getch();
         closegraph();
         return 0;


}
