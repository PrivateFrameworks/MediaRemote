#ifndef TestConstants_h
#define TestConstants_h

#ifdef LINKED_TESTS
#define IsVariableNameEqualToValue(STRING) [@#STRING isEqualToString:STRING]
#elif defined(UNLINKED_TESTS)
BOOL isVariableNameEqualToValue(CFBundleRef cfBundle, CFStringRef cfString, NSString *string) {
    CFStringRef *ref = (CFStringRef *)CFBundleGetDataPointerForName(cfBundle, cfString);
    if (ref == nil) return NO;
    
    return [string isEqualToString:((__bridge NSString *)*ref)];
}
#define IsVariableNameEqualToValue(STRING) isVariableNameEqualToValue(self.cfBundle, CFSTR(#STRING), @#STRING)
#endif

#define TestConstant(STRING) XCTAssertTrue(IsVariableNameEqualToValue(STRING))

void Identifier(testConstants)(Identifier(Tests) *self) {
	TestConstant(kMRMediaRemoteNowPlayingInfoDidChangeNotification);
	TestConstant(kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification);
	TestConstant(kMRMediaRemotePickableRoutesDidChangeNotification);
	TestConstant(kMRMediaRemoteNowPlayingApplicationDidChangeNotification);
	TestConstant(kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification);
	TestConstant(kMRMediaRemoteRouteStatusDidChangeNotification);
	TestConstant(kMRNowPlayingPlaybackQueueChangedNotification);
	TestConstant(kMRPlaybackQueueContentItemsChangedNotification);

	TestConstant(kMRMediaRemoteNowPlayingInfoArtist);
	TestConstant(kMRMediaRemoteNowPlayingInfoTitle);
	TestConstant(kMRMediaRemoteNowPlayingInfoAlbum);
	TestConstant(kMRMediaRemoteNowPlayingInfoArtworkData);
	TestConstant(kMRMediaRemoteNowPlayingInfoPlaybackRate);
	TestConstant(kMRMediaRemoteNowPlayingInfoDuration);
	TestConstant(kMRMediaRemoteNowPlayingInfoElapsedTime);
	TestConstant(kMRMediaRemoteNowPlayingInfoTimestamp);
	TestConstant(kMRMediaRemoteNowPlayingInfoClientPropertiesData);
	TestConstant(kMRMediaRemoteNowPlayingInfoArtworkIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoShuffleMode);
	TestConstant(kMRMediaRemoteNowPlayingInfoTrackNumber);
	TestConstant(kMRMediaRemoteNowPlayingInfoTotalQueueCount);
	TestConstant(kMRMediaRemoteNowPlayingInfoArtistiTunesStoreAdamIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoArtworkMIMEType);
	TestConstant(kMRMediaRemoteNowPlayingInfoMediaType);
	TestConstant(kMRMediaRemoteNowPlayingInfoiTunesStoreSubscriptionAdamIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoGenre);
	TestConstant(kMRMediaRemoteNowPlayingInfoComposer);
	TestConstant(kMRMediaRemoteNowPlayingInfoQueueIndex);
	TestConstant(kMRMediaRemoteNowPlayingInfoiTunesStoreIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoTotalTrackCount);
	TestConstant(kMRMediaRemoteNowPlayingInfoContentItemIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoIsMusicApp);
	TestConstant(kMRMediaRemoteNowPlayingInfoAlbumiTunesStoreAdamIdentifier);
	TestConstant(kMRMediaRemoteNowPlayingInfoUniqueIdentifier);

	TestConstant(kMRActiveNowPlayingPlayerPathUserInfoKey);
	TestConstant(kMRMediaRemoteNowPlayingApplicationIsPlayingUserInfoKey);
	TestConstant(kMRMediaRemoteNowPlayingApplicationDisplayNameUserInfoKey);
	TestConstant(kMRMediaRemoteNowPlayingApplicationPIDUserInfoKey);
	TestConstant(kMRMediaRemoteOriginUserInfoKey);
	TestConstant(kMRMediaRemotePlaybackStateUserInfoKey);
	TestConstant(kMRMediaRemoteUpdatedContentItemsUserInfoKey);
	TestConstant(kMRNowPlayingClientUserInfoKey);
	TestConstant(kMRNowPlayingPlayerPathUserInfoKey);
	TestConstant(kMRNowPlayingPlayerUserInfoKey);
	TestConstant(kMROriginActiveNowPlayingPlayerPathUserInfoKey);

	TestConstant(kMRMediaRemoteFrameworkErrorDomain);
}

#endif /* TestConstants_h */
