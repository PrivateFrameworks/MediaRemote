#include "PrivateMediaRemote.h"

#ifndef PrivateMediaRemote_Functions_h
#define PrivateMediaRemote_Functions_h

void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
void MRMediaRemoteUnregisterForNowPlayingNotifications(void);
void MRMediaRemoteGetNowPlayingClient(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingClientBlock block);
void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingInfoBlock block);
void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationIsPlayingBlock block);
NSString *MRNowPlayingClientGetBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
NSString *MRNowPlayingClientGetParentAppBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
void MRMediaRemoteSetElapsedTime(double time);

Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);

#endif /* PrivateMediaRemote_Functions_h */
