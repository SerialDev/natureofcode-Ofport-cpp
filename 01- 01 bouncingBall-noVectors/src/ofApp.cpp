#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofSetFrameRate(mouseY);
    x = 100;
    y = 100;
    xSpeed = 2.5;
    ySpeed = 2;
    ofBackground(255);
    

    
}

//--------------------------------------------------------------
void ofApp::update(){
    // update void is for maths and other calculations
    // Add the current speed of the location
    x = x + xSpeed;
    y = y + ySpeed;

    if ((x > ofGetWidth()) || (x < 0))
    {
        xSpeed = xSpeed * -1;
    }
    if ((y > ofGetHeight()) || (y < 0))
    {
        ySpeed = ySpeed * -1;
    }
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    // display circle at x location

    // Open frameworks lines and shapes are drawn separately
    ofSetColor(127);
    ofFill();
    ofDrawCircle(x, y, 24);

    // outline
    ofSetColor(0);
    ofNoFill();
    ofSetLineWidth(2);
    ofDrawCircle(x, y, 24);
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
