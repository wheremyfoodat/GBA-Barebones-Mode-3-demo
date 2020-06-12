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
    *(unsigned int*)0x04000000 = 0x0103; //Set DISPCNT

    fillLinesWithColor (0x1F, 0, 26);
    fillLinesWithColor (0xFA60, 27, 54);
    fillLinesWithColor (0xFFA0, 55, 81);
    fillLinesWithColor (0x3E0, 82, 108);
    fillLinesWithColor (0x7C00, 109, 135);
    fillLinesWithColor (0x981F, 136, 159);
}
