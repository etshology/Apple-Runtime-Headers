//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSFileAccessClaim.h>

@class NSFileAccessNode, NSMutableArray;

__attribute__((visibility("hidden")))
@interface NSFileMultipleAccessClaim : NSFileAccessClaim
{
    NSMutableArray *_readingURLs;
    unsigned long long *_readingOptions;
    char *_readingURLsDidChange;
    NSMutableArray *_writingURLs;
    unsigned long long *_writingOptions;
    char *_writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    unsigned long long _currentlyLinkResolvingURLIndex;
    long long _readingLinkResolutionCount;
}

+ (BOOL)supportsSecureCoding;
- (BOOL)shouldCancelInsteadOfWaiting;
- (id)allURLs;
- (BOOL)shouldBeRevokedPriorToInvokingAccessor;
- (BOOL)blocksClaim:(id)arg1;
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;
- (void)devalueSelf;
- (void)invokeClaimer;
- (void)resolveURLsThenMaybeContinueInvokingClaimer:(CDUnknownBlockType)arg1;
- (void)granted;
- (BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;
- (BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2;
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithPurposeID:(id)arg1 intents:(id)arg2 claimer:(CDUnknownBlockType)arg3;

@end

