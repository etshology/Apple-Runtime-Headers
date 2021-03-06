//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NTKOlympusMask : NSObject
{
}

+ (unsigned long long)quadrantForPoint:(struct CGPoint)arg1;
+ (unsigned long long)quadrantForAngle:(double)arg1;
+ (double)convertAngleForFirstQuadrant:(double)arg1;
+ (struct CGPoint)nextPointFromStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 radius:(double)arg3;
+ (unsigned long long)nextQuadrantIndex:(unsigned long long)arg1;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 translantedFromFirstToQuadrantIndex:(unsigned long long)arg2;
+ (struct CGPoint)convertPoint:(struct CGPoint)arg1 translantedQuadrantIndex:(unsigned long long)arg2;
+ (struct CGPoint)convertPointFromCartesianCoordiatesToViewCoordiates:(struct CGPoint)arg1 centerFromViewCoordinates:(struct CGPoint)arg2;
+ (struct CGPoint)convertPointFromViewCoordinatesToCartesianCoordiates:(struct CGPoint)arg1 centerFromViewCoordinates:(struct CGPoint)arg2;
+ (struct CGPoint)pointForAngle:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint)arg3;
+ (double)minuteHandAngleWithDate:(id)arg1;
+ (double)hourHandAngleWithDate:(id)arg1;
+ (double)angleForMinute:(unsigned long long)arg1 seconds:(unsigned long long)arg2;
+ (double)angleForHour:(unsigned long long)arg1 minutes:(unsigned long long)arg2;
+ (struct CGPoint)roundPoint:(struct CGPoint)arg1;
+ (id)clippingPathFromCenterPoint:(struct CGPoint)arg1 startAngle:(double)arg2 endAngle:(double)arg3 radius:(double)arg4;
+ (double)normalizeAngle:(double)arg1;

@end

