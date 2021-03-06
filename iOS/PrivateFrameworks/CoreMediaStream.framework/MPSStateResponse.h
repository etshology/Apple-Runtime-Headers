//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreMediaStream/NSCopying-Protocol.h>

@interface MPSStateResponse : PBCodable <NSCopying>
{
    long long _retryAfterSeconds;
    long long _version;
    int _icplAction;
    int _mpsAction;
    struct {
        unsigned int retryAfterSeconds:1;
        unsigned int version:1;
        unsigned int icplAction:1;
        unsigned int mpsAction:1;
    } _has;
}

@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) long long retryAfterSeconds; // @synthesize retryAfterSeconds=_retryAfterSeconds;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasVersion;
- (int)StringAsIcplAction:(id)arg1;
- (id)icplActionAsString:(int)arg1;
@property(nonatomic) _Bool hasIcplAction;
@property(nonatomic) int icplAction; // @synthesize icplAction=_icplAction;
- (int)StringAsMpsAction:(id)arg1;
- (id)mpsActionAsString:(int)arg1;
@property(nonatomic) _Bool hasMpsAction;
@property(nonatomic) int mpsAction; // @synthesize mpsAction=_mpsAction;
@property(nonatomic) _Bool hasRetryAfterSeconds;

@end

