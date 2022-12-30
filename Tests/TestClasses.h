#ifndef TestClasses_h
#define TestClasses_h

BOOL Identifier(isClassDefined)(Class classInstance, NSString *classString) {
	return [NSStringFromClass(((NSObject *)[classInstance new]).class) isEqualToString:classString];
}

#define IsClassDefined(CLASS) Identifier(isClassDefined)(GetClass(CLASS), @#CLASS)
#define IsUnlinkableClassDefined(CLASS) Identifier(isClassDefined)(GetUnlinkableClass(CLASS), @#CLASS)

#define TestClass(CLASS) XCTAssertTrue(IsClassDefined(CLASS))
#define TestUnlinkableClass(CLASS) XCTAssertTrue(IsUnlinkableClassDefined(CLASS))

void Identifier(testClasses)() {
	TestClass(_MRColorProtobuf);
	TestClass(_MRNowPlayingClientProtobuf);
	TestClass(MRContentItem);
	TestClass(MRContentItemMetadata);
	
	if (@available(macOS 10.15, *)) {
		TestClass(MRClient);
		TestClass(MRArtwork);
		TestClass(MROrigin);
		TestClass(MRPlaybackQueueRequest);
		TestClass(MRPlayer);
		TestClass(MRPlayerPath);
	}
	
	if (@available(macOS 11.0, *)) {
		TestClass(MRPlaybackQueue);
	}
}

#endif /* TestClasses_h */
