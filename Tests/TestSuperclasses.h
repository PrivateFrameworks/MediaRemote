#ifndef TestSuperclasses_h
#define TestSuperclasses_h

BOOL Identifier(checkSuperclass)(Class classInstance, Class superclassInstance) {
    return class_getSuperclass(classInstance) == superclassInstance;
}

#define CheckSuperclass(CLASS, SUPERCLASS) Identifier(checkSuperclass)(GetClass(CLASS), GetClass(SUPERCLASS))
#define CheckUnlinkableSuperclass(CLASS, SUPERCLASS) Identifier(checkSuperclass)(GetUnlinkableClass(CLASS), GetClass(SUPERCLASS))

#define TestSuperclass(CLASS, SUPERCLASS) XCTAssertTrue(CheckSuperclass(CLASS, SUPERCLASS))
#define TestUnlinkableSuperclass(CLASS, SUPERCLASS) XCTAssertTrue(CheckUnlinkableSuperclass(CLASS, SUPERCLASS))

void Identifier(testSuperclasses)() {
	TestUnlinkableSuperclass(_MRColorProtobuf, PBCodable);
	TestSuperclass(_MRNowPlayingClientProtobuf, PBCodable);
}

#endif /* TestSuperclasses_h */
