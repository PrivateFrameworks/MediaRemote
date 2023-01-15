#ifndef GetClass_h
#define GetClass_h

#ifdef LINKED_TESTS
#define GetClass(CLASS) CLASS.class
#elif defined(UNLINKED_TESTS)
#define GetClass(CLASS) objc_getClass(#CLASS)
#endif

#define GetUnlinkableClass(CLASS) objc_getClass(#CLASS)

BOOL i(classNameIs)(NSObject *object, NSString *string) {
	return [NSStringFromClass(object.class) isEqualToString:string];
}

#endif /* GetClass_h */
