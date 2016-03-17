#include "ofApp.h"
//example code from the camera ribbon example....


//--------------------------------------------------------------
void ofApp::setup(){
/*
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    usecamera = false;
    */
}

//--------------------------------------------------------------
void ofApp::update(){
    /*
    if(!usecamera){
        ofVec3f sumOfAllPoints(0,0,0);
        for(unsigned int i = 0; i < points.size(); i++){
            points[i].z -= 4;
            sumOfAllPoints += points[i];
        }
        center = sumOfAllPoints / points.size();
 
     }
     */
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    /*

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
  */
    ofColor colorOne(65);
    ofColor colorTwo(20);
    
    ofBackgroundGradient(colorOne, colorTwo, OF_GRADIENT_CIRCULAR);
    
    
    create.draw();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    /*
    if(usecamera){
        float rotateAmount = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0, 180);
        ofVec3f furthestPoint;
        if (points.size() > 0) {
            furthestPoint = points[0];
        }
        else
        {
            furthestPoint = ofVec3f(x, y, 180);
        }
        
        ofVec3f directionToFurthestPoint = (furthestPoint - center);
        ofVec3f directionToFurthestPointRotated = directionToFurthestPoint.rotated(rotateAmount, ofVec3f(1,1,1));
        camera.setPosition(center + directionToFurthestPointRotated);
        camera.lookAt(center);
    }
    //otherwise add points like before
    else{
        ofVec3f mousePoint(x,y);
        points.push_back(mousePoint);
    }
*/
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
  



}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
 //   usecamera = !usecamera;
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
