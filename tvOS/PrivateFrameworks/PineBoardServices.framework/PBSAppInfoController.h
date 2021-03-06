//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSAppInfoDelegateServiceInterface-Protocol.h>

@class NSDictionary, NSHashTable, NSString, PBSAppInfoConfiguration, PBSAppInfoServiceProxy;
@protocol OS_dispatch_queue;

@interface PBSAppInfoController : NSObject <PBSAppInfoDelegateServiceInterface>
{
    PBSAppInfoServiceProxy *_appInfoServiceProxy;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSDictionary *_queue_appInfos;
    NSHashTable *_queue_observers;
    PBSAppInfoConfiguration *_queue_appInfoConfiguration;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBSAppInfoConfiguration *queue_appInfoConfiguration; // @synthesize queue_appInfoConfiguration=_queue_appInfoConfiguration;
@property(readonly, nonatomic) NSHashTable *queue_observers; // @synthesize queue_observers=_queue_observers;
@property(readonly, nonatomic) NSDictionary *queue_appInfos; // @synthesize queue_appInfos=_queue_appInfos;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property(readonly, nonatomic) PBSAppInfoServiceProxy *appInfoServiceProxy; // @synthesize appInfoServiceProxy=_appInfoServiceProxy;
- (void)_handleUpdate:(id)arg1;
- (void)appInfoServiceDidUpdateAppInfo:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) PBSAppInfoConfiguration *configuration;
@property(readonly, copy, nonatomic) NSDictionary *appInfos;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_configureRemoteProxy:(id)arg1;
- (id)_init;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

