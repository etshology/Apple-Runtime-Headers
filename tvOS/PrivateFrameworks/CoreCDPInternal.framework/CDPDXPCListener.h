//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/NSXPCListenerDelegate-Protocol.h>

@class NSString, NSXPCListener;

@interface CDPDXPCListener : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (unsigned long long)_clientTypeForConnection:(id)arg1;
- (_Bool)_shouldAcceptNewConnectionWithEntitlements:(unsigned long long)arg1;
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

