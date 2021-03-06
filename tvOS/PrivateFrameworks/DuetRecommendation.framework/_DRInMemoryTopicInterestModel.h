//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DuetRecommendation/_DRTopicInterestModeling-Protocol.h>

@class NSMutableArray, _DRTopicInterestSummary;
@protocol OS_dispatch_queue;

@interface _DRInMemoryTopicInterestModel : NSObject <_DRTopicInterestModeling>
{
    NSMutableArray *_topics;
    _DRTopicInterestSummary *_summary;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

+ (id)predicateForTopicInteractionsBefore:(id)arg1;
+ (id)predicateForTopicInteractionsAfter:(id)arg1;
+ (id)predicateForTopicsWithPrefix:(id)arg1;
- (void).cxx_destruct;
- (void)purgeEntriesWithPrefix:(id)arg1 earlierThanDate:(id)arg2;
- (void)purgeEntriesEarlierThanDate:(id)arg1;
- (id)computeSummaryWithFilter:(id)arg1;
- (void)enumerateTopicCountsWithFilter:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)recordSelectionOfTopics:(id)arg1 onDate:(id)arg2;
- (void)recordPresentationOfTopics:(id)arg1 onDate:(id)arg2;
- (id)init;

@end

