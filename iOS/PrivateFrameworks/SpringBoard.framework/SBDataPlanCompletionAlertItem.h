//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBDataPlanAlertItem.h>

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem
{
    NSString *_carrierName;
    _Bool _newAccount;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isNewAccount) _Bool newAccount; // @synthesize newAccount=_newAccount;
@property(copy, nonatomic) NSString *carrierName; // @synthesize carrierName=_carrierName;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (id)initWithCarrierName:(id)arg1 newAccount:(_Bool)arg2;

@end

