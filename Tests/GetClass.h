#ifndef GetClass_h
#define GetClass_h

#ifdef LINKED_TESTS
#define GetClass(CLASS) CLASS.class
#elif defined(UNLINKED_TESTS)
#define GetClass(CLASS) objc_getClass(#CLASS)
#endif

#define GetUnlinkableClass(CLASS) objc_getClass(#CLASS)

#endif /* GetClass_h */
