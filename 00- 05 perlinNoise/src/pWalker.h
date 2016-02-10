#if !defined(PWALKER_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Andres Mariscal $
   $Notice: (C) Copyright 2015 Andres Mariscal. All Rights Reserved. $
   ======================================================================== */

#define PWALKER_H
#pragma once
#include "ofMain.h"

class walker
{
public:
    walker();

    void update();
    void draw();

    int constrain(int, int, int);
    int overflow(int, int, int);

    ofPoint pos;
    ofPoint noisePos;
    float noiseSpeed;

    int scale;
};

#endif
