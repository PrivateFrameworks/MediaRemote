#ifndef PrivateMediaRemote_MROrigin_h
#define PrivateMediaRemote_MROrigin_h

API_AVAILABLE(ios(14), tvos(14), watchos(7), macos(10.15))
@interface MROrigin : NSObject

/// New instance on every call
+ (instancetype)anyOrigin API_AVAILABLE(macos(11.0));

/// Same instance on every call
+ (MROrigin *)localOrigin;

@end

#endif /* PrivateMediaRemote_MROrigin_h */
