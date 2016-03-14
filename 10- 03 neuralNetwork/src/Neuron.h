#if !defined(NEURON_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define NEURON_H
#include "Connection.h"
#include "ofMain.h"
#include <vector>

class Connection;

class Neuron
{
private:
    ofPoint location;
    vector<Connection> connections;
    float sum = 0;
    int fireFrame = 0;

public:
    Neuron(){};
    Neuron(float x, float y);
    void display();
    void addConnection(Connection c);
    ofPoint getLocation() {return location;};
    void feedforward(float input);
    void fire();
    void update();
    
};
#endif
