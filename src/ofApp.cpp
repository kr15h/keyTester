#include "ofApp.h"

void ofApp::setup(){
#ifdef TARGET_RASPBERRY_PI
	ofSetFullscreen(true);
#endif
	keyStore = 0;
}

void ofApp::draw(){
	ofDrawBitmapString(ofToString(keyStore), 10, 20);
}

void ofApp::keyPressed(int key){
	std::cout << "Key pressed: "  << key << std::endl;
	keyStore = key;
}
