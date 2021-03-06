//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class TSCH3DChartMeshResources;

@interface TSCH3DChartMeshSharedChildResource : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartMeshResources *mParent;
    _Bool mChildRegenerated;
    int mCaching;
    struct DataBufferInfo mBufferInfo;
    unsigned long long mResourceIdentifier;
}

+ (id)resourceWithParent:(id)arg1;
- (id).cxx_construct;
@property(nonatomic) _Bool childRegenerated; // @synthesize childRegenerated=mChildRegenerated;
@property(nonatomic) int caching; // @synthesize caching=mCaching;
@property(readonly, nonatomic) unsigned long long resourceIdentifier;
@property(readonly) struct DataBufferInfo bufferInfo;
- (void)clearParent;
- (void)dealloc;
- (id)initWithParent:(id)arg1;

@end

