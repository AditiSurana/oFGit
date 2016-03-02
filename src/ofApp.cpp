#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(200);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

void ofApp::square(){
    ofSetColor(34, 34, 123);
    ofFill();
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
}


void ofApp::triangle(){
    ofSetColor(34, 34, 123);
    ofFill();
    ofDrawRectangle(ofGetWidth()/2, ofGetHeight()/2, 100, 100);
}

//--------------------------------------------------------------
void ofApp::draw(){
    square();
    triangle();
    
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