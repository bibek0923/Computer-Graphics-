//shearing of rectangle
#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initwindow(800, 600, "Rectangle Shearing");

    // Original rectangle coordinates
    int left = 100, top = 100, right = 200, bottom = 200;

    // Draw the original rectangle
    rectangle(left, top, right, bottom);

    // Set color for the sheared rectangle
    setcolor(RED);

    // Shearing factors
    float shear_x = 0.5; // Shear factor in the x-direction
    float shear_y = 0.2; // Shear factor in the y-direction

    // Calculate the new coordinates after shearing
    int new_left = round(left + shear_x * top);
    int new_top = top;
    int new_right = round(right + shear_x * bottom);
    int new_bottom = bottom;

    // Draw the sheared rectangle
    rectangle(new_left, new_top, new_right, new_bottom);

    getch();
    closegraph();
    return 0;
}