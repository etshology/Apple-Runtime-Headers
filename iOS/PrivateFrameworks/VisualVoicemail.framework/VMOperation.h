//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSProgress;
@protocol OS_dispatch_queue;

@interface VMOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    NSProgress *_progress;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)performSynchronousBlock:(CDUnknownBlockType)arg1;
- (void)configureProgressWithUnitCount:(long long)arg1;
- (id)init;

@end

