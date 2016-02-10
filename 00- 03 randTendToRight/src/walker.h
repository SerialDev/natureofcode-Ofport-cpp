#if !defined(WALKER_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   $Creator: Andres Mariscal $
   $Notice: (C) Copyright 2015 Andres Mariscal. All Rights Reserved. $
   ======================================================================== */

#define WALKER_H
#pragma once
#include"ofMain.h"

class walker
{
public:
    walker();

    void update();
    void draw();

    int constrain (int, int, int);
    int overflow (int, int, int);

    int x, y, scale {};
};
#endif
