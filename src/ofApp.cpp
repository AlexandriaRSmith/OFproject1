#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    usecamera = false;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    if(!usecamera){
        ofVec3f sumOfAllPoints(0,0,0);
        for(unsigned int i = 0; i < points.size(); i++){
            points[i].z -= 4;
            sumOfAllPoints += points[i];
        }
        center = sumOfAllPoints / points.size();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    if(usecamera){
        camera.begin();
    }
    
    ofColor colorOne(65);
    ofColor colorTwo(20);
    
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    
   

    create.draw();
    
    if(usecamera){
        camera.end();
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
    if(usecamera){
        float rotateAmount = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 360);
        ofVec3f furthestPoint;
        if (points.size() > 0) {
            furthestPoint = points[0];
        }
        else
        {
            furthestPoint = ofVec3f(x, y, 0);
        }
        
        ofVec3f directionToFurthestPoint = (furthestPoint - center);
        ofVec3f directionToFurthestPointRotated = directionToFurthestPoint.rotated(rotateAmount, ofVec3f(0,1,0));
        camera.setPosition(center + directionToFurthestPointRotated);
        camera.lookAt(center);
    }
    //otherwise add points like before
    else{
        ofVec3f mousePoint(x,y,0);
        points.push_back(mousePoint);
    }

    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  



}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    usecamera = !usecamera;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
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
