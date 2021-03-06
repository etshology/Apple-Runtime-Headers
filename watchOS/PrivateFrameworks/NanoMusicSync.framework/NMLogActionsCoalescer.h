//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_os_log;

__attribute__((visibility("hidden")))
@interface NMLogActionsCoalescer : NSObject
{
    NSMutableArray *_pendingLogActions;
    id _identifier;
    NSObject<OS_os_log> *_category;
    unsigned int _partNumber;
    NSString *_prefix;
    unsigned int _messageBufferLimit;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int messageBufferLimit; // @synthesize messageBufferLimit=_messageBufferLimit;
@property(retain, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void)_writeLogMessageFromActions:(id)arg1 includingPartNumber:(_Bool)arg2;
- (id)_logMessageFromPendingLogActions:(id)arg1 includingPartNumber:(_Bool)arg2;
- (void)_addAction:(id)arg1 toPendingActions:(id)arg2 limit:(unsigned int)arg3;
- (void)flush;
- (void)addLogAction:(id)arg1;
- (id)initWithIdentifier:(id)arg1 logCategory:(id)arg2;

@end

