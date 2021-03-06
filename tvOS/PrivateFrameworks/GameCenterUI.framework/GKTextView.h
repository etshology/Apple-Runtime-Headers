//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class GKLabel, GKTextStyle, NSAttributedString, NSString;

@interface GKTextView : UITextView
{
    GKTextStyle *__baseStyle;
    GKTextStyle *_appliedStyle;
    GKLabel *_placeholderLabel;
}

+ (void)initialize;
@property(nonatomic) GKLabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) GKTextStyle *appliedStyle; // @synthesize appliedStyle=_appliedStyle;
@property(retain, nonatomic) GKTextStyle *_baseStyle; // @synthesize _baseStyle=__baseStyle;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (id)insertDictationResultPlaceholder;
- (void)replayAndApplyStyle;
- (void)applyTextStyle:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) NSAttributedString *attributedPlaceholderText;
@property(retain, nonatomic) NSString *placeholderText;
- (void)setAttributedText:(id)arg1;
- (void)textStorageDidChangeNotification:(id)arg1;
- (void)setText:(id)arg1;
- (void)updatePlaceholderVisibility;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

