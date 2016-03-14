#if !defined(NETWORK_H)
/* ========================================================================
   $File: $
   $Date: $
   $Revision: $
   ======================================================================== */

#define NETWORK_H
#include "Connection.h"
#include "Neuron.h"
#include "ofMain.h"
#include <vector>

class Network
{
private:
    vector<Neuron*> neurons;
    ofPoint location;

public:
    Network(){};
    Network(float x, float y);
    void addNeuron(Neuron* n);
    void display();
    void connect(Neuron* a, Neuron* b);
    void feedforward(float input);
    void update();
};
#endif
