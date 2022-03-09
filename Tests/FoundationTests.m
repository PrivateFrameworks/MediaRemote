#include "Common.h"

@implementation FoundationTests

- (void)setUp {
#ifdef UNLINKED_TESTS
	XCTAssertTrue([PrivateMediaRemote load]);
#endif
}

- (void)tearDown {
#ifdef UNLINKED_TESTS
	XCTAssertTrue([PrivateMediaRemote unload]);
#endif
}

// MARK: - Tests

- (void)testIsNSBundle {
	XCTAssertTrue([PrivateMediaRemote.bundle isKindOfClass:NSBundle.class]);
}

- (void)testNew_MRNowPlayingClientProtobuf {
	_MRNowPlayingClientProtobuf *protobuf = [GetClass(_MRNowPlayingClientProtobuf) new];
	XCTAssertTrue([NSStringFromClass(protobuf.class) isEqualToString:@"_MRNowPlayingClientProtobuf"]);
}

@end
