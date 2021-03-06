//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideosUI/VUIButton.h>

@class NSString, VUICircularProgress;

__attribute__((visibility("hidden")))
@interface VUITransactionButton : VUIButton
{
    _Bool _waitingForTransactionToStart;
    _Bool _monitorTransaction;
    VUICircularProgress *_progressIndicator;
    NSString *_textContentTitleBackup;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *textContentTitleBackup; // @synthesize textContentTitleBackup=_textContentTitleBackup;
@property(retain, nonatomic) VUICircularProgress *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(nonatomic) _Bool monitorTransaction; // @synthesize monitorTransaction=_monitorTransaction;
@property(nonatomic, getter=isWaitingForTransactionToStart) _Bool waitingForTransactionToStart; // @synthesize waitingForTransactionToStart=_waitingForTransactionToStart;
- (void)_handleTransactionDidFinishNotification:(id)arg1;
- (void)_handleTransactionDidStartNotification:(id)arg1;
- (void)_unregisterTransactionNotifications;
- (void)_registerForTransactionNotification;
- (void)_addProgressIndicatorWithFrame:(struct CGRect)arg1;
- (id)_transactionBuyParams;
- (void)_updateProgressIndicatorTintColor:(id)arg1;
- (void)_buttonTapped:(id)arg1 eventName:(id)arg2;
- (void)_layoutProgressIndicatorIfNeeded;
- (id)_carouselView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)updateWithElement:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithLayout:(id)arg1 interfaceStyle:(long long)arg2;

@end

