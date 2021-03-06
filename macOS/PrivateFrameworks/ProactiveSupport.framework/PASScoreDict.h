//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSharedKeySet;

@interface PASScoreDict : NSObject
{
    struct vector<float, std::__1::allocator<float>> *_mphtStorage;
    NSSharedKeySet *_sharedKeySet;
    NSMutableDictionary *_sideDict;
}

+ (id)scoreDictFromDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)toDictionary;
@property(readonly, nonatomic) unsigned long long count;
- (double)scoreForSharedKeySetIndex:(unsigned long long)arg1;
- (void)setScore:(double)arg1 forSharedKeySetIndex:(unsigned long long)arg2;
- (double)scoreForKey:(id)arg1 found:(char *)arg2;
- (void)setScore:(double)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithDefaultValueForScoreInputSetKeys:(id)arg1;
- (id)initWithDefaultValueForKeys:(id)arg1;
- (id)initWithDefaultValueForSharedKeySet:(id)arg1;
- (id)init;

@end

