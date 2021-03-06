//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TimeSync/TSgPTPPort.h>

@class NSMutableArray, NSString;

@interface TSgPTPNetworkPort : TSgPTPPort
{
    unsigned int _connection;
    NSMutableArray *_clients;
    _Bool _remoteIsSameDevice;
    _Bool _asCapable;
    BOOL _localSyncLogMeanInterval;
    BOOL _remoteSyncLogMeanInterval;
    BOOL _localAnnounceLogMeanInterval;
    BOOL _remoteAnnounceLogMeanInterval;
    unsigned char _localLinkType;
    unsigned char _remoteLinkType;
    unsigned char _localTimestampingMode;
    unsigned char _remoteTimestampingMode;
    _Bool _hasLocalFrequencyTolerance;
    _Bool _hasRemoteFrequencyTolerance;
    _Bool _hasLocalFrequencyStability;
    _Bool _hasRemoteFrequencyStability;
    _Bool _enabled;
    _Bool _overridenReceiveMatching;
    unsigned short _remotePortNumber;
    unsigned short _overridenReceivePortNumber;
    unsigned int _propagationDelay;
    unsigned int _maximumPropagationDelay;
    unsigned int _minimumPropagationDelay;
    unsigned int _propagationDelayLimit;
    unsigned int _maximumRawDelay;
    unsigned int _minimumRawDelay;
    unsigned int _localFrequencyTolerance;
    unsigned int _remoteFrequencyTolerance;
    unsigned int _localFrequencyStability;
    unsigned int _remoteFrequencyStability;
    unsigned long long _remoteClockIdentity;
    NSString *_sourceAddressString;
    NSString *_destinationAddressString;
    NSString *_interfaceName;
    unsigned long long _overridenReceiveClockIdentity;
}

+ (id)diagnosticDescriptionForService:(unsigned int)arg1 withIndent:(id)arg2;
@property(nonatomic) unsigned short overridenReceivePortNumber; // @synthesize overridenReceivePortNumber=_overridenReceivePortNumber;
@property(nonatomic) unsigned long long overridenReceiveClockIdentity; // @synthesize overridenReceiveClockIdentity=_overridenReceiveClockIdentity;
@property(nonatomic) _Bool overridenReceiveMatching; // @synthesize overridenReceiveMatching=_overridenReceiveMatching;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(copy, nonatomic) NSString *destinationAddressString; // @synthesize destinationAddressString=_destinationAddressString;
@property(copy, nonatomic) NSString *sourceAddressString; // @synthesize sourceAddressString=_sourceAddressString;
@property(nonatomic) unsigned int remoteFrequencyStability; // @synthesize remoteFrequencyStability=_remoteFrequencyStability;
@property(nonatomic) _Bool hasRemoteFrequencyStability; // @synthesize hasRemoteFrequencyStability=_hasRemoteFrequencyStability;
@property(nonatomic) unsigned int localFrequencyStability; // @synthesize localFrequencyStability=_localFrequencyStability;
@property(nonatomic) _Bool hasLocalFrequencyStability; // @synthesize hasLocalFrequencyStability=_hasLocalFrequencyStability;
@property(nonatomic) unsigned int remoteFrequencyTolerance; // @synthesize remoteFrequencyTolerance=_remoteFrequencyTolerance;
@property(nonatomic) _Bool hasRemoteFrequencyTolerance; // @synthesize hasRemoteFrequencyTolerance=_hasRemoteFrequencyTolerance;
@property(nonatomic) unsigned int localFrequencyTolerance; // @synthesize localFrequencyTolerance=_localFrequencyTolerance;
@property(nonatomic) _Bool hasLocalFrequencyTolerance; // @synthesize hasLocalFrequencyTolerance=_hasLocalFrequencyTolerance;
@property(nonatomic) unsigned char remoteTimestampingMode; // @synthesize remoteTimestampingMode=_remoteTimestampingMode;
@property(nonatomic) unsigned char localTimestampingMode; // @synthesize localTimestampingMode=_localTimestampingMode;
@property(nonatomic) unsigned char remoteLinkType; // @synthesize remoteLinkType=_remoteLinkType;
@property(nonatomic) unsigned char localLinkType; // @synthesize localLinkType=_localLinkType;
@property(nonatomic) BOOL remoteAnnounceLogMeanInterval; // @synthesize remoteAnnounceLogMeanInterval=_remoteAnnounceLogMeanInterval;
@property(nonatomic) BOOL localAnnounceLogMeanInterval; // @synthesize localAnnounceLogMeanInterval=_localAnnounceLogMeanInterval;
@property(nonatomic) BOOL remoteSyncLogMeanInterval; // @synthesize remoteSyncLogMeanInterval=_remoteSyncLogMeanInterval;
@property(nonatomic) BOOL localSyncLogMeanInterval; // @synthesize localSyncLogMeanInterval=_localSyncLogMeanInterval;
@property(nonatomic) unsigned int minimumRawDelay; // @synthesize minimumRawDelay=_minimumRawDelay;
@property(nonatomic) unsigned int maximumRawDelay; // @synthesize maximumRawDelay=_maximumRawDelay;
@property(nonatomic) unsigned int propagationDelayLimit; // @synthesize propagationDelayLimit=_propagationDelayLimit;
@property(nonatomic) unsigned int minimumPropagationDelay; // @synthesize minimumPropagationDelay=_minimumPropagationDelay;
@property(nonatomic) unsigned int maximumPropagationDelay; // @synthesize maximumPropagationDelay=_maximumPropagationDelay;
@property(nonatomic) unsigned int propagationDelay; // @synthesize propagationDelay=_propagationDelay;
@property(nonatomic, getter=isASCapable) _Bool asCapable; // @synthesize asCapable=_asCapable;
@property(nonatomic) _Bool remoteIsSameDevice; // @synthesize remoteIsSameDevice=_remoteIsSameDevice;
@property(nonatomic) unsigned short remotePortNumber; // @synthesize remotePortNumber=_remotePortNumber;
@property(nonatomic) unsigned long long remoteClockIdentity; // @synthesize remoteClockIdentity=_remoteClockIdentity;
- (void)dealloc;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (_Bool)deregisterAsyncCallbackError:(id *)arg1;
- (_Bool)registerAsyncCallbackError:(id *)arg1;
- (void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 andArg2:(unsigned long long)arg3;
- (_Bool)getCurrentPortInfo:(CDStruct_57c52001 *)arg1 error:(id *)arg2;
- (_Bool)disablePortError:(id *)arg1;
- (_Bool)enablePortError:(id *)arg1;
- (_Bool)restoreReceiveMatchingError:(id *)arg1;
- (_Bool)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 error:(id *)arg3;
- (_Bool)requestRemoteMessageIntervalsWithPDelayMessageInterval:(BOOL)arg1 syncMessageInterval:(BOOL)arg2 announceMessageInterval:(BOOL)arg3 error:(id *)arg4;
- (_Bool)_enabled;
- (unsigned short)_overridenReceivePortNumber;
- (unsigned long long)_overridenReceiveClockIdentity;
- (_Bool)_overridenReceiveMatching;
- (unsigned int)_remoteFrequencyStability;
- (_Bool)_hasRemoteFrequencyStability;
- (unsigned int)_localFrequencyStability;
- (_Bool)_hasLocalFrequencyStability;
- (unsigned int)_remoteFrequencyTolerance;
- (_Bool)_hasRemoteFrequencyTolerance;
- (unsigned int)_localFrequencyTolerance;
- (_Bool)_hasLocalFrequencyTolerance;
- (unsigned char)_remoteTimestampingMode;
- (unsigned char)_localTimestampingMode;
- (unsigned char)_remoteLinkType;
- (unsigned char)_localLinkType;
- (BOOL)_remoteAnnounceLogMeanInterval;
- (BOOL)_localAnnounceLogMeanInterval;
- (BOOL)_remoteSyncLogMeanInterval;
- (BOOL)_localSyncLogMeanInterval;
- (id)_destinationAddressString;
- (id)_sourceAddressString;
- (unsigned int)_minimumRawDelay;
- (unsigned int)_maximumRawDelay;
- (unsigned int)_propagationDelayLimit;
- (unsigned int)_minimumPropagationDelay;
- (unsigned int)_maximumPropagationDelay;
- (unsigned int)_propagationDelay;
- (_Bool)_isASCapable;
- (_Bool)_remoteIsSameDevice;
- (unsigned short)_remotePortNumber;
- (unsigned long long)_remoteClockIdentity;
@property(readonly, nonatomic) unsigned int connection;
- (void)updateProperties;
- (_Bool)_commonInitWithService:(unsigned int)arg1;

@end

