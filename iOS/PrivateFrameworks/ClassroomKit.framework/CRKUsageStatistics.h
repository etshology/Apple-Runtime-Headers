//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CRKUsageStatistics : NSObject
{
}

+ (void)clearDistributionKey:(id)arg1;
+ (void)pushDouble:(double)arg1 forKey:(id)arg2;
+ (void)incrementKey:(id)arg1;
+ (void)logCourseCount:(unsigned long long)arg1;
+ (void)logDidDeleteCourse;
+ (void)resetConfigurationCounts;
+ (void)logDidFailEnrollment;
+ (void)logDidEnterInvalidEnrollmentPin;
+ (void)logDidSuccessfullyEnroll;
+ (void)logDidShareLink;
+ (void)logDidShareDocument;
+ (void)logDidDenyAction;
+ (void)logDidAllowAction;
+ (void)logDidModifyPermission;
+ (void)logDidDenyJoinCourse;
+ (void)logDidAcceptJoinCourse;
+ (void)logWillAutomaticallyJoinCourses:(_Bool)arg1;

@end

