#ifndef PrivateMediaRemote_MRPlaybackQueueRequest_h
#define PrivateMediaRemote_MRPlaybackQueueRequest_h

API_AVAILABLE(macos(10.15))
@interface MRPlaybackQueueRequest : NSObject {
	double _artworkHeight;
	double _artworkWidth;
	BOOL _includeInfo;
	BOOL _includeLanguageOptions;
	BOOL _includeLyrics;
	BOOL _includeMetadata;
}

@property (nonatomic) double artworkHeight;
@property (nonatomic) double artworkWidth;
@property (nonatomic, readonly) BOOL includeArtwork;
@property (nonatomic) BOOL includeInfo;
@property (nonatomic) BOOL includeLanguageOptions;
@property (nonatomic) BOOL includeLyrics;
@property (nonatomic) BOOL includeMetadata;

+ (instancetype)defaultPlaybackQueueRequest API_AVAILABLE(macos(11.0));

@end

#endif /* PrivateMediaRemote_MRPlaybackQueueRequest_h */
