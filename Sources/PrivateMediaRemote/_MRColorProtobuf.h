#ifndef PrivateMediaRemote__MRColorProtobuf_h
#define PrivateMediaRemote__MRColorProtobuf_h

#import <PrivateProtocolBuffer/PrivateProtocolBuffer.h>

@interface _MRColorProtobuf : PBCodable <NSCopying> {
	float _alpha;
	float _blue;
	float _green;
	float _red;
	struct {
		unsigned state: 1;
		unsigned status: 1;
		unsigned isRetrying: 1;
		unsigned isUsingSystemPairing: 1;
	} _has;
}

@property (assign, nonatomic) BOOL hasRed;
@property (assign, nonatomic) float red;
@property (assign, nonatomic) BOOL hasGreen;
@property (assign, nonatomic) float green;
@property (assign, nonatomic) BOOL hasBlue;
@property (assign, nonatomic) float blue;
@property (assign, nonatomic) BOOL hasAlpha;
@property (assign, nonatomic) float alpha;

- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)mergeFrom:(id)arg1;
- (void)copyTo:(id)arg1;

@end

#endif /* PrivateMediaRemote__MRColorProtobuf_h */
