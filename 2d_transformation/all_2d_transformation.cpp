//we can perform all the transformation using transformation matrix 
#include<graphics.h>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int gd = DETECT , gm;
	initwindow(500,500,"2d transformation");
	cout<<"enter coordinates"<<endl;
int x1,y1,x2,y2,x3,y3;
cin>>x1>>y1>>x2>>y2>>x3>>y3;
int x = getmaxx();
int y= getmaxy();
setcolor(GREEN);
line(0,y/2 , x,y/2);
line(x/2,0,x/2,y);
setcolor(WHITE);
line(x1+x/2 , y1+y/2 , x2+x/2 , y2+y/2);
line( x2+x/2 , y2+y/2 , x3+x/2 , y3+y/2);
line(  x3+x/2 , y3+y/2 , x1+x/2 , y1+y/2 );


int act_matrix[3][3];

act_matrix= {
{x1,x2,x3},
{y1,y2,y3},
{1,1,1}
};




int output_matrix [3][3];

int transformation_matrix[3][3];

//we can perform any transformation by entering any transformation martrix.

cout<<"enter transformation matrix "<<endl;
for(int i=0;i<3;i++){
	for ( int j=0;j<3;j++){
		cin>>transformation_matrix[i][j];
	}
}

 for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
        	output_matrix[i][j]=0;
            for (int k = 0; k < 3; k++) {
                output_matrix[i][j] += transformation_matrix[i][k] * act_matrix[k][j];
            }
        }
    }
setcolor(RED);
line(output_matrix[0][0]+x/2 ,output_matrix[1][0]+y/2 , output_matrix[0][1]+x/2 , output_matrix[1][1]+y/2 );
line( output_matrix[0][1]+x/2 , output_matrix[1][1]+y/2 , output_matrix[0][2]+x/2 , output_matrix[1][2]+y/2);
line(output_matrix[0][2]+x/2 , output_matrix[1][2]+y/2 , output_matrix[0][0]+x/2 ,output_matrix[1][0]+y/2 );

	getch();
	closegraph();
	return 0;
}
