#include "ofApp.h"

using namespace std;

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofSetBackgroundAuto(false);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    ofBackground(0,0,0);
    ofSetFrameRate(60);
    
    pos[0].x = 100;
    pos[0].y = 100;
    
    pos[1].x = 300;
    pos[1].y = 100;
    
    pos[2].x = 300;
    pos[2].y = 300;
    
    pos[3].x = 100;
    pos[3].y = 300;
    
    pos[4].x = 100;
    pos[4].y = 100;
    
    speed[1].y  = 0.1;
    speed[2].x  = 0.2;
    speed[3].y  = 0.1;
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    pos[0].x += speed[0].x;
    speed[0].x = (pos[1].x - pos[0].x)/100;
    
    if(speed[0].x < 0.1){
        pos[1].y += speed[1].y;
        speed[1].y = (pos[2].y - pos[1].y)/100;
    }
    
    if(speed[1].y < 0.1){
        pos[2].x += speed[2].x;
        speed[2].x = (pos[3].x - pos[2].x)/100;
    }
    
    if(speed[2].x < 0.1){
        pos[3].y += speed[3].y;
        speed[3].y = (pos[4].y - pos[3].y)/100;
    }

    

    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,255,255);
    ofDrawCircle(pos[0].x, pos[0].y , 15);
    
    if(speed[0].x < 0.1){
        ofDrawCircle(pos[1].x, pos[1].y , 15);
    }
    
    if(speed[1].y < 0.1){
        ofDrawCircle(pos[2].x, pos[2].y , 15);
    }
    
    if(speed[2].x < 0.1){
        ofDrawCircle(pos[3].x, pos[3].y , 15);
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
