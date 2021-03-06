//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKQuantity, NSDate;

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>
{
    NSDate *_date;
    HKQuantity *_quantity;
    int _context;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int context; // @synthesize context=_context;
@property(readonly, nonatomic) HKQuantity *quantity; // @synthesize quantity=_quantity;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 quantity:(id)arg2;
- (id)initWithDate:(id)arg1 quantity:(id)arg2 context:(int)arg3;

@end

