//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUIRTTUtilities-Protocol.h>

@class NSString, RTTTelephonyUtilities;

@interface _CNUIRTTUtilities : NSObject <CNUIRTTUtilities>
{
    RTTTelephonyUtilities *_utilityProvider;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTTTelephonyUtilities *utilityProvider; // @synthesize utilityProvider=_utilityProvider;
- (_Bool)relayIsSupported;
- (_Bool)contactIsTTYContact:(id)arg1;
- (id)nts_lazyUtilityProvider;
- (id)initWithUtilityProvider:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

