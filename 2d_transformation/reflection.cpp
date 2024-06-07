//reflection of rectangle
#include <graphics.h>
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int gd = DETECT, gm;
    initwindow(800, 600, "Rectangle Reflection");

    // Original rectangle coordinates
    int left = 100, top = 100, right = 200, bottom = 200;

    // Draw the original rectangle
    rectangle(left, top, right, bottom);

    // Set color for the reflected rectangle
    setcolor(RED);

    // Axis of reflection (0 for x-axis, 1 for y-axis)
    int axis = 0; // Reflection across the x-axis

    // Calculate the new coordinates after reflection
    int new_left, new_top, new_right, new_bottom;
    if (axis == 0) { // Reflection across x-axis
        new_left = left;
        new_top = 600 - bottom;
        new_right = right;
        new_bottom = 600 - top;
    } else { // Reflection across y-axis
        new_left = 800 - right;
        new_top = top;
        new_right = 800 - left;
        new_bottom = bottom;
    }

    // Draw the reflected rectangle
    rectangle(new_left, new_top, new_right, new_bottom);

    getch();
    closegraph();
    return 0;
}