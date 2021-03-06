//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPDExtensionManager;

__attribute__((visibility("hidden")))
@interface FPDCacheDeleteService : NSObject
{
    FPDExtensionManager *_extensionManager;
}

+ (int)urgencyAtWhichItIsAcceptableToPurgeItemWithLastUsedDate:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) FPDExtensionManager *extensionManager; // @synthesize extensionManager=_extensionManager;
- (void)dumpStateTo:(id)arg1;
- (id)evictableByProviderDomainID:(int)arg1;
- (id)queryWithAttributes:(id)arg1;
- (void)evictItems:(id)arg1;
- (void)enumerateProviderDomainOnVolume:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePurgeableFilesOnVolume:(id)arg1 forUrgency:(int)arg2 sizeOnly:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (id)allStorageVolumes;
- (id)volumesByProviderDomain;
- (BOOL)getVolume:(int *)arg1 forPath:(id)arg2;
- (BOOL)shouldSearchableItem:(id)arg1 beEvictedAtUrgency:(int)arg2;
- (void)registerActivity;
- (id)nonPurgableSpacePerProviderOnVolume:(id)arg1;
- (id)purgableSpaceForAllUrgenciesOnVolume:(id)arg1;
- (void)start;

@end

