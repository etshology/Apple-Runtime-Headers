//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMActiveSoundOutputActionHandleProvider-Protocol.h>

@class AXMActiveSound, AXMSoundComponent, NSString;

@interface AXMActiveSoundOutputActionHandleImpl : NSObject <AXMActiveSoundOutputActionHandleProvider>
{
    AXMActiveSound *_activeSound;
    AXMSoundComponent *_soundComponent;
    float _rate;
    float _pitch;
}

- (void).cxx_destruct;
@property(nonatomic) float pitch; // @synthesize pitch=_pitch;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic) __weak AXMSoundComponent *soundComponent; // @synthesize soundComponent=_soundComponent;
@property(nonatomic) __weak AXMActiveSound *activeSound; // @synthesize activeSound=_activeSound;
- (void)stop;
- (void)setQuantizedRate:(int)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

