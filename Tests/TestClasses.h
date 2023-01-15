#ifndef TestClasses_h
#define TestClasses_h

BOOL Identifier(isClassDefined)(Class classInstance, NSString *classString) {
	return i(classNameIs)([classInstance new], classString);
}

#define IsClassDefined(CLASS) Identifier(isClassDefined)(GetClass(CLASS), @#CLASS)
#define IsUnlinkableClassDefined(CLASS) Identifier(isClassDefined)(GetUnlinkableClass(CLASS), @#CLASS)

#define TestClass(CLASS) XCTAssertTrue(IsClassDefined(CLASS))
#define TestClassUnavailable(CLASS) XCTAssertNil(objc_getClass(#CLASS))
#define TestUnlinkableClass(CLASS) XCTAssertTrue(IsUnlinkableClassDefined(CLASS))

void Identifier(testClasses)(void);
void Identifier(testClasses)() {
#if __is_target_os(iOS) || __is_target_os(tvOS) || __is_target_os(watchOS)
	TestUnlinkableClass(_MRColorProtobuf);
	TestUnlinkableClass(_MRNowPlayingClientProtobuf);
	TestUnlinkableClass(MRContentItem);
	TestUnlinkableClass(MRContentItemMetadata);
#else
	TestClass(_MRColorProtobuf);
	TestClass(_MRNowPlayingClientProtobuf);
	TestClass(MRContentItem);
	TestClass(MRContentItemMetadata);
#endif
	
	
	if (@available(iOS 14, tvOS 14, watchOS 7, macOS 10.15, *)) {
		TestClass(MRClient);
		TestClass(MRArtwork);
		TestClass(MROrigin);
		TestClass(MRPlaybackQueueRequest);
		TestClass(MRPlayer);
		TestClass(MRPlayerPath);
	} else {
		TestClassUnavailable(MRClient);
		TestClassUnavailable(MRArtwork);
		TestClassUnavailable(MROrigin);
		TestClassUnavailable(MRPlaybackQueueRequest);
		TestClassUnavailable(MRPlayer);
		TestClassUnavailable(MRPlayerPath);
	}
	
	if (@available(iOS 15, tvOS 15, watchOS 8, macOS 11.0, *)) {
		TestClass(MRPlaybackQueue);
	} else {
		TestClassUnavailable(MRPlaybackQueue);
	}
}

#endif /* TestClasses_h */
