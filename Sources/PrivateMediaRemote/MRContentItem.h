#ifndef PrivateMediaRemote_MRContentItem_h
#define PrivateMediaRemote_MRContentItem_h

#import <PrivateMediaRemote/MRContentItemMetadata.h>
#import <PrivateMediaRemote/MRArtwork.h>

/// Before macOS 11.0 `MRContentItem` inherited `_MRContentItemProtobuf`
@interface MRContentItem : NSObject

@property (nonatomic, copy) NSString *identifier API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(11.0));
@property (nonatomic, copy) MRContentItemMetadata *metadata API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(11.0));
@property (nonatomic, retain) MRArtwork *artwork API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(11.0));

@end

#endif /* PrivateMediaRemote_MRContentItem_h */
