#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{
public:
	void setup();
	void draw();
	void keyPressed(int key);
	
	int keyStore;
};