//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Messages/_MSMessageComposeHostImplProtocol-Protocol.h>

@class NSString;
@protocol _MSMessageComposeExtensionProtocol, _MSMessageComposeHostProtocol;

@interface _MSMessageAppBundleHostContext : NSObject <_MSMessageComposeHostImplProtocol>
{
    id <_MSMessageComposeHostProtocol> _delegate;
    id <_MSMessageComposeExtensionProtocol> _appContext;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <_MSMessageComposeExtensionProtocol> appContext; // @synthesize appContext=_appContext;
@property(nonatomic) __weak id <_MSMessageComposeHostProtocol> delegate; // @synthesize delegate=_delegate;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_contentDidLoad;
- (void)_requestResize;
- (void)_openURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (void)_dismissAndPresentPhotosApp;
- (void)_dismiss;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect)arg2 fence:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_stageRichLink:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_stageAppItem:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithAppContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

