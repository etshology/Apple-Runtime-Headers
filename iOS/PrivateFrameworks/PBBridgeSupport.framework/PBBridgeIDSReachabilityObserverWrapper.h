//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PBBridgeIDSReachabilityObserver;

@interface PBBridgeIDSReachabilityObserverWrapper : NSObject
{
    id <PBBridgeIDSReachabilityObserver> _observer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PBBridgeIDSReachabilityObserver> observer; // @synthesize observer=_observer;
- (void)fireReachability:(id)arg1 deviceStatus:(id)arg2 devices:(id)arg3;

@end

