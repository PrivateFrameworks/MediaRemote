#include <PrivateProtocolBuffer/PrivateProtocolBuffer.h>
#include "PrivateMediaRemote.h"

#ifndef PrivateMediaRemote__MRNowPlayingClientProtobuf_h
#define PrivateMediaRemote__MRNowPlayingClientProtobuf_h

@interface _MRNowPlayingClientProtobuf : PBCodable <NSCopying> {
	NSString *_bundleIdentifier;
	NSString *_displayName;
	int _nowPlayingVisibility;
	NSString *_parentApplicationBundleIdentifier;
	int _processIdentifier;
	int _processUserIdentifier;
	_MRColorProtobuf *_tintColor;
	struct {
		unsigned int nowPlayingVisibility: 1;
		unsigned int processIdentifier: 1;
		unsigned int processUserIdentifier: 1;
		unsigned int isEmptyDeprecated: 1;
	} _has;
}

@property (assign, nonatomic) bool hasProcessIdentifier;
@property (assign, nonatomic) int processIdentifier; //@synthesize processIdentifier=_processIdentifier - In the implementation block
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly, retain) NSString* bundleIdentifier; //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic, readonly) bool hasParentApplicationBundleIdentifier;
@property (nonatomic, readonly, retain) NSString* parentApplicationBundleIdentifier; //@synthesize parentApplicationBundleIdentifier=_parentApplicationBundleIdentifier - In the implementation block
@property (assign, nonatomic) bool hasProcessUserIdentifier;
@property (assign, nonatomic) int processUserIdentifier; //@synthesize processUserIdentifier=_processUserIdentifier - In the implementation block
@property (assign, nonatomic) bool hasNowPlayingVisibility;
@property (assign, nonatomic) int nowPlayingVisibility; //@synthesize nowPlayingVisibility=_nowPlayingVisibility - In the implementation block
@property (nonatomic, readonly) bool hasTintColor;
@property (nonatomic, retain) _MRColorProtobuf* tintColor; //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic, readonly) bool hasDisplayName;
@property (nonatomic, readonly, retain) NSString* displayName; //@synthesize displayName=_displayName - In the implementation block

- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)hasDisplayName;
- (void)setDisplayName:(id)arg1;
- (bool)hasBundleIdentifier;
- (void)dealloc;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)bundleIdentifier;
- (_MRColorProtobuf *)tintColor;
- (void)setTintColor:(_MRColorProtobuf *)arg1;
- (id)copyWithZone:(NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)setBundleIdentifier:(id)arg1;
- (id)displayName;
- (int)processIdentifier;
- (void)setParentApplicationBundleIdentifier:(id)arg1;
- (void)setHasProcessIdentifier:(bool)arg1;
- (bool)hasProcessIdentifier;
- (bool)hasParentApplicationBundleIdentifier;
- (void)setProcessUserIdentifier:(int)arg1;
- (void)setHasProcessUserIdentifier:(bool)arg1;
- (bool)hasProcessUserIdentifier;
- (int)nowPlayingVisibility;
- (void)setNowPlayingVisibility:(int)arg1;
- (void)setHasNowPlayingVisibility:(bool)arg1;
- (bool)hasNowPlayingVisibility;
- (id)nowPlayingVisibilityAsString:(int)arg1;
- (int)StringAsNowPlayingVisibility:(id)arg1;
- (bool)hasTintColor;
- (id)parentApplicationBundleIdentifier;
- (int)processUserIdentifier;
- (void)setProcessIdentifier:(int)arg1;

@end

#endif /* PrivateMediaRemote__MRNowPlayingClientProtobuf_h */
