#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofSetFrameRate(8);

    haveNextNxtGaussian = false;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float xloc = gaussian();

    float sd = 60;
    float mean = ofGetWidth()/2;

    xloc = (xloc * sd) + mean;

    ofSetColor(0, 40);
    ofDrawCircle(xloc, ofGetHeight()/2, 8, 8);
    
}

//Gaussian algorithm from http://github.com/andyr0id/ofxGaussian
float ofApp::gaussian()
{
    if (haveNextNxtGaussian)
    {
        haveNextNxtGaussian = false;
        return nextNxtGaussian;
    }
    else
    {
        float v1, v2, s = 0;
        while (s >= 1 || s == 0)
        {
            v1 = 2 * ofRandomf() -1;
            v2 = 2 * ofRandomf() -1;
            s = v1 * v1 + v2 * v2;
        }
        float multiplier = sqrt(-2 * log(s)/s);
        nextNxtGaussian = v2 * multiplier;
        haveNextNxtGaussian = true;

        return v1 * multiplier;
    }
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
