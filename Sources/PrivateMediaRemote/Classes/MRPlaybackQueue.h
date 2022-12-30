#ifndef PrivateMediaRemote_MRPlaybackQueue_h
#define PrivateMediaRemote_MRPlaybackQueue_h

API_AVAILABLE(macos(11.0))
@interface MRPlaybackQueue : NSObject {
	NSArray<MRContentItem *> *_contentItems;
}

@property (nonatomic, copy) NSArray<MRContentItem *> *contentItems;

@end

#endif /* PrivateMediaRemote_MRPlaybackQueue_h */
