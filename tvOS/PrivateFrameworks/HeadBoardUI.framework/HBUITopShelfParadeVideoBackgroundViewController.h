//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <HeadBoardUI/HBUITopShelfParadeBackgroundViewController-Protocol.h>

@class AVPlayer, HBUIPlayerView, HBUIPlayerVolumeAnimator, NSString, NSTimer, TVImageProxy, TVSStateMachine, UIImageView;
@protocol HBUITopShelfParadeBackgroundViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeVideoBackgroundViewController : UIViewController <HBUITopShelfParadeBackgroundViewController>
{
    _Bool _isCenterViewController;
    _Bool _muted;
    _Bool _contentOccluded;
    _Bool _preventsDisplaySleepDuringPreviewVideoPlayback;
    id <HBUITopShelfParadeItem> _paradeItem;
    id <HBUITopShelfParadeBackgroundViewControllerDelegate> _delegate;
    TVSStateMachine *_stateMachine;
    UIImageView *_bumperImageView;
    HBUIPlayerView *_bumperCinemagraphView;
    HBUIPlayerView *_previewVideoView;
    AVPlayer *_bumperCinemagraphPlayer;
    AVPlayer *_previewVideoPlayer;
    HBUIPlayerVolumeAnimator *_previewVideoVolumeAnimator;
    TVImageProxy *_bumperImageProxy;
    NSTimer *_beforePreviewVideoTimer;
    NSTimer *_previewVideoTimeoutTimer;
    NSTimer *_afterPreviewVideoTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic, getter=_afterPreviewVideoTimer, setter=_setAfterPreviewVideoTimer:) NSTimer *afterPreviewVideoTimer; // @synthesize afterPreviewVideoTimer=_afterPreviewVideoTimer;
@property(retain, nonatomic, getter=_previewVideoTimeoutTimer, setter=_setPreviewVideoTimeoutTimer:) NSTimer *previewVideoTimeoutTimer; // @synthesize previewVideoTimeoutTimer=_previewVideoTimeoutTimer;
@property(retain, nonatomic, getter=_beforePreviewVideoTimer, setter=_setBeforePreviewVideoTimer:) NSTimer *beforePreviewVideoTimer; // @synthesize beforePreviewVideoTimer=_beforePreviewVideoTimer;
@property(retain, nonatomic, getter=_bumperImageProxy, setter=_setBumperImageProxy:) TVImageProxy *bumperImageProxy; // @synthesize bumperImageProxy=_bumperImageProxy;
@property(readonly, nonatomic) HBUIPlayerVolumeAnimator *previewVideoVolumeAnimator; // @synthesize previewVideoVolumeAnimator=_previewVideoVolumeAnimator;
@property(readonly, nonatomic, getter=_previewVideoPlayer) AVPlayer *previewVideoPlayer; // @synthesize previewVideoPlayer=_previewVideoPlayer;
@property(readonly, nonatomic, getter=_bumperCinemagraphPlayer) AVPlayer *bumperCinemagraphPlayer; // @synthesize bumperCinemagraphPlayer=_bumperCinemagraphPlayer;
@property(readonly, nonatomic, getter=_previewVideoView) HBUIPlayerView *previewVideoView; // @synthesize previewVideoView=_previewVideoView;
@property(readonly, nonatomic, getter=_bumperCinemagraphView) HBUIPlayerView *bumperCinemagraphView; // @synthesize bumperCinemagraphView=_bumperCinemagraphView;
@property(readonly, nonatomic, getter=_bumperImageView) UIImageView *bumperImageView; // @synthesize bumperImageView=_bumperImageView;
@property(readonly, nonatomic, getter=_stateMachine) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(nonatomic) _Bool preventsDisplaySleepDuringPreviewVideoPlayback; // @synthesize preventsDisplaySleepDuringPreviewVideoPlayback=_preventsDisplaySleepDuringPreviewVideoPlayback;
@property(nonatomic, getter=isContentOccluded) _Bool contentOccluded; // @synthesize contentOccluded=_contentOccluded;
@property(nonatomic) __weak id <HBUITopShelfParadeBackgroundViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(nonatomic) _Bool isCenterViewController; // @synthesize isCenterViewController=_isCenterViewController;
@property(readonly, nonatomic) long long contentState;
- (void)prepareForReuse;
- (_Bool)_audioIsMuted;
- (void)_updatePreviewVideoPlayerVolume:(_Bool)arg1;
- (void)_secondaryAudioHintDidChange:(id)arg1;
- (void)_notifyDelegateDidFinish;
- (void)_notifyDelegateContentStateDidChange;
- (void)_reset:(_Bool)arg1;
- (void)_scheduleAfterPreviewVideoTimer;
- (void)_schedulePreviewVideoTimeoutTimer;
- (void)_scheduleBeforePreviewVideoTimer;
- (void)_setBumperContentViewsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_createStateMachine;
- (void)_playerItemDidPlayToEndTime:(id)arg1;
- (void)viewDidLoad;
@property(readonly, copy) NSString *debugDescription;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

