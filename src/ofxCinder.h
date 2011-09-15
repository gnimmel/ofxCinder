#pragma once

#include "ofMain.h"

#include "cinder/ImageIo.h"
#include "cinder/gl/Texture.h"

/*
 inspired by Kyle McDonald's ofxCv...
*/

namespace ofxCi {
    
    unsigned char * toOf(ci::Surface _src);//get pixels from surface, no equivalent for texture
    
    unsigned char * toCi(ofImage &_src); //get pixels from image
    unsigned char * toCi(ofTexture &_src); //copy pixels from texture

}
