//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CAFilter, MTCoreMaterialVisualStyling, NSString, UIColor;

@interface MTVisualStyling : NSObject
{
    MTCoreMaterialVisualStyling *_coreMaterialVisualStyling;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_coreMaterialVisualStyling) MTCoreMaterialVisualStyling *coreMaterialVisualStyling; // @synthesize coreMaterialVisualStyling=_coreMaterialVisualStyling;
- (id)visualEffect;
@property(readonly, nonatomic) CAFilter *composedFilter;
@property(readonly, nonatomic) double alpha;
@property(readonly, copy, nonatomic) UIColor *color;
- (id)_layerConfig;
@property(readonly, copy, nonatomic) NSString *visualStyleName;
@property(readonly, copy, nonatomic) NSString *visualStyleSetName;
- (id)initWithCoreMaterialVisualStyling:(id)arg1;

@end

