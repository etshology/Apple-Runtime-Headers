//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureInput, AVCaptureInputPortInternal, NSString;

@interface AVCaptureInputPort : NSObject
{
    AVCaptureInputPortInternal *_internal;
    NSString *_sourceDeviceType;
    int _sourceDevicePosition;
}

+ (_Bool)automaticallyNotifiesObserversOfClock;
+ (id)portWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(int)arg6;
@property(readonly, nonatomic) int sourceDevicePosition; // @synthesize sourceDevicePosition=_sourceDevicePosition;
@property(readonly, nonatomic) NSString *sourceDeviceType; // @synthesize sourceDeviceType=_sourceDeviceType;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (id)figCaptureSourceConfigurationForSessionPreset:(id)arg1;
- (id)sourceID;
- (id)valueForUndefinedKey:(id)arg1;
- (void)_setClock:(struct OpaqueCMClock *)arg1;
@property(readonly, nonatomic) struct OpaqueCMClock *clock;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setFormatDescription:(struct opaqueCMFormatDescription *)arg1;
@property(readonly, nonatomic) const struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
@property(readonly, nonatomic) AVCaptureInput *input;
- (id)description;
- (void)setOwner:(id)arg1;
- (void)dealloc;
- (id)_initWithInput:(id)arg1 mediaType:(id)arg2 formatDescription:(struct opaqueCMFormatDescription *)arg3 enabled:(_Bool)arg4 sourceDeviceType:(id)arg5 sourceDevicePosition:(int)arg6;

@end

