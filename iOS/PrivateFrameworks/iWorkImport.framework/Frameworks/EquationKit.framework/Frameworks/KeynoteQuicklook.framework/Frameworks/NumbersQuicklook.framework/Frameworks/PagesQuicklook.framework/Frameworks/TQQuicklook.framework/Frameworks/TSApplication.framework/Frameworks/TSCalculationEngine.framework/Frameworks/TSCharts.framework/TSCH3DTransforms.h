//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSCH3DTransforms : NSObject
{
    NSMutableArray *mArray;
    tvec2_3b141483 mSize;
}

+ (id)transformsWithSize:(tvec2_3b141483)arg1;
+ (id)transforms;
- (id).cxx_construct;
@property(readonly, nonatomic) tvec2_3b141483 size; // @synthesize size=mSize;
- (long long)arrayIndex:(tvec2_3b141483)arg1;
- (id)transformAtIndex:(tvec2_3b141483)arg1;
- (void)setTransform:(id)arg1 atIndex:(tvec2_3b141483)arg2;
- (void)dealloc;

@end

