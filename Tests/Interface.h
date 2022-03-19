#ifndef Interface_h
#define Interface_h

@interface Identifier(Tests) : XCTestCase

@property (weak) NSBundle *bundle;
@property CFBundleRef cfBundle;

@end

#endif /* Interface_h */
