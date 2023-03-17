#pragma once
#include "ofMain.h"

class Ball
{
private:
	struct position {
		float x, y;
	};
	position pos;
	float speed;
	float acceleration;
	int dir;
	int SIZE;
	ofRectangle r;
public:
	Ball(float x, float y) {
		pos.x = x;
		pos.y = y;
		speed = 1;
		dir = 0;
		SIZE = 15;
		acceleration = 0;
		r = ofRectangle(pos.x - 10, pos.y + SIZE, 20, 1);
	}

	void update() {
		updateAc();
		if (pos.x > ofGetWidth()) pos.x = 0 - SIZE;
		else if (pos.x < 0 - SIZE) pos.x = ofGetWidth();
		pos.x += dir * speed;
		pos.y -= acceleration;
		r = ofRectangle(pos.x - 10, pos.y + SIZE, 20, 1);
	}

	void updateAc() {
		acceleration -= 0.3;
	}

	void setAc(float n) {
		acceleration = n;
	}

	void draw() {
		ofSetColor(255, 0, 0);
		ofDrawCircle(pos.x, pos.y, SIZE);
		ofSetColor(0, 255, 0);
		ofDrawRectangle(r);
	}

	ofRectangle getR(){
		return r;
	}

	float getAc() {
		return acceleration;
	}

	void setDir(int d = 0) {
		dir = d;
	}
};

