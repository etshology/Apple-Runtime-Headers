//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/NSObject-Protocol.h>

@class NSString;
@protocol MPVolumeControllerDataSourceDelegate;

@protocol MPVolumeControllerDataSource <NSObject>
@property(readonly, nonatomic) float EUVolumeLimit;
@property(readonly, nonatomic) int volumeWarningState;
@property(readonly, nonatomic) _Bool volumeWarningEnabled;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
@property(readonly, nonatomic, getter=isVolumeControlAvailable) _Bool volumeControlAvailable;
@property(readonly, copy, nonatomic) NSString *volumeControlLabel;
@property(readonly, nonatomic) _Bool applicationShouldOverrideHardwareVolumeBehavior;
@property(nonatomic) __weak id <MPVolumeControllerDataSourceDelegate> delegate;
- (void)getVolumeValueWithCompletion:(void (^)(float))arg1;
- (void)reload;
- (void)initializeVolume;
- (void)adjustVolumeValue:(float)arg1;

@optional
- (void)endDecreasingRelativeVolume;
- (void)beginDecreasingRelativeVolume;
- (void)endIncreasingRelativeVolume;
- (void)beginIncreasingRelativeVolume;
- (void)reloadWarning;
@end

