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
    void setup(float m, float x, float y);
    void applyForce(ofPoint force);
    void update();
    void display();
    void checkEdges();

    ofPoint location;
    ofPoint velocity;
    ofPoint acceleration;
    //float topSpeed;
    float mass;
};

#endif
