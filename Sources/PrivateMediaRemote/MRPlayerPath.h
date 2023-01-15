#ifndef PrivateMediaRemote_MRPlayerPath_h
#define PrivateMediaRemote_MRPlayerPath_h

#import <PrivateMediaRemote/MROrigin.h>
#import <PrivateMediaRemote/MRClient.h>
#import <PrivateMediaRemote/MRPlayer.h>

API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(10.15))
@interface MRPlayerPath : NSObject {
	MROrigin *_origin;
	MRClient *_client;
	MRPlayer *_player;
}

@property (nonatomic, copy) MROrigin *origin;
@property (nonatomic, copy) MRClient *client;
@property (nonatomic, copy) MRPlayer *player;

- (instancetype)initWithOrigin:(MROrigin *)origin client:(MRClient *)client player:(MRPlayer *)player;

/// New instance on every call
+ (instancetype)anyPlayerPath API_AVAILABLE(macos(12.0));

@end

#endif /* PrivateMediaRemote_MRPlayerPath_h */
