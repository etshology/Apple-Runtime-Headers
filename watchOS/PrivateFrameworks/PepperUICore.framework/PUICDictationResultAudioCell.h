//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PepperUICore/PUICTableViewCell.h>

#import <PepperUICore/PUICDictationResultCell-Protocol.h>

@class NSString, UIImageView;

@interface PUICDictationResultAudioCell : PUICTableViewCell <PUICDictationResultCell>
{
    UIImageView *_waveformView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) float cellHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)configureWithWaveformImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

