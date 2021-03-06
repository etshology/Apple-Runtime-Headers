//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HMDHAPAccessory, NSData, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HMDAccessoryBrowserHapProtocol
- (void)updateStateForIdentifier:(NSString *)arg1 stateNumber:(NSNumber *)arg2;
- (void)configureAccessory:(HMDHAPAccessory *)arg1 trackState:(BOOL)arg2 connectionPriority:(BOOL)arg3;
- (void)updateBroadcastKeyForIdentifer:(NSString *)arg1 key:(NSData *)arg2 keyUpdatedStateNumber:(NSNumber *)arg3 keyUpdatedTime:(double)arg4;
- (void)retrieveCurrentStateForIdentifer:(NSString *)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 withCompletion:(void (^)(NSNumber *, BOOL, unsigned long long))arg3;
@end

