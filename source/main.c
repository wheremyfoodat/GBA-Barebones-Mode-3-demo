#include "GucciSDK.h"

void fillLinesWithColor (unsigned short color, int startLine, int endLine)
{
    for (int y = startLine; y <= endLine; y++)
    {
        for (int x = 0; x <= 240; x++)
        {
            ((unsigned short*)0x06000000)[x+y*240] = color;
        }
    }
}

void drawLGBT()
{
    fillLinesWithColor (0x1F, 0, 26);
    fillLinesWithColor (0x029F, 27, 54);
    fillLinesWithColor (0x03FF, 55, 81);
    fillLinesWithColor (0x1224, 82, 108);
    fillLinesWithColor (0x7C00, 109, 135);
    fillLinesWithColor (0x4411, 136, 159);
}

void drawBi()
{
    fillLinesWithColor (0x401F, 0, 60);
    fillLinesWithColor (0x5134, 61, 98);
    fillLinesWithColor (0x7C00, 99, 159);
}

void drawAce()
{
    fillLinesWithColor (0, 0, 39);
    fillLinesWithColor (0x56B5, 40, 79);
    fillLinesWithColor (0xFFFF, 80, 119);
    fillLinesWithColor (0x4411, 120, 159);
}

int main()
{
    *(unsigned int*)0x04000000 = 0x0403; //Set DISPCNT
    drawLGBT();

    while(1) 
    {
        if (isButtonPressed(BUTTON_A))
            drawBi();

        else if (isButtonPressed(BUTTON_B))
            drawAce();

        else 
            drawLGBT();
    }

    return 1;
}
