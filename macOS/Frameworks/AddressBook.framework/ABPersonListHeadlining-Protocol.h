//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AddressBook/NSObject-Protocol.h>

@class NSArray;

@protocol ABPersonListHeadlining <NSObject>
@property(nonatomic) BOOL vibrantHeaders;
@property(readonly, nonatomic) unsigned long long numberOfMeCards;
@property(nonatomic) unsigned long long countLabelThreshold;
@property(nonatomic) long long sectioningThreshold;
- (NSArray *)bucketedEntriesForSortedEntries:(NSArray *)arg1;
@end

