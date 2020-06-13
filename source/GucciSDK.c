#include "GucciSDK.h"

int isButtonPressed (enum Buttons button)
{
    unsigned short KEYINPUT = *(unsigned int*) 0x04000130;
    return !((KEYINPUT >> button) & 1);
}