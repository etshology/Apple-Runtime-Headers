//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBUIBannerItem : NSObject
{
}

- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (_Bool)hasSubActions;
- (id)subActions;
- (id)subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)message;
- (id)title;
- (_Bool)canShowWhileLocked;
- (_Bool)shouldPlayLightsAndSirens;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (unsigned long long)priority;

@end

