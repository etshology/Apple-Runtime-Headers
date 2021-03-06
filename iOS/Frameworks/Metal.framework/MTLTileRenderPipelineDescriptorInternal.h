//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Metal/MTLTileRenderPipelineDescriptor.h>

__attribute__((visibility("hidden")))
@interface MTLTileRenderPipelineDescriptorInternal : MTLTileRenderPipelineDescriptor
{
    struct MTLTileRenderPipelineDescriptorPrivate _private;
}

- (void)validateWithDevice:(id)arg1;
- (id)colorAttachments;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)arg1;
- (const struct MTLTileRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (_Bool)threadgroupSizeMatchesTileSize;
- (void)setThreadgroupSizeMatchesTileSize:(_Bool)arg1;
- (id)tileFunction;
- (void)setTileFunction:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)label;
- (void)reset;
- (id)tileBuffers;
- (void)setColorSampleCount:(unsigned long long)arg1;
- (unsigned long long)colorSampleCount;
- (void)setRasterSampleCount:(unsigned long long)arg1;
- (unsigned long long)rasterSampleCount;
- (void)setSampleCount:(unsigned long long)arg1;
- (unsigned long long)sampleCount;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

