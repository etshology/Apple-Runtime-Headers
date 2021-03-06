//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/CSLUIUITriggerXPCProtocol-Protocol.h>
#import <Carousel/NSXPCListenerDelegate-Protocol.h>

@class NSPointerArray, NSString, NSXPCListener;

@interface CSLUIUITriggerXPCService : NSObject <NSXPCListenerDelegate, CSLUIUITriggerXPCProtocol>
{
    NSPointerArray *_xpcClients;
    NSXPCListener *_xpcListener;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain) NSPointerArray *xpcClients; // @synthesize xpcClients=_xpcClients;
- (void)xpcRequestUITriggerWithName:(id)arg1 withDictionary:(id)arg2 withReason:(int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)xpcUIProvidersWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)xpcStartListener;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

