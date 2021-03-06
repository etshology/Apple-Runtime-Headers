//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MTLSimDriver/MTLCommandQueue-Protocol.h>

@class NSArray, NSDictionary, NSObject;
@protocol OS_dispatch_queue;

@protocol MTLCommandQueueSPI <MTLCommandQueue>
@property(getter=isProfilingEnabled) _Bool profilingEnabled;
@property _Bool isOpenGLQueue;
@property _Bool executionEnabled;
@property _Bool skipRender;
@property(readonly) _Bool disableCrossQueueHazardTracking;
@property(readonly) NSObject<OS_dispatch_queue> *completionQueue;
@property(readonly) _Bool commitSynchronously;
@property(readonly) NSObject<OS_dispatch_queue> *commitQueue;
@property(readonly) unsigned long long qosLevel;
@property(readonly) unsigned long long maxCommandBufferCount;
@property int backgroundTrackingPID;
- (void)finish;
- (void)setCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setSubmissionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setBackgroundGPUPriority:(unsigned long long)arg1;
- (unsigned long long)getBackgroundGPUPriority;
- (_Bool)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2;
- (_Bool)setGPUPriority:(unsigned long long)arg1;
- (unsigned long long)getGPUPriority;

@optional
@property(nonatomic, getter=getStatLocations) unsigned long long StatLocations;
@property(nonatomic, getter=getStatOptions) unsigned long long StatOptions;
@property(nonatomic, getter=isStatEnabled) _Bool StatEnabled;
- (NSDictionary *)counterInfo;
- (void)addPerfSampleHandler:(void (^)(id <MTLCommandBuffer>, NSData *, unsigned long long))arg1;
- (NSArray *)subdivideCounterList:(NSArray *)arg1;
- (NSArray *)getRequestedCounters;
- (int)requestCounters:(NSArray *)arg1 withIndex:(unsigned long long)arg2;
- (int)requestCounters:(NSArray *)arg1;
- (NSArray *)availableCountersAndDict;
- (NSArray *)availableCounters;
@end

