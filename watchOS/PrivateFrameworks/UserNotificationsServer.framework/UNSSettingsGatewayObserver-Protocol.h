//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsServer/NSObject-Protocol.h>

@class BBGlobalSettings, NSSet, UNSSettingsGateway;

@protocol UNSSettingsGatewayObserver <NSObject>

@optional
- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateGlobalSettings:(BBGlobalSettings *)arg2;
- (void)settingsGateway:(UNSSettingsGateway *)arg1 didUpdateSectionInfoForSectionIDs:(NSSet *)arg2;
@end

