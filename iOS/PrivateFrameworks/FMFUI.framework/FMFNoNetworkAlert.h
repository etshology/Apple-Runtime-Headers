//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMFNoNetworkAlert : NSObject
{
    _Bool _globalCellularEnabled;
}

+ (_Bool)isAirplaneModeEnabled;
+ (_Bool)isGlobalCellularEnabled;
+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1;
+ (unsigned long long)reasonForNoInternet;
+ (id)newAlertController;
@property(nonatomic, getter=isGlobalCellularEnabled) _Bool globalCellularEnabled; // @synthesize globalCellularEnabled=_globalCellularEnabled;

@end

