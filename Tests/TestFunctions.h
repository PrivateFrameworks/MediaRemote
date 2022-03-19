#ifndef TestFunctions_h
#define TestFunctions_h

#define GetFunctionPointer(FUNCTION) CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR(#FUNCTION))

#define TestFunction(FUNCTION) XCTAssertTrue(GetFunctionPointer(FUNCTION) != nil)

#define TestFunctions \
TestFunction(MRMediaRemoteRegisterForNowPlayingNotifications); \
TestFunction(MRMediaRemoteUnregisterForNowPlayingNotifications); \
TestFunction(MRMediaRemoteGetNowPlayingClient); \
TestFunction(MRMediaRemoteGetNowPlayingInfo); \
TestFunction(MRMediaRemoteGetNowPlayingApplicationIsPlaying); \
TestFunction(MRNowPlayingClientGetBundleIdentifier); \
TestFunction(MRNowPlayingClientGetParentAppBundleIdentifier); \
TestFunction(MRMediaRemoteSetElapsedTime); \
TestFunction(MRMediaRemoteSendCommand); \

#endif /* TestFunctions_h */
