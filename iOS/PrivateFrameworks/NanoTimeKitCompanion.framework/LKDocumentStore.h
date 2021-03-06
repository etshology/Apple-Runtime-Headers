//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/DirectoryWatcherDelegate-Protocol.h>

@class DirectoryWatcher, NSArray, NSDictionary, NSString;
@protocol LKDocumentStoreDelegate;

@interface LKDocumentStore : NSObject <DirectoryWatcherDelegate>
{
    NSString *_dataPath;
    DirectoryWatcher *_inboxWatcher;
    DirectoryWatcher *_documentsWatcher;
    NSArray *_documents;
    id <LKDocumentStoreDelegate> _delegate;
}

+ (_Bool)_hasWriteAccess;
+ (id)sharedDocumentStore;
- (void).cxx_destruct;
@property(nonatomic) __weak id <LKDocumentStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didRemoveDocument:(id)arg1;
- (void)_didAddDocument:(id)arg1;
- (void)_didModifyDocument:(id)arg1;
- (void)directoryDidChange:(id)arg1;
- (id)documentWithName:(id)arg1;
- (void)updateDocument:(id)arg1;
- (void)writeDocumentsToIndexFile:(id)arg1;
- (void)_loadDocumentsFromIndex;
- (void)_loadDocumentsFromIndexFileAndNotifyChanges:(_Bool)arg1;
- (id)addDocumentFromInboxURL:(id)arg1;
- (void)processInbox;
- (id)pathForDocument:(id)arg1;
- (id)capabilitiesPath;
- (id)documentIndexPath;
- (id)inboxPath;
- (id)documentsPath;
- (id)documentDataFromFile:(id)arg1;
- (_Bool)writeDocumentData:(id)arg1 toFile:(id)arg2;
- (id)pathForDocumentDirectory:(id)arg1 create:(_Bool)arg2;
- (id)documentDataPath;
@property(readonly, nonatomic) NSDictionary *capabilities;
- (id)dictionaryDocuments;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

