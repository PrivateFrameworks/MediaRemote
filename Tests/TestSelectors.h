#ifndef TestSelectors_h
#define TestSelectors_h

BOOL Identifier(classRespondsToSelector)(Class classInstance, NSString *selector) {
    return [classInstance respondsToSelector:NSSelectorFromString(selector)];
}

#define ClassRespondsToSelector(CLASS, SELECTOR) Identifier(classRespondsToSelector)(GetClass(CLASS), @#SELECTOR)

#define TestClassSelector(CLASS, SELECTOR) XCTAssertTrue(ClassRespondsToSelector(CLASS, SELECTOR))

BOOL Identifier(instanceRespondsToSelector)(Class classInstance, NSString *selector) {
    return [((NSObject *)[classInstance new]) respondsToSelector:NSSelectorFromString(selector)];
}

#define InstanceRespondsToSelector(CLASS, SELECTOR) Identifier(instanceRespondsToSelector)(GetClass(CLASS), @#SELECTOR)

#define TestInstanceSelector(CLASS, SELECTOR) XCTAssertTrue(InstanceRespondsToSelector(CLASS, SELECTOR))

#define TestSelectors \
TestInstanceSelector(_MRNowPlayingClientProtobuf, hash); \
TestInstanceSelector(_MRNowPlayingClientProtobuf, hash); \


#endif /* TestSelectors_h */
