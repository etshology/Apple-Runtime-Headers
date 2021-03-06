//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreServices/NSSecureCoding-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding>
{
    _Bool _preliminary;
    NSString *_primaryBundleID;
    NSMutableArray *_journalledNotifications;
    unsigned int _operationType;
    double _timestamp;
}

+ (_Bool)shouldJournalNotificationType:(int)arg1;
+ (void)createInstallJournalDirectoryIfRequired;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3;
- (void)sendNotification:(int)arg1 forApps:(id)arg2 withPlugins:(_Bool)arg3 options:(id)arg4;
- (void)removeJournalAfterNotificationFence;
- (void)setPrimaryBundleID:(id)arg1;
- (void)writeFinalJournal;
- (void)writePreliminaryJournal;
- (void)_writeJournalUnconditionally;
- (void)removeJournalFile;
- (id)journalURL;
- (double)timestamp;
- (unsigned int)installOperation;
- (id)primaryBundleID;
- (id)journalledNotifications;
- (id)synthesizedPreliminaryJournalledNotifications;
- (_Bool)applicableForCurrentDatabase;
- (_Bool)entityExists;
- (_Bool)shouldExpectEntityToExist;
- (_Bool)isApplicationRegisteredWithbundleID:(id)arg1 placeholder:(_Bool)arg2;
- (id)initWithPrimaryBundleID:(id)arg1 operation:(unsigned int)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

