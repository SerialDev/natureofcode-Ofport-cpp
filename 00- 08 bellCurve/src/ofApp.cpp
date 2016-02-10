#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofEnableSmoothing();
    ofBackground(255);
    heights.resize(ofGetWidth()); // zero vector
}

//--------------------------------------------------------------
void ofApp::update(){

}
// TODO(Andres): dynamic SD markers for both 2 SD and 1 SD
//--------------------------------------------------------------
void ofApp::draw(){
    float e = 2.71828183; // math e
    float m = 0; // default mean of 0
    float sd = ofMap(mouseX, 0, ofGetWidth(), 0.4, 2); // stdev based on MouseX

    for (int i = 0; i < heights.size(); ++i)
    {
        float xcoord = ofMap(i, 0, ofGetWidth(), -3, 3);
        float sq2pi = sqrtf(2*PI);
        float xmsq = -1 * (xcoord-m)*(xcoord-m); // -(x - mu)^2
        float sdsq = sd*sd; // variance: stdev^2
        heights[i] = (1/ (sd * sq2pi)) * (pow(e, (xmsq/sdsq)));// P(x)
            
    }

    ofSetColor(0);
    ofNoFill();

    ofBeginShape();
        for (int i = 0; i < heights.size(); ++i)
        {
            float x = i;
            float y = ofMap(heights[i], 0, 1, ofGetHeight()-2, 2);
            ofVertex(x, y);
        }
    ofEndShape();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
