/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */
#include "motion.h"

motion::motion()
{
    location.set(ofRandom(ofGetWidth()), ofRandom(ofGetHeight()));
    velocity.set(0, 0);
    topSpeed = 5;
}

void motion::update(int x, int y)
{
    ofPoint mouse(x, y);
    acceleration = mouse - location;

    acceleration.normalize();
    acceleration *= 2;
    
    velocity += acceleration;
    velocity.limit(topSpeed);
    location += velocity;
}

void motion::display()
{
    ofSetColor(150, 100);
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
