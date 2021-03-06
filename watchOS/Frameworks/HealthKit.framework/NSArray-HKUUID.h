//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSArray.h>

#import <HealthKit/HKCodedObject-Protocol.h>
#import <HealthKit/HKUUIDCollection-Protocol.h>

@class NSString;

@interface NSArray (HKUUID) <HKUUIDCollection, HKCodedObject>
+ (_Bool)_permutationHelperForArray:(id)arg1 number:(int)arg2 permutationHandler:(CDUnknownBlockType)arg3;
+ (id)hk_arrayWithCount:(int)arg1 generator:(CDUnknownBlockType)arg2;
+ (id)indexableKeyPathsWithPrefix:(id)arg1;
- (id)hk_dataForAllUUIDs;
- (_Bool)hk_enumerateUUIDsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (_Bool)_permutationsWithCount:(int)arg1 permutation:(id)arg2 depth:(int)arg3 block:(CDUnknownBlockType)arg4;
- (void)hk_enumeratePermutationsOfSubsetsOfLength:(int)arg1 block:(CDUnknownBlockType)arg2;
- (id)hk_reversed;
- (void)hk_enumeratePermutationsWithBlock:(CDUnknownBlockType)arg1;
- (id)hk_mapToSet:(CDUnknownBlockType)arg1;
- (id)hk_mapToDictionary:(CDUnknownBlockType)arg1;
- (id)hk_orPredicateWithPredicateBlock:(CDUnknownBlockType)arg1;
- (void)hk_partitionArrayWithPartitionSetupBlock:(CDUnknownBlockType)arg1 partitionMembershipCheckBlock:(CDUnknownBlockType)arg2 partitionExtendBlock:(CDUnknownBlockType)arg3 partitionFinalizeBlock:(CDUnknownBlockType)arg4;
- (_Bool)hk_allElementsUnique;
- (_Bool)hk_containsObjectsInArray:(id)arg1;
- (id)hk_firstSortedObjectWithComparison:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMinimumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectWithMaximumValueUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (double)hk_sumUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_averageUsingEvaluationBlock:(CDUnknownBlockType)arg1;
- (id)hk_firstObjectPassingTest:(CDUnknownBlockType)arg1;
- (id)hk_foldRightFrom:(id)arg1 with:(CDUnknownBlockType)arg2;
- (id)hk_filter:(CDUnknownBlockType)arg1;
- (id)hk_map:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)hk_map:(CDUnknownBlockType)arg1;
- (_Bool)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id *)arg3;
- (id)codingsForKeyPath:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end

