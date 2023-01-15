#ifndef PrivateMediaRemote_MRPlayer_h
#define PrivateMediaRemote_MRPlayer_h

API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(10.15))
@interface MRPlayer : NSObject {
	NSString *_displayName;
	NSString *_identifier;
}

+ (instancetype)anyPlayer API_AVAILABLE(macos(11.0));
+ (instancetype)defaultPlayer;

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *displayName;

@end

#endif /* PrivateMediaRemote_MRPlayer_h */
