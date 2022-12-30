#import "../Common.h"

@implementation Identifier(Tests)

- (void)setUp {
	SetUp
}

- (void)tearDown {
    TearDown
}

- (void)testClasses {
	Identifier(testClasses)();
}

- (void)testSuperclasses {
	Identifier(testSuperclasses)();
}

- (void)testSelectors {
	TestSelectors
}

- (void)testConforming {
    TestConforming
}

- (void)testMethods {
    TestMethods
}

- (void)testConstants {
	Identifier(testConstants)(self);
}

- (void)testFunctions {
	Identifier(testFunctions)(self);
}

@end
