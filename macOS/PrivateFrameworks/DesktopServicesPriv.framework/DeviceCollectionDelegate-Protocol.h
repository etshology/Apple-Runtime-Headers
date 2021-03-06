//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DesktopServicesPriv/NSObject-Protocol.h>

@class AMPDevice, NSProgress;

@protocol DeviceCollectionDelegate <NSObject>

@optional
- (void)completedOperationForDevice:(AMPDevice *)arg1;
- (void)startedOperationForDevice:(AMPDevice *)arg1 withProgress:(NSProgress *)arg2 allowCancel:(BOOL)arg3;
- (void)startedOperationForDevice:(AMPDevice *)arg1 allowCancel:(BOOL)arg2;
- (void)nameChangedForDevice:(AMPDevice *)arg1;
- (void)deviceChanged:(AMPDevice *)arg1;
- (void)allDevicesDetached;
- (void)deviceDetached:(AMPDevice *)arg1;
- (void)deviceAttached:(AMPDevice *)arg1;
@end

