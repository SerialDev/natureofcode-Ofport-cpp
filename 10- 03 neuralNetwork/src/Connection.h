#if !defined(CONNECTION_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define CONNECTION_H

class Neuron;

#include "Neuron.h"
#include "ofMain.h"

class Connection
{
private:
    Neuron* a;
    Neuron* b;
    float weight;

    bool sending = false;
    ofPoint sender;
    float output;
public:
    Connection() {};
    Connection(Neuron* from, Neuron* to, float w);
    void display();
    void feedforward(float val);
    void update();
};

#endif
