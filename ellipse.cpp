//c++ code  to draw  an ellipse
#include<graphics.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int gd = DETECT , gm;
	initwindow(500,500,"ellipse algo");
  int a,b,xc,yc,x1,y1,p1k,p2k;
  cout<<"enter a,b and center"<<endl;
  cin>>a>>b>>xc>>yc;
  x1=0;
  y1=b;
  //decision parameter for region one
  p1k=b*b-a*a*b+((a*a)/4);
  do{
  	if(p1k<0){
  		x1=x1+1;
  		y1=y1;
  		p1k=p1k+2*b*b*x1+b*b;
  		
	  }
	  else {
	  	x1=x1+1;
	  	y1=y1-1;
	  	
	  	p1k=p1k+2*b*b*x1-2*a*a*y1+b*b;
	  	
	  }
  	putpixel(x1+xc,y1+yc,9);
  		putpixel(x1+xc,-y1+yc,9);
  			putpixel(-x1+xc,y1+yc,9);
  				putpixel(-x1+xc,-y1+yc,9);
  	
  	delay(100);
  	
  }while(2*b*b*x1<=2*a*a*y1);
	

//decisioin parameter for region 2
p2k=pow(b,2)*pow((x1+0.5),2) + pow(a,2)*pow((y1-1),2) - pow(a,2)*pow(b,2);

do{
	if(p2k>=0){
		x1=x1;
		y1=y1-1;
		p2k=p2k-2*pow(a,2)*y1+pow(a,2);
	}
	else {
		x1=x1+1;
		y1=y1-1;
		p2k=p2k+2*pow(b,2)*x1-2*pow(a,2)*y1 + pow(a,2);
	}
	
		putpixel(x1+xc,y1+yc,9);
		putpixel(-x1+xc,y1+yc,9);
		putpixel(x1+xc,-y1+yc,9);
		putpixel(-x1+xc,-y1+yc,9);
		
	
	
}while(y1!=0);
	
	getch();
	closegraph();
	return 0;
}