//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackContentContainerView, UIView, UIViewController;
@protocol AVPlaybackContentContainer, UIViewControllerTransitionCoordinator;

@protocol AVPlayerViewControllerBehaviorContext <NSObject>

@optional
- (UIView<AVPlaybackContentContainer> *)makePlaybackContentContainerWithFrame:(struct CGRect)arg1 activeContentView:(AVPlaybackContentContainerView *)arg2;
- (void)didStopPictureInPicture;
- (void)willStartPictureInPictureWithViewController:(UIViewController *)arg1;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withCoordinator:(id <UIViewControllerTransitionCoordinator>)arg2;
- (void)viewDidLoad;
@end

