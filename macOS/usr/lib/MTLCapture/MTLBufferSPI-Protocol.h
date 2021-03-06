//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLCapture/MTLBuffer-Protocol.h>

@class MTLTextureDescriptor;
@protocol MTLTexture;

@protocol MTLBufferSPI <MTLBuffer>
@property(readonly, nonatomic) unsigned long long gpuAddress;
@property(readonly) struct __IOSurface *iosurface;
- (id <MTLTexture>)newLinearTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4;
- (id <MTLTexture>)newTiledTextureWithDescriptor:(MTLTextureDescriptor *)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3;

@optional
@property(nonatomic) unsigned long long resourceIndex;
@end

