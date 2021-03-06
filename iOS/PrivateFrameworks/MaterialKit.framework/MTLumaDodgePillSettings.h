//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class MTLumaDodgePillStyleSettings;

@interface MTLumaDodgePillSettings : PTSettings
{
    double _minWidth;
    double _maxWidth;
    double _height;
    double _edgeSpacing;
    double _colorAddWhiteness;
    double _brightLumaThreshold;
    double _darkLumaThreshold;
    double _initialLumaThreshold;
    double _cornerRadius;
    long long _cornerMask;
    MTLumaDodgePillStyleSettings *_noneSettings;
    MTLumaDodgePillStyleSettings *_thinSettings;
    MTLumaDodgePillStyleSettings *_graySettings;
    MTLumaDodgePillStyleSettings *_blackSettings;
    MTLumaDodgePillStyleSettings *_whiteSettings;
}

+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MTLumaDodgePillStyleSettings *whiteSettings; // @synthesize whiteSettings=_whiteSettings;
@property(retain, nonatomic) MTLumaDodgePillStyleSettings *blackSettings; // @synthesize blackSettings=_blackSettings;
@property(retain, nonatomic) MTLumaDodgePillStyleSettings *graySettings; // @synthesize graySettings=_graySettings;
@property(retain, nonatomic) MTLumaDodgePillStyleSettings *thinSettings; // @synthesize thinSettings=_thinSettings;
@property(retain, nonatomic) MTLumaDodgePillStyleSettings *noneSettings; // @synthesize noneSettings=_noneSettings;
@property(nonatomic) long long cornerMask; // @synthesize cornerMask=_cornerMask;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double initialLumaThreshold; // @synthesize initialLumaThreshold=_initialLumaThreshold;
@property(nonatomic) double darkLumaThreshold; // @synthesize darkLumaThreshold=_darkLumaThreshold;
@property(nonatomic) double brightLumaThreshold; // @synthesize brightLumaThreshold=_brightLumaThreshold;
@property(nonatomic) double colorAddWhiteness; // @synthesize colorAddWhiteness=_colorAddWhiteness;
@property(nonatomic) double edgeSpacing; // @synthesize edgeSpacing=_edgeSpacing;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double maxWidth; // @synthesize maxWidth=_maxWidth;
@property(nonatomic) double minWidth; // @synthesize minWidth=_minWidth;
- (void)setDefaultValues;

@end

