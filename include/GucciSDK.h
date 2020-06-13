#ifndef GUCCISDK_H
#define GUCCISDK_H

enum Buttons
{
    BUTTON_A = 0,
    BUTTON_B,
    BUTTON_SELECT,
    BUTTON_START,
    BUTTON_RIGHT,
    BUTTON_LEFT,
    BUTTON_UP,
    BUTTON_DOWN,
    BUTTON_R,
    BUTTON_L
};

int isButtonPressed (enum Buttons button);

#endif