//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CompanionSync/SYSyncEngine.h>

#import <CompanionSync/NMSMessageCenterDelegate-Protocol.h>

@class NMSMessageCenter, NSDictionary, NSMapTable, NSObject, NSString, SYDevice;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SYMessengerSyncEngine : SYSyncEngine <NMSMessageCenterDelegate>
{
    NMSMessageCenter *_messageCenter;
    NSObject<OS_dispatch_semaphore> *_lookupLock;
    NSMapTable *_requestLookup;
    NSMapTable *_callbackLookup;
    SYDevice *_activeDevice;
    NSString *_sessionDeviceID;
    NSDictionary *_customIDSOptions;
    NSObject<OS_dispatch_queue> *_idsQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
- (void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2;
- (void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;
- (void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(CDUnknownBlockType)arg3;
- (void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;
- (void)_handleError:(id)arg1 forMessageID:(unsigned short)arg2;
- (void)_recordLastSeqNo:(id)arg1;
- (_Bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;
- (id)_getResponseHeader:(id)arg1;
- (id)_getRequestHeader:(id)arg1;
- (void)_hookupMessageHandler;
- (void)_resumeIncomingMessages;
- (void)_suspendIncomingMessages;
- (void)_updateMessageCenterPrefs:(id)arg1;
- (id)_fileTransferHeader;
- (id)stateForLogging;
- (id)cancelMessagesReturningFailures:(id)arg1;
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)beginSession;
- (void)suspend;
- (_Bool)resume:(id *)arg1;
- (_Bool)targetConnected;
- (_Bool)targetIsNearby;
- (id)messageCenter;
- (id)initWithService:(id)arg1 queue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

