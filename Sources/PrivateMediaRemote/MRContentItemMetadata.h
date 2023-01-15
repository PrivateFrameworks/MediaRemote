#ifndef PrivateMediaRemote_MRContentItemMetadata_h
#define PrivateMediaRemote_MRContentItemMetadata_h

@interface MRContentItemMetadata : NSObject {
	NSDate *_currentPlaybackDate;
}

@property (nonatomic, copy) NSDate *currentPlaybackDate;

@end

API_AVAILABLE(macos(11.0))
@interface MRContentItemMetadata () {
	NSString *_artworkMIMEType;
	NSString *_trackArtistName;
	NSString *_title;
	NSString *_albumName;
	double *_duration;
	double *_elapsedTime;
	double *_elapsedTimeTimestamp;
}

@property (nonatomic, copy) NSString *artworkMIMEType;
@property (nonatomic, copy) NSString *trackArtistName;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *albumName;
@property (nonatomic) double duration;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double elapsedTimeTimestamp;
@property (nonatomic, readonly) double calculatedPlaybackPosition;

@end

#endif /* PrivateMediaRemote_MRContentItemMetadata_h */
