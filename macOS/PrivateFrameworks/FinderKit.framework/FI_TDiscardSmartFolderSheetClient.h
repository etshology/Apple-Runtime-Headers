//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FinderKit/TStdAlertSheetClientProtocol-Protocol.h>

@class FI_TBrowserContainerController, NSString;

__attribute__((visibility("hidden")))
@interface FI_TDiscardSmartFolderSheetClient : NSObject <TStdAlertSheetClientProtocol>
{
    struct TNSWeakPtr<FI_TBrowserContainerController, void> _weakContainerController;
}

+ (id)clientWithContainerController:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)stdAlertSheetOtherButtonPressed;
- (void)stdAlertSheetCancelButtonPressed;
- (void)stdAlertSheetOKButtonPressed;
- (void)setContainerController:(id)arg1;
@property(readonly) __weak FI_TBrowserContainerController *containerController; // @dynamic containerController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

