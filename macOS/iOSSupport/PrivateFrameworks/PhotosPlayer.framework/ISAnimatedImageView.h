//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosPlayer/ISAnimatedImagePlayerDestination-Protocol.h>

@class ISAnimatedImage, ISAnimatedImagePlayer, NSString, UIImageView;

@interface ISAnimatedImageView : UIView <ISAnimatedImagePlayerDestination>
{
    UIImageView *_placeholderImageView;
    ISAnimatedImagePlayer *_player;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ISAnimatedImagePlayer *player; // @synthesize player=_player;
@property(nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void)displayLayer:(id)arg1;
@property(nonatomic) unsigned long long displayedFrameIndex;
@property(nonatomic, getter=isPlaying) BOOL playing;
@property(retain, nonatomic) ISAnimatedImage *image;
- (void)didBeginAnimating;
- (BOOL)isReadyToDisplay;
- (void)frameDidChange;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithAnimatedImagePlayer:(id)arg1;
- (id)initWithAnimatedImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

