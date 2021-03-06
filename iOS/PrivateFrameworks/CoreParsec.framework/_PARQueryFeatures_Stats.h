//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_PARQueryFeatures_Stats-Protocol.h>

@class NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PARQueryFeatures_Stats : PBCodable <_PARQueryFeatures_Stats, NSSecureCoding>
{
    NSArray *_Ceps;
    NSArray *_CepLongs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *CepLongs; // @synthesize CepLongs=_CepLongs;
@property(copy, nonatomic) NSArray *Ceps; // @synthesize Ceps=_Ceps;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)CepLongAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepLongCount;
- (void)addCepLong:(id)arg1;
- (void)clearCepLong;
- (void)setCepLong:(id)arg1;
- (id)CepAtIndex:(unsigned long long)arg1;
- (unsigned long long)CepCount;
- (void)addCep:(id)arg1;
- (void)clearCep;
- (void)setCep:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

