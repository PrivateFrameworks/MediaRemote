#include "Common.h"

@implementation CoreFoundationTests

- (void)setUp {
#ifdef UNLINKED_TESTS
	self.bundle = CFBundleCreate(NULL, (__bridge CFURLRef)PrivateMediaRemote.bundleURL);
	XCTAssertTrue(CFBundleLoadExecutable(self.bundle));
#endif
}

- (void)tearDown {
#ifdef UNLINKED_TESTS
	XCTAssertNoThrow(CFBundleUnloadExecutable(self.bundle));
	self.bundle = nil;
#endif
}

// MARK: - Tests

- (void)testConstants {
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoArtist);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoTitle);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoAlbum);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoArtworkData);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoPlaybackRate);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoDuration);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoElapsedTime);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoTimestamp);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoClientPropertiesData);

	AssertStringIsVarName(kMRMediaRemoteNowPlayingInfoDidChangeNotification);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification);
	AssertStringIsVarName(kMRMediaRemotePickableRoutesDidChangeNotification);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingApplicationDidChangeNotification);
	AssertStringIsVarName(kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification);
	AssertStringIsVarName(kMRMediaRemoteRouteStatusDidChangeNotification);
	AssertStringIsVarName(kMRNowPlayingPlaybackQueueChangedNotification);
	AssertStringIsVarName(kMRPlaybackQueueContentItemsChangedNotification);
}

- (void)testFunctions {
#ifdef UNLINKED_TESTS
	AssertFunctionPointerIsNotNull(MRMediaRemoteRegisterForNowPlayingNotifications);
	AssertFunctionPointerIsNotNull(MRMediaRemoteUnregisterForNowPlayingNotifications);
	AssertFunctionPointerIsNotNull(MRMediaRemoteGetNowPlayingClient);
	AssertFunctionPointerIsNotNull(MRMediaRemoteGetNowPlayingInfo);
	AssertFunctionPointerIsNotNull(MRMediaRemoteGetNowPlayingApplicationIsPlaying);
	AssertFunctionPointerIsNotNull(MRNowPlayingClientGetBundleIdentifier);
	AssertFunctionPointerIsNotNull(MRNowPlayingClientGetParentAppBundleIdentifier);
	AssertFunctionPointerIsNotNull(MRMediaRemoteSetElapsedTime);

	AssertFunctionPointerIsNotNull(MRMediaRemoteSendCommand);
#endif
}

@end
