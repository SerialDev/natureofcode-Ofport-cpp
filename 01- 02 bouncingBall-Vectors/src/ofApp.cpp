#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();
    ofEnableAlphaBlending();

    ofBackground(255);
    ofSetBackgroundAuto(false);

    ofSetFrameRate(60);
    
    location.set(100, 100);
    velocity.set(2.5, 5);
}

//--------------------------------------------------------------
void ofApp::update(){
    // Add current speed to the location
    location += velocity;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofEnableSmoothing();
    ofSetColor(255, 10);
    ofDrawRectangle(0, 0, ofGetWidth(), ofGetHeight());

    if((location.x > ofGetWidth()) || (location.x < 0))
    {
        velocity.x *= -1;
    }
    if((location.y > ofGetHeight()) || (location.y < 0))
    {
        velocity.y *= -1;
    }

    // Display circle at x location
    ofSetColor(0);
    ofDrawCircle(location.x, location.y, 8);
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
