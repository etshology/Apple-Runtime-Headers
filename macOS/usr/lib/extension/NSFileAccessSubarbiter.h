//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSFileAccessClientLocalArbiterInterface-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>

@class NSFileAccessArbiter, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFileAccessSubarbiter : NSObject <NSFileAccessClientLocalArbiterInterface, NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSFileAccessArbiter *_realSubarbiter;
}

- (oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityAttributes:(id)arg2 ofItemAtURL:(id)arg3;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeSharingOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
- (oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
- (oneway void)cancelAccessClaimForID:(id)arg1;
- (oneway void)revokeSubarbitrationClaimForID:(id)arg1;
- (void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
- (oneway void)revokeAccessClaimForID:(id)arg1;
- (id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
- (void)stopArbitrating;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 listener:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

