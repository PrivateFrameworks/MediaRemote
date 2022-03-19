#ifndef SetUp_h
#define SetUp_h

#define SetUp \
self.bundle = PrivateMediaRemote.bundle; \
self.cfBundle = CFBundleCreate(NULL, (__bridge CFURLRef)PrivateMediaRemote.bundleURL); \
XCTAssertTrue([self.bundle load]); \


#endif /* SetUp_h */
