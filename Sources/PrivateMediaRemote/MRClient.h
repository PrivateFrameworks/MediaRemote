#ifndef PrivateMediaRemote_MRClient_h
#define PrivateMediaRemote_MRClient_h

#import <os/availability.h>

#include <PrivateMediaRemote/_MRNowPlayingClientProtobuf.h>

API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(10.15))
@interface MRClient : NSObject {
	NSString *_bundleIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly) _MRNowPlayingClientProtobuf *protobuf;

- (instancetype)initWithProtobuf:(_MRNowPlayingClientProtobuf *)protobuf;

@end

#endif /* PrivateMediaRemote_MRClient_h */
