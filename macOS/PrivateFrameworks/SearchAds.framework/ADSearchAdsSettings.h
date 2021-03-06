//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AdCore/ADSingleton.h>

@class ADClientSettingsResponse, NSArray, NSString, NSURL;

@interface ADSearchAdsSettings : ADSingleton
{
    BOOL _isTest;
    BOOL _isBaseline;
    BOOL _isCustomTemplate;
    BOOL _isRequestedImage;
    BOOL _isRequestedRating;
    NSURL *_defaultToroServerURL;
    NSURL *_defaultAdTargetingServerURL;
    NSString *_algoID;
    NSArray *_userKeyboards;
    double _requestedLocationAccuracy;
    double _locationGridSpacing;
    NSString *_requestedText;
    NSString *_requestedIcon;
    NSString *_templateType;
    double _reverseGeolocationRefreshThresholdInMeters;
    double _clickExpirationThresholdInSeconds;
    double _frequencyCapExpirationInSeconds;
    unsigned long long _maxFrequencyCapElements;
    unsigned long long _maxClickCapElements;
    ADClientSettingsResponse *_clientSettings;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) ADClientSettingsResponse *clientSettings; // @synthesize clientSettings=_clientSettings;
@property(nonatomic) unsigned long long maxClickCapElements; // @synthesize maxClickCapElements=_maxClickCapElements;
@property(nonatomic) unsigned long long maxFrequencyCapElements; // @synthesize maxFrequencyCapElements=_maxFrequencyCapElements;
@property(nonatomic) double frequencyCapExpirationInSeconds; // @synthesize frequencyCapExpirationInSeconds=_frequencyCapExpirationInSeconds;
@property(nonatomic) double clickExpirationThresholdInSeconds; // @synthesize clickExpirationThresholdInSeconds=_clickExpirationThresholdInSeconds;
@property(nonatomic) double reverseGeolocationRefreshThresholdInMeters; // @synthesize reverseGeolocationRefreshThresholdInMeters=_reverseGeolocationRefreshThresholdInMeters;
@property(retain, nonatomic) NSString *templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) NSString *requestedIcon; // @synthesize requestedIcon=_requestedIcon;
@property(retain, nonatomic) NSString *requestedText; // @synthesize requestedText=_requestedText;
@property(nonatomic) BOOL isRequestedRating; // @synthesize isRequestedRating=_isRequestedRating;
@property(nonatomic) BOOL isRequestedImage; // @synthesize isRequestedImage=_isRequestedImage;
@property(nonatomic) BOOL isCustomTemplate; // @synthesize isCustomTemplate=_isCustomTemplate;
@property(nonatomic) BOOL isBaseline; // @synthesize isBaseline=_isBaseline;
@property(nonatomic) BOOL isTest; // @synthesize isTest=_isTest;
@property(nonatomic) double locationGridSpacing; // @synthesize locationGridSpacing=_locationGridSpacing;
@property(nonatomic) double requestedLocationAccuracy; // @synthesize requestedLocationAccuracy=_requestedLocationAccuracy;
@property(retain, nonatomic) NSArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *algoID; // @synthesize algoID=_algoID;
@property(retain, nonatomic) NSURL *defaultAdTargetingServerURL; // @synthesize defaultAdTargetingServerURL=_defaultAdTargetingServerURL;
@property(retain, nonatomic) NSURL *defaultToroServerURL; // @synthesize defaultToroServerURL=_defaultToroServerURL;
- (void)overrideRevGeoThreshold:(double)arg1;
- (void)overrideMaxToroClickElements:(unsigned long long)arg1;
- (void)overrideToroClickExpiration:(double)arg1;
- (void)overrideMaxFrequencyCapElements:(unsigned long long)arg1;
- (void)overrideFrequencyCapExpiration:(double)arg1;
- (void)checkDefaultsAndSetInternalSettingsOverrides;
- (void)applyClientSettings;
- (void)refreshClientSettings:(CDUnknownBlockType)arg1;
- (void)restoreClientSettings;
- (void)refresh;
- (double)clientSettingsExpirationDate;
- (void)expireClientSettings;
- (id)init;

@end

