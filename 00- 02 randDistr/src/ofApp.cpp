#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255);
    boxWidth = ofGetWidth()/ARRAYSIZE;
}

//--------------------------------------------------------------
void ofApp::update(){
    int index = int(ofRandom(ARRAYSIZE));
    speed = ofMap(mouseX, 0, ofGetWidth(), 1, 30, true);
    randomCounts[index] += speed;
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i < ARRAYSIZE; ++i)
    {
        ofSetColor(0);
        ofDrawRectangle(i*boxWidth, ofGetHeight()-randomCounts[i],
                        boxWidth-1, randomCounts[i]);
        if (randomCounts[i] > ofGetHeight())
        {
            ofSetColor(255, 255, 0);
            ofDrawBitmapString("winner is " + ofToString(i), 300, 300);
            // std::cout << "winner is" << i << std::end;
            reset();
        }
    }
    ofDrawBitmapStringHighlight("speed = " + ofToString(speed), 10, 20);
}

void ofApp::reset()
{
    for (int i = 0; i < ARRAYSIZE; ++i)
    {
        randomCounts[i] = 0;
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
