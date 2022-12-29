#ifndef PrivateMediaRemote_Functions_h
#define PrivateMediaRemote_Functions_h

void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
void MRMediaRemoteUnregisterForNowPlayingNotifications(void);

/// - Parameters:
///   - queue: `dispatch_queue_t`
///   - block:
///     - Since macOS 10.15 it's `void (^)(MRClient *client)`.
///     - Since macOS 10.12 it's `void (^)(_MRNowPlayingClientProtobuf *client)`.
void MRMediaRemoteGetNowPlayingClient(dispatch_queue_t queue, void (^block)(id client));

typedef void (^MRMediaRemoteGetNowPlayingInfoCallback)(NSDictionary *info);
void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingInfoCallback block);
typedef void (^MRMediaRemoteGetNowPlayingApplicationIsPlayingCallback)(BOOL isPlaying);
void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue, MRMediaRemoteGetNowPlayingApplicationIsPlayingCallback block);
NSString *MRNowPlayingClientGetBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
NSString *MRNowPlayingClientGetParentAppBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
void MRMediaRemoteSetElapsedTime(double time);
Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);

#endif /* PrivateMediaRemote_Functions_h */
