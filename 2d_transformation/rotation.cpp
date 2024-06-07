//rotation of line
#include<graphics.h>
#include<iostream>
#include<cmath>
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

float angle_deg = 45;
	
float angle_rad = angle_deg * (M_PI / 180.0);
	
	

int x1_origin = x1 - 250;  // Half the width of the window
    int y1_origin = 250 - y1;  // Half the height of the window
    int x2_origin = x2 - 250;
    int y2_origin = 250 - y2;

    // Rotate the coordinates around the origin
    int new_x1_origin = round(x1_origin * cos(angle_rad) - y1_origin * sin(angle_rad));
    int new_y1_origin = round(x1_origin * sin(angle_rad) + y1_origin * cos(angle_rad));
    int new_x2_origin = round(x2_origin * cos(angle_rad) - y2_origin * sin(angle_rad));
    int new_y2_origin = round(x2_origin * sin(angle_rad) + y2_origin * cos(angle_rad));

    // Translate coordinates back to original position
    int new_x1 = new_x1_origin + 250;
    int new_y1 = 250 - new_y1_origin;
    int new_x2 = new_x2_origin + 250;
    int new_y2 = 250 - new_y2_origin;

    // Draw the rotated line
    line(new_x1, new_y1, new_x2, new_y2);
	
	getch();
	
	closegraph();
	return 0;
	
}