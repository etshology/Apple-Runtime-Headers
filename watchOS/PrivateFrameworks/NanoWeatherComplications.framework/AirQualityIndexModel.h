//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface AirQualityIndexModel : NSObject
{
    float _fraction;
    NSString *_localizedIndex;
    UIColor *_tintColor;
    NSArray *_spectrum;
    NSArray *_spectrumTicks;
}

+ (id)airQualityIndexModelForConditions:(id)arg1 location:(id)arg2 indexNumberFormatter:(id)arg3 useRoundedVariant:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *spectrumTicks; // @synthesize spectrumTicks=_spectrumTicks;
@property(readonly, nonatomic) NSArray *spectrum; // @synthesize spectrum=_spectrum;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(readonly, nonatomic) NSString *localizedIndex; // @synthesize localizedIndex=_localizedIndex;
@property(readonly, nonatomic) float fraction; // @synthesize fraction=_fraction;

@end

