//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLLockStateObserver-Protocol.h>
#import <Carousel/CSLOnWristServerExportedInterface-Protocol.h>
#import <Carousel/CSLWristDetectionSensorDelegate-Protocol.h>
#import <Carousel/MCProfileConnectionObserver-Protocol.h>
#import <Carousel/NSXPCListenerDelegate-Protocol.h>

@class CSLDeviceLockDisableAssertion, CSLForcedOnWristAggdObserver, CSLOnWristDeviceState, CSLPIBacklightAssertion, CSLSConcurrentObserverStore, CSLWristDetectionSensor, NSDate, NSLock, NSMutableSet, NSString, NSXPCInterface, NSXPCListener;

@interface CSLUIOnWristManager : NSObject <NSXPCListenerDelegate, CSLOnWristServerExportedInterface, CSLWristDetectionSensorDelegate, MCProfileConnectionObserver, CSLLockStateObserver>
{
    CSLDeviceLockDisableAssertion *_onWristLockDisableAssertion;
    NSXPCListener *_listener;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    NSMutableSet *_clientConnections;
    NSLock *_connectionsLock;
    CSLWristDetectionSensor *_wristDetectionSensor;
    CSLOnWristDeviceState *_onWristDeviceState;
    unsigned long long _timestamp;
    NSDate *_datestamp;
    _Bool _allowWristDetectWhileCharging;
    CSLSConcurrentObserverStore *_onWristDeviceStateObservers;
    CSLForcedOnWristAggdObserver *_aggdObserver;
    _Bool _waitingForInitialWristDetect;
    _Bool _shouldIgnoreOffWristEvents;
    _Bool _isInitializing;
    unsigned long long _stateHandle;
    CSLPIBacklightAssertion *_offWristBacklightAssertion;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, copy) NSString *debugDescription;
- (void)_onWristDeviceStateDidChange:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)_setupDefaultObservers;
- (_Bool)_isDeviceCharging;
- (void)_chargerStateDidChange:(id)arg1;
- (void)_lockDeviceIfPossible;
- (_Bool)_isWristDetectionDisabled;
- (_Bool)_wristDetectionDisabledPreference;
- (void)_postDisableWristDetectionSettingChangedNotification;
- (void)_disableWristDetectionSettingChangedExternally;
- (_Bool)_wristDetectionEnabledRestriction;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (_Bool)_fakeAlwaysOnWrist;
- (void)_fakeOnWristSettingChangedExternally;
- (void)deviceLockStateDidChange:(_Bool)arg1;
- (void)_lockForInitialWristDetectIfNeeded;
- (_Bool)_canLockForSensorOffWristEvent;
- (void)wristDetectionSensorDidUpdateOnWristStatus:(id)arg1;
- (void)wristDetectionSensorDidEnd:(id)arg1;
- (void)wristDetectionSensorDidBegin:(id)arg1;
- (_Bool)wristDetectionSensor:(id)arg1 canBeginWithPriority:(unsigned int)arg2;
- (void)_accessClientConnectionsWithBlock:(CDUnknownBlockType)arg1;
- (void)_updateOnWristDeviceStateWithBlock:(CDUnknownBlockType)arg1;
- (void)_preventAOT;
- (void)_setOnWristDeviceState:(id)arg1;
- (void)_noteBacklightWillTurnOff:(id)arg1;
- (void)_stopObservingSystemState;
- (void)_startObservingSystemState;
- (void)_removeClientConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)_notifyClients;
- (void)requestWristDetectionDisabledStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)_forceOnWristUpdateWithPriority:(unsigned int)arg1;
- (void)forceOnWristUpdate;
- (void)getOnWristState:(CDUnknownBlockType)arg1;
- (void)forceOnWristDetect;
- (_Bool)isWristDetectionDisabled;
- (_Bool)isDetectingOnWrist;
- (_Bool)isForceOnWristEnabled;
- (id)cslsOnWristState;
@property(readonly, nonatomic) CSLOnWristDeviceState *onWristDeviceState;
@property(readonly, nonatomic) int onWristState;
- (void)dealloc;
- (void)initOnWrist;
- (void)invalidate;
- (struct os_state_data_s *)stateDataWithHints:(struct os_state_hints_s *)arg1;
- (id)initWithSensor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

