//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/CLLocationManagerDelegate-Protocol.h>
#import <MapKit/MKLocationProvider-Protocol.h>

@class CLLocation, CLLocationManager, NSBundle, NSString, geo_isolater;
@protocol MKLocationProviderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, MKLocationProvider>
{
    CLLocationManager *_clLocationManager;
    id <MKLocationProviderDelegate> _delegate;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    double _expectedGpsUpdateInterval;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    double _desiredAccuracy;
    double _distanceFilter;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double expectedGpsUpdateInterval; // @synthesize expectedGpsUpdateInterval=_expectedGpsUpdateInterval;
@property(nonatomic) __weak id <MKLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (CDUnknownBlockType)authorizationRequestBlock;
- (void)setAuthorizationRequestBlock:(CDUnknownBlockType)arg1;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
@property(readonly, nonatomic) CLLocation *lastLocation;
- (void)dismissHeadingCalibrationDisplay;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) BOOL isTracePlayer;
@property(readonly, nonatomic) BOOL shouldShiftIfNecessary;
- (void)authorizationStatusOnQueue:(id)arg1 result:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) int authorizationStatus;
- (int)_authorizationStatusOnQueue;
- (void)setHeadingOrientation:(int)arg1;
- (int)headingOrientation;
@property(nonatomic) BOOL matchInfoEnabled;
@property(nonatomic) double distanceFilter;
- (void)setActivityType:(long long)arg1;
- (long long)activityType;
@property(nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property(nonatomic) double desiredAccuracy;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)_resetForNewEffectiveBundle;
- (void)stopUpdatingVehicleHeading;
- (void)startUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)startUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)startUpdatingLocation;
- (void)_updateAuthorizationStatus;
@property(readonly, nonatomic) BOOL usesCLMapCorrection;
@property(readonly, nonatomic) CLLocationManager *_clLocationManager;
- (void)_createCLLocationManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

