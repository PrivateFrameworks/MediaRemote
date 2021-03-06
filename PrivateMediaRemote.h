#import <Foundation/Foundation.h>

FOUNDATION_EXPORT double MediaRemoteVersionNumber;

FOUNDATION_EXPORT const unsigned char MediaRemoteVersionString[];

#import <PrivateMediaRemote/_MRColorProtobuf.h>
#import <PrivateMediaRemote/_MRNowPlayingClientProtobuf.h>

typedef void (^MRMediaRemoteGetNowPlayingInfoBlock)(NSDictionary *info);
typedef void (^MRMediaRemoteGetNowPlayingClientBlock)(_MRNowPlayingClientProtobuf *clientObj);
typedef void (^MRMediaRemoteGetNowPlayingApplicationIsPlayingBlock)(BOOL playing);

void MRMediaRemoteRegisterForNowPlayingNotifications(dispatch_queue_t queue);
void MRMediaRemoteUnregisterForNowPlayingNotifications(void);
void MRMediaRemoteGetNowPlayingClient(dispatch_queue_t queue,
									  MRMediaRemoteGetNowPlayingClientBlock block);
void MRMediaRemoteGetNowPlayingInfo(dispatch_queue_t queue,
									MRMediaRemoteGetNowPlayingInfoBlock block);
void MRMediaRemoteGetNowPlayingApplicationIsPlaying(dispatch_queue_t queue,
													MRMediaRemoteGetNowPlayingApplicationIsPlayingBlock block);
NSString *MRNowPlayingClientGetBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
NSString *MRNowPlayingClientGetParentAppBundleIdentifier(id clientObj) __attribute__((warn_unused_result));
void MRMediaRemoteSetElapsedTime(double time);

extern NSString *kMRMediaRemoteNowPlayingInfoDidChangeNotification;
extern NSString *kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification;
extern NSString *kMRMediaRemotePickableRoutesDidChangeNotification;
extern NSString *kMRMediaRemoteNowPlayingApplicationDidChangeNotification;
extern NSString *kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification;
extern NSString *kMRMediaRemoteRouteStatusDidChangeNotification;
extern NSString *kMRNowPlayingPlaybackQueueChangedNotification;
extern NSString *kMRPlaybackQueueContentItemsChangedNotification;

extern NSString *kMRMediaRemoteNowPlayingInfoArtist;
extern NSString *kMRMediaRemoteNowPlayingInfoTitle;
extern NSString *kMRMediaRemoteNowPlayingInfoAlbum;
extern NSString *kMRMediaRemoteNowPlayingInfoArtworkData;
extern NSString *kMRMediaRemoteNowPlayingInfoPlaybackRate;
extern NSString *kMRMediaRemoteNowPlayingInfoDuration;
extern NSString *kMRMediaRemoteNowPlayingInfoElapsedTime;
extern NSString *kMRMediaRemoteNowPlayingInfoTimestamp;
extern NSString *kMRMediaRemoteNowPlayingInfoClientPropertiesData;

extern NSString *kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey;

typedef enum {
	/*
     * Use nil for userInfo.
     */
	MRMediaRemoteCommandPlay,
	MRMediaRemoteCommandPause,
	MRMediaRemoteCommandTogglePlayPause,
	MRMediaRemoteCommandStop,
	MRMediaRemoteCommandNextTrack,
	MRMediaRemoteCommandPreviousTrack,
	MRMediaRemoteCommandAdvanceShuffleMode,
	MRMediaRemoteCommandAdvanceRepeatMode,
	MRMediaRemoteCommandBeginFastForward,
	MRMediaRemoteCommandEndFastForward,
	MRMediaRemoteCommandBeginRewind,
	MRMediaRemoteCommandEndRewind,
	MRMediaRemoteCommandRewind15Seconds,
	MRMediaRemoteCommandFastForward15Seconds,
	MRMediaRemoteCommandRewind30Seconds,
	MRMediaRemoteCommandFastForward30Seconds,
	MRMediaRemoteCommandToggleRecord,
	MRMediaRemoteCommandSkipForward,
	MRMediaRemoteCommandSkipBackward,
	MRMediaRemoteCommandChangePlaybackRate,

	/*
     * Use a NSDictionary for userInfo, which contains three keys:
     * kMRMediaRemoteOptionTrackID
     * kMRMediaRemoteOptionStationID
     * kMRMediaRemoteOptionStationHash
     */
	MRMediaRemoteCommandRateTrack,
	MRMediaRemoteCommandLikeTrack,
	MRMediaRemoteCommandDislikeTrack,
	MRMediaRemoteCommandBookmarkTrack,

	/*
     * Use nil for userInfo.
     */
	MRMediaRemoteCommandSeekToPlaybackPosition,
	MRMediaRemoteCommandChangeRepeatMode,
	MRMediaRemoteCommandChangeShuffleMode,
	MRMediaRemoteCommandEnableLanguageOption,
	MRMediaRemoteCommandDisableLanguageOption
} MRMediaRemoteCommand;

Boolean MRMediaRemoteSendCommand(MRMediaRemoteCommand command, NSDictionary *userInfo);
