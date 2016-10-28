#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    video.load("hands.mov");
    video.play();
    video.setSpeed(1.0);
    video.setLoopState(OF_LOOP_NORMAL);
   
    serial.setup("/dev/cu.usbmodem1421", 9600);
}

//--------------------------------------------------------------
void ofApp::update(){
    video.update();
    
    if(serial.available() <= 0){//not sure if this work--beachball)//
       video.setSpeed(0.5);
    }
    else {
        while(serial.available() > 0){
           video.setSpeed(2.0);
        }
    }

}


//--------------------------------------------------------------
void ofApp::draw(){
    video.draw(-20, 50, 1400, 1250);

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
