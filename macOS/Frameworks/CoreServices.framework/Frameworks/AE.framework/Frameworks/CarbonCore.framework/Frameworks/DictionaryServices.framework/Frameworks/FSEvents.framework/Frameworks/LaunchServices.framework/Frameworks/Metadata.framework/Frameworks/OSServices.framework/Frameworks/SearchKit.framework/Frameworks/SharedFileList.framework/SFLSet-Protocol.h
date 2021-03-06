//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SharedFileList/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString, SFLItem;
@protocol SFLSetObserver;

@protocol SFLSet <NSObject>
@property(copy) NSDictionary *properties;
@property(readonly, copy) NSArray *allItems;
@property(readonly, retain) NSString *identifier;
- (void)removeObserver:(id <SFLSetObserver>)arg1;
- (void)addObserver:(id <SFLSetObserver>)arg1;
- (BOOL)containsItem:(SFLItem *)arg1;
- (BOOL)updateItem:(SFLItem *)arg1 error:(id *)arg2;
- (BOOL)removeItem:(SFLItem *)arg1 error:(id *)arg2;
- (BOOL)addItem:(SFLItem *)arg1 error:(id *)arg2;
- (BOOL)setPropertyValuesForKeysWithDictionary:(NSDictionary *)arg1 error:(id *)arg2;
@end

