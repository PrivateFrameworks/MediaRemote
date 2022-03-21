#ifndef TestConforming_h
#define TestConforming_h

BOOL Identifier(classConformsToProtocol)(Class classInstance, NSString *protocol) {
	return [classInstance conformsToProtocol:NSProtocolFromString(protocol)];
}

#define ClassConformsToProtocol(CLASS, PROTOCOL) Identifier(classConformsToProtocol)(GetClass(CLASS), @#PROTOCOL)
#define UnlinkableClassConformsToProtocol(CLASS, PROTOCOL) Identifier(classConformsToProtocol)(GetUnlinkableClass(CLASS), @#PROTOCOL)

#define TestClassConformsToProtocol(CLASS, PROTOCOL) XCTAssertTrue(ClassConformsToProtocol(CLASS, PROTOCOL))
#define TestUnlinkableClassConformsToProtocol(CLASS, PROTOCOL) XCTAssertTrue(UnlinkableClassConformsToProtocol(CLASS, PROTOCOL))

#define TestConforming \
TestUnlinkableClassConformsToProtocol(_MRColorProtobuf, NSCopying); \
TestClassConformsToProtocol(_MRNowPlayingClientProtobuf, NSCopying); \


#endif /* TestConforming_h */
