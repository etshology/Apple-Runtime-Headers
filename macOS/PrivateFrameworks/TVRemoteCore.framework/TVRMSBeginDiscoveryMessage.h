//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TVRemoteCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TVRMSBeginDiscoveryMessage : PBCodable <NSCopying>
{
    int _discoveryTypes;
    NSMutableArray *_pairedNetworkNames;
    BOOL _hasPairedNetworkNames;
    struct {
        unsigned int discoveryTypes:1;
        unsigned int hasPairedNetworkNames:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL hasPairedNetworkNames; // @synthesize hasPairedNetworkNames=_hasPairedNetworkNames;
@property(retain, nonatomic) NSMutableArray *pairedNetworkNames; // @synthesize pairedNetworkNames=_pairedNetworkNames;
@property(nonatomic) int discoveryTypes; // @synthesize discoveryTypes=_discoveryTypes;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasHasPairedNetworkNames;
- (id)pairedNetworkNamesAtIndex:(unsigned long long)arg1;
- (unsigned long long)pairedNetworkNamesCount;
- (void)addPairedNetworkNames:(id)arg1;
- (void)clearPairedNetworkNames;
@property(nonatomic) BOOL hasDiscoveryTypes;

@end

