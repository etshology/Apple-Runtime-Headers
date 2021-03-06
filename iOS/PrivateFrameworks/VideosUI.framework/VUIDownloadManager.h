//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/TVPDownloadDelegate-Protocol.h>
#import <VideosUI/TVPDownloadSessionDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSPointerArray, NSString;

@interface VUIDownloadManager : NSObject <TVPDownloadDelegate, TVPDownloadSessionDelegate>
{
    _Bool _dialogBeingPresented;
    NSMutableArray *_mutableDownloads;
    NSMutableArray *_failedDownloadsNeedingDialog;
    NSPointerArray *_delegates;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSPointerArray *delegates; // @synthesize delegates=_delegates;
@property(nonatomic) _Bool dialogBeingPresented; // @synthesize dialogBeingPresented=_dialogBeingPresented;
@property(retain, nonatomic) NSMutableArray *failedDownloadsNeedingDialog; // @synthesize failedDownloadsNeedingDialog=_failedDownloadsNeedingDialog;
@property(retain, nonatomic) NSMutableArray *mutableDownloads; // @synthesize mutableDownloads=_mutableDownloads;
- (void)_configureDownloadFromNewUserPrefs:(id)arg1 allowCellular:(_Bool)arg2 quality:(long long)arg3;
- (void)_configureDownloadFromUserPrefs:(id)arg1 allowCellular:(_Bool)arg2 quality:(long long)arg3;
- (void)_configureDownloadFromLegacyUserPrefs:(id)arg1;
- (void)_activeAccountDidChange:(id)arg1;
- (void)_loadImageForImageInfoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (void)_loadImageForSeriesManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (void)_loadImageForVideoManagedObject:(id)arg1 imageType:(unsigned long long)arg2;
- (id)_alertControllerForFailedDownloads:(id)arg1;
- (_Bool)_anyDownloadsFailedDueToInvalidUserToken:(id)arg1;
- (void)_showDownloadErrorDialogIfAppropriateAllowingSignInPrompt:(_Bool)arg1;
- (void)_showDownloadErrorDialogIfAppropriate;
- (void)_isPlaybackUIBeingShownDidChange:(id)arg1;
- (void)_notifyDelegatesThatDownloadsDidChange;
- (void)download:(id)arg1 didDetermineMaximumResolution:(long long)arg2 maximumVideoRange:(long long)arg3;
- (void)downloadSession:(id)arg1 didAddRestoredDownloads:(id)arg2;
- (void)download:(id)arg1 didReceiveTaskIdentifier:(id)arg2;
- (void)download:(id)arg1 willDownloadToURL:(id)arg2;
- (void)download:(id)arg1 didChangeStateTo:(long long)arg2;
@property(readonly, nonatomic) NSArray *downloads;
- (void)cancelDownloadForCanonicalID:(id)arg1;
- (id)existingDownloadForCanonicalID:(id)arg1;
- (void)addDownloadForVideoManagedObject:(id)arg1 allowCellular:(_Bool)arg2 quality:(long long)arg3;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
- (void)initializeDownloadManager;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

