//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKEditOptionPickerSideView.h>

#import <NanoTimeKitCompanion/NTKCurvedPickerSideView-Protocol.h>

@class NSString, NTKComplicationLayoutRule;

@interface NTKComplicationPickerSideView : NTKEditOptionPickerSideView <NTKCurvedPickerSideView>
{
    NTKComplicationLayoutRule *_layoutRule;
    long long _style;
}

- (void).cxx_destruct;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(copy, nonatomic) NTKComplicationLayoutRule *layoutRule; // @synthesize layoutRule=_layoutRule;
- (void)setCurvedAngle:(double)arg1;
- (void)layoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

