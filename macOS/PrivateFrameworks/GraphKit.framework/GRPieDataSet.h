//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GraphKit/GRDataSet.h>

#import <GraphKit/NSCoding-Protocol.h>
#import <GraphKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GRPieDataSet : GRDataSet <NSCoding, NSCopying>
{
    double _sum;
    NSMutableArray *_wedgePaths;
    SEL _numElementsSEL;
    CDUnknownFunctionPointerType _numElementsIMP;
    SEL _yValueAtIndexSEL;
    CDUnknownFunctionPointerType _yValueAtIndexIMP;
    SEL _colorAtIndexSEL;
    CDUnknownFunctionPointerType _colorAtIndexIMP;
    SEL _calloutAtIndexSEL;
    struct {
        CDUnknownFunctionPointerType _field1;
        double _field2;
    } *_extraData;
}

+ (Class)axesClass;
+ (void)initialize;
- (double)_maximumUsefulZoomForRealAxis:(BOOL)arg1;
- (unsigned long long)indexOfAngle:(double)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (BOOL)setSelectedRange:(struct _NSRange)arg1;
- (void)drawDataSetRect:(struct CGRect)arg1;
- (void)drawLegendSampleInRect:(struct CGRect)arg1 forWedgeIndex:(unsigned long long)arg2;
- (void)reloadDataInRange:(struct _NSRange)arg1;
- (void)setDataSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)chart:(id)arg1 propertyChangedForKey:(id)arg2 from:(id)arg3 to:(id)arg4;
- (void)didSetProperty:(id)arg1 forKey:(id)arg2 replacingOldValue:(id)arg3 andShouldReload:(char *)arg4 andRelayout:(char *)arg5 andRedisplay:(char *)arg6;
- (id)propertyForKey:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithOwnerChart:(id)arg1;

@end

