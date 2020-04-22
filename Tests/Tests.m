#import <objc/objc-runtime.h>
#import <XCTest/XCTest.h>

#import <PrivateMediaRemote/PrivateMediaRemote.h>

@interface PrivateMediaRemoteTests : XCTestCase

@end

@implementation PrivateMediaRemoteTests

- (void)testConstants {
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoArtist isEqualToString:@"kMRMediaRemoteNowPlayingInfoArtist"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoTitle isEqualToString:@"kMRMediaRemoteNowPlayingInfoTitle"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoAlbum isEqualToString:@"kMRMediaRemoteNowPlayingInfoAlbum"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoArtworkData isEqualToString:@"kMRMediaRemoteNowPlayingInfoArtworkData"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoPlaybackRate isEqualToString:@"kMRMediaRemoteNowPlayingInfoPlaybackRate"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoDuration isEqualToString:@"kMRMediaRemoteNowPlayingInfoDuration"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoElapsedTime isEqualToString:@"kMRMediaRemoteNowPlayingInfoElapsedTime"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoTimestamp isEqualToString:@"kMRMediaRemoteNowPlayingInfoTimestamp"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoClientPropertiesData isEqualToString:@"kMRMediaRemoteNowPlayingInfoClientPropertiesData"]);

    XCTAssertTrue([kMRMediaRemoteNowPlayingInfoDidChangeNotification isEqualToString:@"kMRMediaRemoteNowPlayingInfoDidChangeNotification"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification isEqualToString:@"kMRMediaRemoteNowPlayingPlaybackQueueDidChangeNotification"]);
    XCTAssertTrue([kMRMediaRemotePickableRoutesDidChangeNotification isEqualToString:@"kMRMediaRemotePickableRoutesDidChangeNotification"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingApplicationDidChangeNotification isEqualToString:@"kMRMediaRemoteNowPlayingApplicationDidChangeNotification"]);
    XCTAssertTrue([kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification isEqualToString:@"kMRMediaRemoteNowPlayingApplicationIsPlayingDidChangeNotification"]);
    XCTAssertTrue([kMRMediaRemoteRouteStatusDidChangeNotification isEqualToString:@"kMRMediaRemoteRouteStatusDidChangeNotification"]);
    XCTAssertTrue([kMRNowPlayingPlaybackQueueChangedNotification isEqualToString:@"kMRNowPlayingPlaybackQueueChangedNotification"]);
    XCTAssertTrue([kMRPlaybackQueueContentItemsChangedNotification isEqualToString:@"kMRPlaybackQueueContentItemsChangedNotification"]);
}

@end
