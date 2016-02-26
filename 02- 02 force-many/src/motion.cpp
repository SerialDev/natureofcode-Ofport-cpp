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
    acceleration.set(0,0);
    mass = 1;
}

void motion::update()
{
    velocity += acceleration;
    location += velocity;
    acceleration *= 0;
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
        location.x = ofGetWidth();
        velocity.x *= -1;
    }
    else if (location.x < 0)
    {
        velocity.x *= -1;
        location.x = 0;
    }

    if (location.y > ofGetHeight())
    {
        velocity.y *= -1;
        location.y = ofGetHeight();
    }
}

void motion::applyForce(ofPoint force)
{
    ofPoint f;
    f = force/mass;
    acceleration += f;
}
