//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUVideoCacheNode.h>

@interface PIAutoLoopCacheNode : NUVideoCacheNode
{
}

+ (id)nodeWithInput:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (id)outputSettings:(out id *)arg1;
- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id *)arg2;
- (id)persistentMaskURL;
- (id)persistentLongExposureURL;
- (id)persistentURL;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id *)arg4;
- (long long)subsampleFactorForScale:(CDStruct_912cb5d2)arg1;
- (id)descriptionSubClassHook;

@end

