//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface MRMediaControlsVideoPickerHeaderView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    UIImageView *_airPlayIconImageView;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *airPlayIconImageView; // @synthesize airPlayIconImageView=_airPlayIconImageView;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateStyle;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

