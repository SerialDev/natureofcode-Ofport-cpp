#if !defined(MOTION_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define MOTION_H

#include "ofMain.h"

class motion
{
public:
    motion();
    void update();
    void display();
    void checkEdges();

    ofPoint location;
    ofPoint velocity;
};
#endif
