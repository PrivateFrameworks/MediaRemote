#ifndef TestClasses_h
#define TestClasses_h

BOOL Identifier(isClassDefined)(Class classInstance, NSString *classString) {
	return [NSStringFromClass(((NSObject *)[classInstance new]).class) isEqualToString:classString];
}

#define IsClassDefined(CLASS) Identifier(isClassDefined)(GetClass(CLASS), @#CLASS)
#define IsUnlinkableClassDefined(CLASS) Identifier(isClassDefined)(GetUnlinkableClass(CLASS), @#CLASS)

#define TestClass(CLASS) XCTAssertTrue(IsClassDefined(CLASS))
#define TestUnlinkableClass(CLASS) XCTAssertTrue(IsUnlinkableClassDefined(CLASS))

#define TestClasses \
TestClass(_MRColorProtobuf); \
TestClass(_MRNowPlayingClientProtobuf); \


#endif /* TestClasses_h */
