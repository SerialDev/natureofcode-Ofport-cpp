/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */
#include "motion.h"

motion::motion()
{
    location.set(ofGetWidth()/2, ofGetHeight()/2);
    velocity.set(0, 0);
    topSpeed = 6;
}

void motion::update()
{
    acceleration.set(ofRandom(-2, 2), ofRandom(-2, 2));
    
    velocity += acceleration;
    velocity.limit(topSpeed);
    location += velocity;
}

void motion::display()
{
    ofSetColor(150);
    ofDrawCircle(location.x, location.y, 24);
}

void motion::checkEdges()
{
    if (location.x > ofGetWidth())
    {
        location.x = 0;
    }
    else if (location.x < 0)
    {
        location.x = ofGetWidth();
    }

    if (location.y > ofGetHeight())
    {
        location.y = 0;
    }
    else if (location.y < 0)
    {
        location.y = ofGetHeight();
    }
}
