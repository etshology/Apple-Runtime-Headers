//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding>
{
    NSNumber *_spacingMultiplier;
}

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(int)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(float)arg4;
@property(retain, nonatomic) NSNumber *spacingMultiplier; // @synthesize spacingMultiplier=_spacingMultiplier;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

