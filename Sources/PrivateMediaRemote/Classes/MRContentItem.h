#ifndef PrivateMediaRemote_MRContentItem_h
#define PrivateMediaRemote_MRContentItem_h

#import "MRContentItemMetadata.h"
#import "MRArtwork.h"

/// Before macOS 11.0 `MRContentItem` inherited `_MRContentItemProtobuf`
@interface MRContentItem : NSObject

@property (nonatomic, copy) NSString *identifier API_AVAILABLE(macos(11.0));
@property (nonatomic, copy) MRContentItemMetadata *metadata API_AVAILABLE(macos(11.0));
@property (nonatomic, retain) MRArtwork *artwork API_AVAILABLE(macos(11.0));

@end

#endif /* PrivateMediaRemote_MRContentItem_h */
