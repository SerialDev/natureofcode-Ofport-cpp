#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    ofSetFrameRate(60);
    ofSetPolyMode(OF_POLY_WINDING_NONZERO);

    glEnable(GL_DEPTH_TEST);

    land = landscape(40, 800, 400);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    land.update();
    float speed = ofMap(42, 0, ofGetWidth(), 0.002, 0.15, true);
    theta += speed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2, -160);
        ofRotateX(ofRadToDeg(PI/3));
        ofRotateZ(ofRadToDeg(theta));
        land.draw();
    ofPopMatrix();
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
