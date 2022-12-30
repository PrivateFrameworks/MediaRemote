#ifndef TestFunctions_h
#define TestFunctions_h

#define GetFunctionPointer(FUNCTION) CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR(#FUNCTION))

#ifdef LINKED_TESTS
#define TestFunction(FUNCTION) XCTAssertNotEqual(&FUNCTION, nil)
#elif defined(UNLINKED_TESTS)
#define TestFunction(FUNCTION) XCTAssertTrue(GetFunctionPointer(FUNCTION) != nil)
#endif

void Identifier(getNowPlayingClient)(Identifier(Tests) *self) {
	typeof(MRMediaRemoteGetNowPlayingClient) *func = nil;
	
#ifdef LINKED_TESTS
	func = &MRMediaRemoteGetNowPlayingClient;
#elif defined(UNLINKED_TESTS)
	func = CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR("MRMediaRemoteGetNowPlayingClient"));
#endif
	
	XCTestExpectation *expectation = [self expectationWithDescription:@"MRMediaRemoteGetNowPlayingClient"];
	(*func)(dispatch_get_main_queue(), ^(id client) {
		XCTAssertNotNil(client, @"`client` is `nil` when calling `MRMediaRemoteGetNowPlayingClient`. Play some music for this test to pass.");
		
		if (@available(macOS 10.15, *)) {
			XCTAssertTrue([((NSObject *)client).className isEqualToString:@"MRClient"]);
		} else {
			XCTAssertTrue([((NSObject *)client).className isEqualToString:@"_MRNowPlayingClientProtobuf"]);
		}
		
		[expectation fulfill];
	});
	
	[self waitForExpectations:@[expectation] timeout:1];
}

void Identifier(requestNowPlayingPlaybackQueueForPlayerSync)(Identifier(Tests) *self) {
	typeof(MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync) *func = nil;
	
#ifdef LINKED_TESTS
	func = &MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync;
#elif defined(UNLINKED_TESTS)
	func = CFBundleGetFunctionPointerForName(self.cfBundle, CFSTR("MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync"));
#endif
	
	XCTestExpectation *expectation = [self expectationWithDescription:@"MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync"];
	(*func)(nil, nil, dispatch_get_main_queue(), ^(id queue, NSError *error) {
		XCTAssertNotNil(queue, @"`queue` is `nil` when calling `MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync`. Play some music for this test to pass.");
		XCTAssertNil(error);
		
		if (@available(macOS 11.0, *)) {
			XCTAssertTrue([((NSObject *)queue).className isEqualToString:@"MRPlaybackQueue"]);
		} else {
			XCTAssertTrue([((NSObject *)queue).className isEqualToString:@"_MRPlaybackQueueProtobuf"]);
		}
		
		[expectation fulfill];
	});
	
	[self waitForExpectations:@[expectation] timeout:1];
}

void Identifier(testFunctions)(Identifier(Tests) *self) {
	TestFunction(MRMediaRemoteRegisterForNowPlayingNotifications);
	TestFunction(MRMediaRemoteUnregisterForNowPlayingNotifications);
	TestFunction(MRMediaRemoteGetNowPlayingClient);
	TestFunction(MRMediaRemoteGetNowPlayingInfo);
	TestFunction(MRMediaRemoteGetNowPlayingApplicationIsPlaying);
	TestFunction(MRNowPlayingClientGetBundleIdentifier);
	TestFunction(MRNowPlayingClientGetParentAppBundleIdentifier);
	TestFunction(MRMediaRemoteSetElapsedTime);
	TestFunction(MRMediaRemoteSendCommand);
	TestFunction(MRMediaRemoteRequestNowPlayingPlaybackQueueForPlayerSync);
	Identifier(getNowPlayingClient)(self);
	Identifier(requestNowPlayingPlaybackQueueForPlayerSync)(self);
}

#endif /* TestFunctions_h */
