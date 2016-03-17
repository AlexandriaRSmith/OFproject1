//
//  Branch.cpp
//  classProject1
//
//  Created by Alexandria Smith on 3/15/16.
//
//

#include "Branch.hpp"



void Branch::drawBranch(float length, float theta){
    float treeShiftValue = cos(ofGetElapsedTimef()) * 5;
    
    ofRotate(ofGetElapsedTimef()); 
    ofLine(0 , 0, 0 , (-length + treeShiftValue));

    ofTranslate(0, -length);
    
    
    
    length = length*.74;  ///.759
    
    
    if(length>1.5){
        
        
        ofPushMatrix();
        ofRotate(theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        ofPushMatrix();
        ofRotate(-theta);
        drawBranch(length, theta);
        ofPopMatrix();
        
        
    }
    
}

void Branch::draw(){
    
    

   ofSetBackgroundAuto(false);
    


    ofFill();
    
    
    ofTranslate(ofGetWidth()/2, ofGetHeight() - 380);
    ofSetColor(215);
    ofFill();
    drawBranch(100, 30);//for original, take out the /3
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(218);
    ofFill();
    drawBranch(100, 30);
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(218);
    ofFill();
    drawBranch(100, 30);
    
    
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(223);
    ofFill();
    drawBranch(100, 30);
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(226);
    ofFill();
    drawBranch(100, 30);
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(235);
    ofFill();
    drawBranch(100, 30);
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(242);
    ofFill();
    drawBranch(100, 30);
    //------------
    ofTranslate(0, 100);
    ofRotate(45);
    ofSetColor(249);
    ofFill();
    drawBranch(100, 30);
    
    
    

    
    

    
}




