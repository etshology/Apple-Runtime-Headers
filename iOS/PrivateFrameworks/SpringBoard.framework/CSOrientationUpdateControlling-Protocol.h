//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString;

@protocol CSOrientationUpdateControlling <NSObject>
- (void)noteInterfaceOrientationChanged:(long long)arg1 duration:(double)arg2 logMessage:(NSString *)arg3;
- (void)cancelOrientationUpdateDeferral;
- (void)deferOrientationUpdatesWithReason:(NSString *)arg1;
@end

