#ifndef PrivateMediaRemote_MRArtwork_h
#define PrivateMediaRemote_MRArtwork_h

API_AVAILABLE(macos(10.15))
@interface MRArtwork : NSObject {
	NSData *_imageData;
	long long _width;
	long long _height;
}

@property (nonatomic, copy) NSData *imageData;
@property (nonatomic) long long width;
@property (nonatomic) long long height;

@end

#endif /* PrivateMediaRemote_MRArtwork_h */
