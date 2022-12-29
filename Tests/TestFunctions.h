#ifndef TestFunctions_h
#define TestFunctions_h

#define GetFunctionPointer(FUNCTION) CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR(#FUNCTION))

#define TestFunction(FUNCTION) XCTAssertTrue(GetFunctionPointer(FUNCTION) != nil)

void Identifier(getNowPlayingClient)(Identifier(Tests) *self) {
	typeof(MRMediaRemoteGetNowPlayingClient) *func = nil;
	
#ifdef LINKED_TESTS
	func = &MRMediaRemoteGetNowPlayingClient;
#elif defined(UNLINKED_TESTS)
	func = CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR("MRMediaRemoteGetNowPlayingClient"));
#endif
	
	XCTestExpectation *expectation = [self expectationWithDescription:@"Long method"];
	(*func)(dispatch_get_main_queue(), ^(id client) {
		XCTAssertNotNil(client, @"`client` is `nil` when calling `MRMediaRemoteGetNowPlayingClient`. Play some music for this test to pass.");
		
		if (@available(macOS 10.15, *)) {
			XCTAssertTrue([((NSObject *)client).className isEqualToString:@"MRClient"]);
		} else {
			XCTAssertTrue([((NSObject *)client).className isEqualToString:@"_MRNowPlayingClientProtobuf"]);
		}
		
		[expectation fulfill];
	});
	
	[self waitForExpectationsWithTimeout:1 handler:nil];
}

#define TestMRMediaRemoteGetNowPlayingClient Identifier(getNowPlayingClient)

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
TestMRMediaRemoteGetNowPlayingClient(self); \

#endif /* TestFunctions_h */
