/line drawing algorithm using bla algorithm
#include<graphics.h>
#include<iostream>
using namespace std;

int main(){
	int gd=DETECT,gm;
    initwindow(500,500,"dda algorithm");
    int x1,y1,x2 , y2,p0,lx,ly,k,pk;
    cout<<"enter points"<<endl;
    cin>>x1>>y1>>x2>>y2;
    int dx= x2-x1;
    int dy=y2-y1;
    if(x2>x1){
       lx=1;
	}
	else {
	 lx=-1;
	}
	if(y2>y1){
		ly=1;
	} 
	else{
		ly=-1;
	}
	k=0;
	if(dx>dy){
	
	do {
		putpixel(x1,y1,10);
		pk = 2*dy-dx;
		if(pk<0){
			x1=x1+lx;
			y1=y1+ly;
			pk=pk+2*dy;
		}
		else{
				x1=x1+lx;
					y1=y1+lx;
					pk=pk+2*dy-2*dx;
		}
		k=k+1;
		delay(100);
	}while(k<=dx);
	}	
	else{
		do{
			putpixel(x1,y1,10);
			
			pk=2*dx-dy;
			if(pk<0){
			x1=x1;
			y1=y1+ly;
			pk=pk+2*dx;
		}
		else{
				x1=x1+lx;
					y1=y1+ly;
					pk=pk+2*dx-2*dy;
		}
				
		k=k+1;	
		delay(100);
		}while(k<=dy);
	}
	getch();
    closegraph();
    return 0;
}