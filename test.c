#include <graphics.h>

int main() {
    // Initialize the graphics system
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the rectangle body of the house
    rectangle(150, 200, 450, 400);
    setfillstyle(SOLID_FILL, LIGHTBLUE);
    floodfill(151, 201, WHITE);

    // Draw the roof of the house
    line(150, 200, 300, 100);
    line(450, 200, 300, 100);
    line(150, 200, 450, 200);
    setfillstyle(SOLID_FILL, RED);
    floodfill(300, 150, WHITE);

    // Draw the door
    rectangle(250, 300, 350, 400);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(251, 301, WHITE);

    // Draw the windows
    rectangle(180, 230, 230, 280);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(181, 231, WHITE);

    rectangle(370, 230, 420, 280);
    setfillstyle(SOLID_FILL, YELLOW);
    floodfill(371, 231, WHITE);

    // Pause to view the result
    getch();

    // Close the graphics mode
    closegraph();
    return 0;
}
