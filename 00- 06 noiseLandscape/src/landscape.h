#if !defined(LANDSCAPE_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define LANDSCAPE_H
#pragma once
#include "ofMain.h"

class landscape
{
public:
    int scl;
    int w, h;
    int rows, cols;
    float zoff;
    // float[][] z;

    vector< vector<float> > z; // 2D vector

    landscape();
    landscape(int _scl, int _w, int _h);
    void update();
    void draw();
};
#endif
