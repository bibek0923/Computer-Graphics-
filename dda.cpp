//line drawing algorithm using dda algorithm
#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
    int gd=DETECT,gm;
    initwindow(500,500,"dda algorithm");


int x1,y1,x2,y2,steps,x,y,k;
float xinc,yinc;

cout<<"enter points"<<endl;
cin>>x1>>y1>>x2>>y2;
int dx= x2-x1;
int dy=y2-y1;
if(abs(dx)>abs(dy)){
	steps=dx;
}
else{
	steps=dy;
}
xinc=dx/steps;
yinc=dy/steps;
x=x1;
y=y1;
k=0;
do{
	putpixel(x,y,9);
	x=x+xinc;
	y=y+yinc;
	delay(100);
}while(k<=steps);



    getch();
    closegraph();
    return 0;
}