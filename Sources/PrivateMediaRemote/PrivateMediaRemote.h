#ifndef PrivateMediaRemote_PrivateMediaRemote_h
#define PrivateMediaRemote_PrivateMediaRemote_h

#import <Foundation/Foundation.h>

#import <PrivateMediaRemote/_MRColorProtobuf.h>
#import <PrivateMediaRemote/_MRNowPlayingClientProtobuf.h>
#import <PrivateMediaRemote/MRClient.h>
#import <PrivateMediaRemote/MRArtwork.h>
#import <PrivateMediaRemote/MRContentItem.h>
#import <PrivateMediaRemote/MRContentItemMetadata.h>
#import <PrivateMediaRemote/MROrigin.h>
#import <PrivateMediaRemote/MRPlaybackQueue.h>
#import <PrivateMediaRemote/MRPlaybackQueueRequest.h>
#import <PrivateMediaRemote/MRPlayer.h>
#import <PrivateMediaRemote/MRPlayerPath.h>
#import <PrivateMediaRemote/Constants.h>
#import <PrivateMediaRemote/Enums.h>
#import <PrivateMediaRemote/Functions.h>

FOUNDATION_EXPORT double MediaRemoteVersionNumber;

FOUNDATION_EXPORT const unsigned char MediaRemoteVersionString[];

@interface PrivateMediaRemote : NSObject

+ (NSURL *)bundleURL;
+ (NSBundle *)bundle;
+ (BOOL)load;
+ (BOOL)unload;

@end

#endif /* PrivateMediaRemote_PrivateMediaRemote_h */
