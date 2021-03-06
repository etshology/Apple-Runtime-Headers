//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@interface DNDScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    unsigned long long _hour;
    unsigned long long _minute;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultEndTime;
+ (id)defaultStartTime;
@property(readonly, nonatomic) unsigned long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) unsigned long long hour; // @synthesize hour=_hour;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)_initWithHour:(unsigned long long)arg1 minute:(unsigned long long)arg2;
- (id)_initWithTime:(id)arg1;
- (id)init;
- (id)dateComponents;

@end

