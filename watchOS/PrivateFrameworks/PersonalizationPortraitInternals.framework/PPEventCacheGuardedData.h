//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableIndexSet;

@interface PPEventCacheGuardedData : NSObject
{
    NSMutableArray *_cachedEvents;
    NSMutableIndexSet *_cachedRanges;
    unsigned int _extraSecondsToBackfill;
    NSMutableDictionary *_cachedEventHighlights;
}

- (void).cxx_destruct;

@end

