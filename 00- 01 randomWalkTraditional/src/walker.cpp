/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Andres Mariscal $
   $Notice: (C) Copyright 2015 Andres Mariscal. All Rights Reserved. $
   ======================================================================== */
#include "walker.h"

walker::walker()
{
    x = 0;
    y = 0;
    scale = 20;
}

void walker::update()
{
    int choice = int(ofRandom(4));
    cout << choice << endl;

    if (choice == 0) {++x;}
    else if (choice == 1) {--x;}
    else if (choice == 2) {++y;}
    else {--y;}

    int rangeWidth = (ofGetWidth()/2) / scale;
    int rangeHeight = (ofGetHeight()/2) / scale;

    x = constrain(x, -rangeWidth, rangeWidth);
    x = constrain(x, -rangeHeight, rangeHeight);
}

void walker::draw()
{
    ofSetColor(0, 40);
    ofDrawRectangle(x, y, 1, 1);
}

int walker::constrain(int input, int min, int max)
{
    return (input < min) ? min : ((input > max) ? max : input);
}
