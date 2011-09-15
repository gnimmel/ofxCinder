#include "ofxCinder.h"

namespace ofxCi{
    
    unsigned char * toOf(ci::Surface _src) {
        return (unsigned char *) _src.getData();
    }
    
    unsigned char * toCi(ofImage &_src) {
        return (unsigned char *) _src.getPixelsRef().getPixels();
    }
    
    unsigned char *  toCi(ofTexture &_src) {
        ofPixels tmp;
        _src.readToPixels(tmp);
        return (unsigned char *) tmp.getPixels();
    }
    
}
