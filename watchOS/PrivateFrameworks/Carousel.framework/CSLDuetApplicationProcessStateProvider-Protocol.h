//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/NSObject-Protocol.h>

@class CSLDuetApplicationProcessState, NSString;
@protocol CSLDuetApplicationProcessStateObserver;

@protocol CSLDuetApplicationProcessStateProvider <NSObject>
@property(nonatomic) __weak id <CSLDuetApplicationProcessStateObserver> observer;
- (CSLDuetApplicationProcessState *)processStateForBundleID:(NSString *)arg1;
- (_Bool)isApplicationForeground:(NSString *)arg1;
@end

