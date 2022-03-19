#ifndef PrivateMediaRemote_PrivateMediaRemote_h
#define PrivateMediaRemote_PrivateMediaRemote_h

#import <Foundation/Foundation.h>

#import "_MRColorProtobuf.h"
#import "_MRNowPlayingClientProtobuf.h"
#import "Constants.h"
#import "Enums.h"
#import "Functions.h"

FOUNDATION_EXPORT double MediaRemoteVersionNumber;

FOUNDATION_EXPORT const unsigned char MediaRemoteVersionString[];

@interface PrivateMediaRemote : NSObject

+ (NSURL *)bundleURL;
+ (NSBundle *)bundle;
+ (BOOL)load;
+ (BOOL)unload;

@end

#endif /* PrivateMediaRemote_PrivateMediaRemote_h */
