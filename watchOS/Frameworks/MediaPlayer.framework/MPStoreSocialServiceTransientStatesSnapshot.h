//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MPStoreSocialServiceTransientStatesSnapshot : NSObject
{
    NSMutableDictionary *_transientFollowStatesPerProfileID;
    NSMutableDictionary *_transientFollowPendingRequestStatesPerProfileID;
}

- (void).cxx_destruct;
- (void)_addTransientFollowState:(int)arg1 transientFollowPendingRequestState:(int)arg2 forPerson:(id)arg3;
- (int)transientFollowPendingRequestStateForPerson:(id)arg1;
- (int)transientFollowStateForPerson:(id)arg1;
- (id)init;

@end

