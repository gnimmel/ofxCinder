ofxCinder
=========

Project to help with using libCinder as a library inside OpenFrameworks projects (only tested on OSX).


How to setup Cinder inside an OF 007 project in Xcode 4 
-------------------------------------------------------

First download and compile Cinder. Then drag the following missing frameworks from a Cinder project into your OF project:

* Accelerate
* AudioToolbox
* AudioUnit
* QTKit
* CoreVideo
* CoreData
* Foundation

Then add the following to you build settings:


###user-defined

CINDER_PATH = wherever your compiled cinder install is


###header search paths

$(CINDER_PATH)/boost


###user header search paths

$(CINDER_PATH)/include


###other linker flags

debug: $(CINDER_PATH)/lib/libcinder_d.a

release: $(CINDER_PATH)/lib/libcinder.a


###preprocessor macros

__ASSERTMACROS__
(this will a harmless warning: "__ASSERTMACROS__" redefined)
