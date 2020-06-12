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

int main()
{
    *(unsigned int*)0x04000000 = 0x0403; //Set DISPCNT

    fillLinesWithColor (0x1F, 0, 26);
    fillLinesWithColor (0x029F, 27, 54);
    fillLinesWithColor (0x03FF, 55, 81);
    fillLinesWithColor (0x1224, 82, 108);
    fillLinesWithColor (0x7C00, 109, 135);
    fillLinesWithColor (0x4411, 136, 159);

    while(1) {}
    return 1;
}
