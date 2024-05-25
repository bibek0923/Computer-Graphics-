#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int gd = DETECT , gm;
	initwindow(500,500,"circle algo");
	
	floodfill(200,300,WHITE);
	setfillstyle(SOLID_FILL,6);
	circle(50,50,50);
	floodfill(50,50,WHITE);
	
	getch();
	closegraph();
	return 0;
}