@import XCTest;

#ifndef Common_h
#define Common_h

#ifdef UNLINKED_TESTS
#import <objc/runtime.h>
#endif

#ifdef LINKED_TESTS
#define String(STRING) STRING
#elif defined(UNLINKED_TESTS)
#define String(STRING) (__bridge NSString *)*((CFStringRef *)CFBundleGetDataPointerForName(self.bundle, CFSTR(#STRING)))
#endif


#ifdef LINKED_TESTS
#define GetClass(STRING) STRING
#elif defined(UNLINKED_TESTS)
#define GetClass(STRING) objc_getClass(#STRING)
#endif

/*!
 * @define AssertFunctionPointerIsNotNull(FUNCTION)
 * Asserts that the return value of \a CFBundleGetFunctionPointerForName is not null.
 * @param FUNCTION Function name
*/
#define AssertFunctionPointerIsNotNull(FUNCTION) XCTAssertTrue(CFBundleGetFunctionPointerForName(self.bundle, CFSTR(#FUNCTION)) != NULL)

/*!
 * @define AssertStringIsVarName(STRING)
 * Asserts that \a STRING has the same value as it's variable name.
 * @param STRING The string
*/
#define AssertStringIsVarName(STRING) XCTAssertTrue([String(STRING) isEqualToString:@#STRING])

#ifdef LINKED_TESTS
@import PrivateMediaRemote;
#elif defined(UNLINKED_TESTS)
#include "../PrivateMediaRemote.h"
#endif

@interface FoundationTests : XCTestCase

@end

@interface CoreFoundationTests : XCTestCase

@property CFBundleRef bundle;

@end

#endif /* Common_h */
