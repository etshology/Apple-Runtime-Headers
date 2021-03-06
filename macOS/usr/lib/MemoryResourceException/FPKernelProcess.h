//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MemoryResourceException/FPProcess.h>

@class NSMutableDictionary;

@interface FPKernelProcess : FPProcess
{
    NSMutableDictionary *_auxData;
}

+ (void)_setNameForRegion:(id)arg1 withWiredInfo:(struct mach_memory_info *)arg2 andKexts:(id)arg3 andSymbolicator:(struct _CSTypeRef)arg4 zoneNames:(struct mach_zone_name *)arg5 zoneCount:(unsigned int)arg6;
+ (id)_nameForWiredInfo:(struct mach_memory_info *)arg1 withKexts:(id)arg2 andSymbolicator:(struct _CSTypeRef)arg3 zoneNames:(struct mach_zone_name *)arg4 zoneCount:(unsigned int)arg5;
+ (struct _CSTypeRef)_createSymbolicator;
+ (id)kextTags;
+ (id)_kextTagsWithKextInfo:(id)arg1;
- (void).cxx_destruct;
- (id)auxData;
- (BOOL)_isAlive;
- (BOOL)_populateTask;
- (void)_addWiredData:(struct mach_memory_info *)arg1 withCount:(unsigned int)arg2 zoneNames:(struct mach_zone_name *)arg3 zoneCount:(unsigned int)arg4 toArray:(id)arg5;
- (void)gatherData;
- (unsigned long long)_gatherPageSize;
- (id)initWithBsdInfo:(struct proc_bsdinfo *)arg1;

@end

