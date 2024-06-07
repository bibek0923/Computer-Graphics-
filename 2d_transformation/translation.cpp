//translation of a line
#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int gd = DETECT , gm;
	initwindow(500,500,"circle algo");
	int x1=100;
	int y1=200;
	int x2=400;
	int y2=400;
	delay(100);
line(x1,y1,x2,y2);
setcolor(RED);
//translation
int tx=20;
int ty=30;
 x1 += tx;
 x2 += tx;
y1 += ty;
y2 += ty;
line(x1,y1,x2,y2);
	getch();
	closegraph();
	return 0;
