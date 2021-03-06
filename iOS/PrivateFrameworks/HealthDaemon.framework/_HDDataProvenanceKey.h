//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDDataOriginProvenance, NSString;

@interface _HDDataProvenanceKey : NSObject <NSCopying>
{
    unsigned long long _hash;
    HDDataOriginProvenance *_dataProvenance;
    NSString *_localProductType;
    NSString *_localSystemBuild;
}

+ (id)provenanceKeyForProvenance:(id)arg1 localProductType:(id)arg2 localSystemBuild:(id)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *localSystemBuild; // @synthesize localSystemBuild=_localSystemBuild;
@property(readonly, copy, nonatomic) NSString *localProductType; // @synthesize localProductType=_localProductType;
@property(readonly, copy, nonatomic) HDDataOriginProvenance *dataProvenance; // @synthesize dataProvenance=_dataProvenance;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

