//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineProactiveRegionsParameters : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_locations;
    unsigned int _maximumSizeInBytes;
    struct {
        unsigned int has_maximumSizeInBytes:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
+ (Class)locationType;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMaximumSizeInBytes;
@property(nonatomic) unsigned int maximumSizeInBytes;
- (id)locationAtIndex:(unsigned int)arg1;
- (unsigned int)locationsCount;
- (void)addLocation:(id)arg1;
- (void)clearLocations;
@property(retain, nonatomic) NSMutableArray *locations;

@end

