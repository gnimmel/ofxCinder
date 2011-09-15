#include "testApp.h"

ofImage             of_image;
ci::Surface         ci_surface;
ci::gl::Texture     ci_texture;

//--------------------------------------------------------------
void testApp::setup(){
    ofEnableAlphaBlending();
    
    //load image file
    string path = ofToDataPath("logo.png");
    of_image.loadImage( path );
    ci_surface = ci::loadImage( path );
    
    //convert images
    ci_texture = ci::gl::Texture( ofxCi::toCi(of_image), GL_RGBA, of_image.getWidth(), of_image.getHeight() );
    of_image.setFromPixels(ofxCi::toOf(ci_surface), ci_surface.getWidth(), ci_surface.getHeight(), OF_IMAGE_COLOR_ALPHA);
    
}

//--------------------------------------------------------------
void testApp::update(){
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofSetHexColor(0xFFFFFF);
    
    ci::gl::draw( ci_texture , ci::Vec2f(0,0) );
    ofDrawBitmapString("ofImage to ci::Texture", 0,20);
    
    of_image.draw(ofGetWidth()/2, 0);
    ofDrawBitmapString("ci::Surface to ofImage", ofGetWidth()/2,20);
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}