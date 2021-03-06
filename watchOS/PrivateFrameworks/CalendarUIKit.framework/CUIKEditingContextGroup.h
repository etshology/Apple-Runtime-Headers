//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CUIKObjectGroup, EKEventStore, NSMutableArray, NSNumber, NSSet;

@interface CUIKEditingContextGroup : NSObject
{
    CUIKObjectGroup *_objectGroup;
    NSSet *_openContexts;
    EKEventStore *_eventStore;
    NSMutableArray *_additionalObjectGroups;
    NSNumber *_spanDecisionAsNumber;
    NSNumber *_earlyCommitDecisionAsNumber;
}

- (void).cxx_destruct;
@property(retain) NSNumber *earlyCommitDecisionAsNumber; // @synthesize earlyCommitDecisionAsNumber=_earlyCommitDecisionAsNumber;
@property(retain) NSNumber *spanDecisionAsNumber; // @synthesize spanDecisionAsNumber=_spanDecisionAsNumber;
@property(retain) NSMutableArray *additionalObjectGroups; // @synthesize additionalObjectGroups=_additionalObjectGroups;
@property __weak EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property(retain) NSSet *openContexts; // @synthesize openContexts=_openContexts;
@property(retain) CUIKObjectGroup *objectGroup; // @synthesize objectGroup=_objectGroup;

@end

