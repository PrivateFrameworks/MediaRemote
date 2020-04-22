#include <PrivateProtocolBuffer/PrivateProtocolBuffer.h>

#ifndef _MRColorProtobuf_h
#define _MRColorProtobuf_h

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

@property (assign,nonatomic) BOOL hasRed;
@property (assign,nonatomic) float red; //@synthesize red=_red - In the implementation block
@property (assign,nonatomic) BOOL hasGreen;
@property (assign,nonatomic) float green; //@synthesize green=_green - In the implementation block
@property (assign,nonatomic) BOOL hasBlue;
@property (assign,nonatomic) float blue; //@synthesize blue=_blue - In the implementation block
@property (assign,nonatomic) BOOL hasAlpha;
@property (assign,nonatomic) float alpha; //@synthesize alpha=_alpha - In the implementation block

-(BOOL)isEqual:(id)arg1;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1;
-(float)red;
-(float)green;
-(float)blue;
-(float)alpha;
-(void)mergeFrom:(id)arg1;
-(BOOL)readFrom:(id)arg1;
-(void)copyTo:(id)arg1;
-(void)setAlpha:(float)arg1;
-(void)setBlue:(float)arg1;
-(void)setGreen:(float)arg1;
-(void)setRed:(float)arg1;
-(void)setHasAlpha:(BOOL)arg1;
-(BOOL)hasAlpha;
-(void)setHasRed:(BOOL)arg1;
-(BOOL)hasRed;
-(void)setHasGreen:(BOOL)arg1;
-(BOOL)hasGreen;
-(void)setHasBlue:(BOOL)arg1;
-(BOOL)hasBlue;

@end

#endif /* _MRColorProtobuf_h */
