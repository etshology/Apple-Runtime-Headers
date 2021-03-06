//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetalTools/MTLToolsComputePipelineState.h>

@class MTLComputePipelineDescriptor, MTLComputePipelineReflection, MTLToolsFunction;

@interface MTLGPUDebugComputePipelineState : MTLToolsComputePipelineState
{
    MTLComputePipelineDescriptor *_descriptor;
    MTLComputePipelineReflection *_reflection;
}

@property(readonly, nonatomic) MTLComputePipelineReflection *reflection; // @synthesize reflection=_reflection;
- (void)dealloc;
@property(readonly, nonatomic) MTLToolsFunction *computeFunction;
- (id)initWithComputePipelineState:(id)arg1 descriptor:(id)arg2 reflection:(id)arg3 device:(id)arg4;

@end

