#include "ofApp.h"

void ofApp::setup(){
	ofBackground(0);
	keyStore = "";
	ofHideCursor();
}

void ofApp::draw(){
	ofDrawBitmapString(ofToString(keyStore), 10, 20);
}

void ofApp::keyPressed(int key){
	std::string str(1, key);
	std::cout << "Key pressed: " << str << std::endl;
	keyStore = str;
}
