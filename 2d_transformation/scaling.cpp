//scaling of rectangle

#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initwindow(800, 600, "Rectangle Scaling");

    // Original rectangle coordinates
    int left = 100, top = 100, right = 200, bottom = 200;

    // Draw the original rectangle
    rectangle(left, top, right, bottom);

    // Set color for the scaled rectangle
    setcolor(RED);

    // Scaling factors
    float scale_x = 1.5; // Scale factor in the x-direction
    float scale_y = 0.5; // Scale factor in the y-direction

    // Calculate the new coordinates after scaling
    int new_left = round(left * scale_x);
    int new_top = round(top * scale_y);
    int new_right = round(right * scale_x);
    int new_bottom = round(bottom * scale_y);

    // Draw the scaled rectangle
    rectangle(new_left, new_top, new_right, new_bottom);

    getch();
    closegraph();
    return 0;
}