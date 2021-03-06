//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PineBoardServices/PBSUserPresentationServiceInterface-Protocol.h>

@class NSHashTable, NSMapTable, NSString;
@protocol PBSUserPresentationServiceInterface;

@interface PBSUserPresentationServiceProxy : NSObject <PBSUserPresentationServiceInterface>
{
    NSMapTable *_pendingCompletionHandlers;
    NSHashTable *_pendingMessageReplies;
    id <PBSUserPresentationServiceInterface> _remoteProxy;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <PBSUserPresentationServiceInterface> remoteProxy; // @synthesize remoteProxy=_remoteProxy;
@property(readonly, nonatomic) NSHashTable *pendingMessageReplies; // @synthesize pendingMessageReplies=_pendingMessageReplies;
@property(readonly, nonatomic) NSMapTable *pendingCompletionHandlers; // @synthesize pendingCompletionHandlers=_pendingCompletionHandlers;
- (CDUnknownBlockType)_removePendingReplyHandler:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_removeCompletionHandlerForRequest:(id)arg1;
- (void)dismissUIWithRequest:(id)arg1;
- (void)messageUIWithRequest:(id)arg1 message:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)presentUIWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleConnectionInterruption:(id)arg1;
- (id)initWithRemoteServiceProxy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

