//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>
#import <Foundation/NSXPCListenerDelegate-Protocol.h>
#import <Foundation/_NSExtensionAuxHostingBase-Protocol.h>

@class NSArray, NSString, NSUUID, NSXPCConnection, NSXPCListener;
@protocol OS_os_transaction, _NSExtensionContextHosting, _NSExtensionContextVending;

@interface NSExtensionContext : NSObject <NSSecureCoding, NSCopying, NSXPCListenerDelegate, _NSExtensionAuxHostingBase>
{
    _Bool __dummyExtension;
    NSArray *_inputItems;
    NSUUID *__UUID;
    CDUnknownBlockType __requestCleanUpBlock;
    id <_NSExtensionContextHosting> __extensionHostProxy;
    id <_NSExtensionContextVending> __extensionVendorProxy;
    NSXPCConnection *__auxiliaryConnection;
    NSXPCListener *__auxiliaryListener;
    id __processAssertion;
    id __principalObject;
    NSObject<OS_os_transaction> *__transaction;
    CDStruct_4c969caf __extensionHostAuditToken;
}

+ (id)_allowedErrorClasses;
+ (_Bool)supportsSecureCoding;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionContextVendorProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_defaultExtensionContextVendorProtocol;
+ (id)_extensionContextHostProtocolWithAllowedErrorClasses:(id)arg1;
+ (id)_defaultExtensionContextProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;
+ (id)_extensionContextForIdentifier:(id)arg1;
@property(setter=_setExtensionHostAuditToken:) CDStruct_4c969caf _extensionHostAuditToken; // @synthesize _extensionHostAuditToken=__extensionHostAuditToken;
@property(retain, getter=_transaction, setter=_setTransaction:) NSObject<OS_os_transaction> *_transaction; // @synthesize _transaction=__transaction;
@property(nonatomic, getter=_isDummyExtension, setter=_setDummyExtension:) _Bool _dummyExtension; // @synthesize _dummyExtension=__dummyExtension;
@property(nonatomic, setter=_setPrincipalObject:) id _principalObject; // @synthesize _principalObject=__principalObject;
@property(retain, setter=_setProcessAssertion:) id _processAssertion; // @synthesize _processAssertion=__processAssertion;
@property(retain, nonatomic, setter=_setAuxiliaryListener:) NSXPCListener *_auxiliaryListener; // @synthesize _auxiliaryListener=__auxiliaryListener;
@property(retain, nonatomic, setter=_setAuxiliaryConnection:) NSXPCConnection *_auxiliaryConnection; // @synthesize _auxiliaryConnection=__auxiliaryConnection;
@property(retain, nonatomic, setter=_setExtensionVendorProxy:) id <_NSExtensionContextVending> _extensionVendorProxy; // @synthesize _extensionVendorProxy=__extensionVendorProxy;
@property(retain, setter=_setExtensionHostProxy:) id <_NSExtensionContextHosting> _extensionHostProxy; // @synthesize _extensionHostProxy=__extensionHostProxy;
@property(copy, nonatomic, setter=_setRequestCleanUpBlock:) CDUnknownBlockType _requestCleanUpBlock; // @synthesize _requestCleanUpBlock=__requestCleanUpBlock;
@property(copy, nonatomic) NSUUID *_UUID; // @synthesize _UUID=__UUID;
@property(copy, nonatomic, setter=_setInputItems:) NSArray *inputItems; // @synthesize inputItems=_inputItems;
- (void)didConnectToVendor:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)___nsx_pingHost:(CDUnknownBlockType)arg1;
- (void)_willPerformHostCallback:(CDUnknownBlockType)arg1;
@property(readonly, copy) NSString *description;
- (void)_openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadPreviewImageForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_loadItemForPayload:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelRequestWithError:(id)arg1;
- (void)completeRequestReturningItems:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_completeRequestReturningItemsSecondHalf:(CDUnknownBlockType)arg1;
- (_Bool)_isHost;
- (void)dealloc;
- (void)invalidate;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInputItems:(id)arg1;
- (id)initWithInputItems:(id)arg1 contextUUID:(id)arg2;
- (id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3;
- (id)_derivedExtensionAuxiliaryHostProtocol;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

