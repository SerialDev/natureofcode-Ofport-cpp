#if !defined(MOTION_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define MOTION_H
#include "ofMain.h"

class motion{
public:
    motion();
    void update(int x, int y);
    void display();
    void checkEdges();

    ofPoint location;
    ofPoint velocity;
    ofPoint acceleration;
    float topSpeed;  
};

#endif
