//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GEOHoursTestHelper : NSObject
{
}

+ (id)testingDictionaryForIsWeekdayInRange;
+ (struct GEOPDLocalTimeRange)_rangeWithFromHour:(int)arg1 fromMinute:(int)arg2 toHour:(int)arg3 toMinute:(int)arg4;
+ (id)_pdHoursFromHour:(int)arg1 fromMinute:(int)arg2 toHour:(int)arg3 toMinute:(int)arg4 inTimeZone:(id)arg5 onDay:(int)arg6 month:(int)arg7 year:(int)arg8 openingThreshold:(double)arg9 closingThreshold:(double)arg10 shouldGoOverMidnight:(_Bool)arg11;
+ (id)testTimeZoneForGEOPlaceDailyHoursTest;
+ (id)testTimeZoneForMKLocalizedHoursBuilderTest;
+ (id)testDateForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithTemporaryClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursWithPermanentlyClosedHoursTypeForMKLocalizedHoursBuilderTest;
+ (id)testBusinessHoursForMKLocalizedHoursBuilderTest;
+ (id)dateWithString:(id)arg1;

@end

