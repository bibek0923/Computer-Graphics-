#include<graphics.h>
#include<iostream>
using namespace std;
int main(){
	int gd = DETECT , gm;
	initwindow(500,500,"circle algo");
	int x1,y1,r,p0,k=0,xc,yc;
	cout<<"enter radius, center "<<endl;
cin>>r>>xc>>yc;
	x1=0;
	y1=r;
	p0=1-r;
do{
	if(p0<0){
			x1=x1+1;
			y1=y1;
			p0=p0+2*x1+1;
		}	
		else {
			x1=x1+1;
			y1=y1-1;
			p0=p0+2*x1-2*y1+1;
		}
	
		putpixel(x1+xc,y1+yc,9);
		putpixel(x1+xc,-y1+yc,1);
		putpixel(-x1+xc,y1+yc,2);
		putpixel(-x1+xc,-y1+yc,3);
		
		putpixel(-y1+xc,x1+yc,4);
		putpixel(y1+xc,x1+yc,5);
	
		
		putpixel(y1+xc,-x1+yc,6);
		putpixel(-y1+xc,-x1+yc,7);
			
	}while(y1>=x1);
	getch();
	closegraph();
	return 0;
}