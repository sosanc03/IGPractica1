#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate(60);
	ball = new Ball(ofGetWidth() / 2, ofGetHeight() * 4 / 5);
	dir = 0;
	d = a = false;
	r = ofRectangle(ofGetWidth() / 2 - 100, ofGetHeight() * 2 / 10, 200, 10);
}

//--------------------------------------------------------------
void ofApp::update(){
	if ((a && d) || (!a && !d)) ball->setDir(0);
	else if (d) ball->setDir(1);
	else ball->setDir(-1);
	ball->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	ball->draw();
	ofSetColor(200);
	ofDrawRectangle(r);
	if (ball->getAc() <= 0 && r.intersects(ball->getR())) ball->setAc(10);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	if (key == 'd') d = true;
	else if (key == 'a') a = true;
	if (key == 'x') ball->setAc(10);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	if (key == 'a') a = false;
	if (key == 'd') d = false;
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
