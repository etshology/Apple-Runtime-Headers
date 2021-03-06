//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProVideo/PVLivePlayerSource-Protocol.h>

@class NSString, PVFrameSet;

@interface PVLivePlayerImageSource : NSObject <PVLivePlayerSource>
{
    PVFrameSet *_imageFrame;
}

- (void).cxx_destruct;
- (void)setMuted:(BOOL)arg1;
- (CDStruct_1b6d18a9)itemTimeForHostTime:(double)arg1;
- (id)imageBufferForHostTime:(double)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)pause;
- (void)play;
- (id)initWithPVImageBuffer:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

