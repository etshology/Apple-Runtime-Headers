//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBAppContainerViewController.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>
#import <SpringBoard/SBInlineAppExposeContainerViewControllerDelegate-Protocol.h>
#import <SpringBoard/SBMainDisplaySceneLayoutElementViewControlling-Protocol.h>
#import <SpringBoard/SBMedusaDecoratedDeviceApplicationSceneViewControlling-Protocol.h>
#import <SpringBoard/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal-Protocol.h>

@class BSCornerRadiusConfiguration, NSMutableSet, NSString, SBHomeGrabberView, SBInlineAppExposeContainerViewController, SBSceneHandle, SBSceneViewStatusBarAssertion, UIDropInteraction, UIView;
@protocol SBApplicationSceneViewControllingStatusBarDelegate, SBScenePlaceholderContentContext;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBInlineAppExposeContainerViewControllerDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling>
{
    _Bool _nubViewHidden;
    _Bool _nubViewHighlighted;
    NSMutableSet *_maskDisplayCornersReasons;
    _Bool _clipsToBounds;
    double _darkenViewAlpha;
    UIDropInteraction *_dropInteraction;
    BSCornerRadiusConfiguration *_cornerRadiusConfiguration;
    double _shadowOpacity;
    double _shadowOffset;
    SBSceneViewStatusBarAssertion *_inlineAppExposeContainerStatusBarAssertion;
    SBInlineAppExposeContainerViewController *_inlineAppExposeContainerOverlayViewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SBInlineAppExposeContainerViewController *inlineAppExposeContainerOverlayViewController; // @synthesize inlineAppExposeContainerOverlayViewController=_inlineAppExposeContainerOverlayViewController;
@property(retain, nonatomic) SBSceneViewStatusBarAssertion *inlineAppExposeContainerStatusBarAssertion; // @synthesize inlineAppExposeContainerStatusBarAssertion=_inlineAppExposeContainerStatusBarAssertion;
@property(nonatomic) double shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration; // @synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration;
@property(retain, nonatomic) UIDropInteraction *dropInteraction; // @synthesize dropInteraction=_dropInteraction;
@property(nonatomic) double darkenViewAlpha; // @synthesize darkenViewAlpha=_darkenViewAlpha;
@property(nonatomic) _Bool clipsToBounds; // @synthesize clipsToBounds=_clipsToBounds;
- (id)_deviceApplicationSceneViewController:(id)arg1;
- (id)_deviceApplicationSceneViewController;
- (id)_medusaDecoratedVC:(id)arg1;
- (id)_medusaDecoratedVC;
- (void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(_Bool)arg2;
- (id)containerViewForBlurContentView;
- (id)initialCornerRadiusConfiguration;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)setInlineAppExposeContainerViewController:(id)arg1;
- (id)animationControllerForTransitionRequest:(id)arg1;
@property(readonly, nonatomic) SBHomeGrabberView *homeGrabberView;
@property(nonatomic, getter=isNubViewHighlighted) _Bool nubViewHighlighted;
@property(nonatomic, getter=isNubViewHidden) _Bool nubViewHidden;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3;
- (id)statusBarAssertionWithStatusBarHidden:(_Bool)arg1 atLevel:(unsigned long long)arg2;
- (_Bool)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
- (void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(_Bool)arg2;
- (void)sceneHandle:(id)arg1 didCreateScene:(id)arg2;
- (void)_configureViewController:(id)arg1;
- (id)_applicationSceneViewControllerForSceneHandle:(id)arg1;
- (id)_applicationSceneViewController;
- (void)setContentReferenceSize:(struct CGSize)arg1 withInterfaceOrientation:(long long)arg2;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
- (_Bool)_shouldDisplayLayoutElementBecomeActive;
- (unsigned long long)supportedContentInterfaceOrientations;
- (void)prepareForReuse;
- (id)_relinquishInlineAppExposeContainerViewController;
- (long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)setMaskDisplayCorners:(_Bool)arg1 forReason:(id)arg2;
- (_Bool)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
@property(nonatomic) long long homeGrabberDisplayMode;
@property(readonly, copy) NSString *description;
- (void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
- (void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1;
@property(readonly, nonatomic, getter=isBlurred) _Bool blurred;
- (void)blurApplicationContent:(_Bool)arg1 withAnimationFactory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDisplayIdentity:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate;
@property(readonly, nonatomic) long long contentInterfaceOrientation;
@property(readonly, nonatomic) struct CGSize contentReferenceSize;
@property(retain, nonatomic) UIView *customContentView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) long long displayMode;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) long long overrideStatusBarStyle;
@property(retain, nonatomic) id <SBScenePlaceholderContentContext> placeholderContentContext;
@property(readonly, nonatomic) SBSceneHandle *sceneHandle;
@property(readonly, nonatomic) double statusBarAlpha;
@property(readonly) Class superclass;

@end

