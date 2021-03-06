//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSMutableArray, _UIValuePredictor;

__attribute__((visibility("hidden")))
@interface _UITouchPredictor : NSObject <NSCopying>
{
    NSMutableArray *_predictions;
    _Bool _predictionsValid;
    _UIValuePredictor *_xValuePredictor;
    _UIValuePredictor *_yValuePredictor;
    _UIValuePredictor *_angleValuePredictor;
    _UIValuePredictor *_azimuthValuePredictor;
    _UIValuePredictor *_forceValuePredictor;
    double _averageTouchInterval;
    double _lastTouchTimestamp;
    float _numPredictionsBuffer[5];
    int _numPredictionsBufferCount;
}

- (void).cxx_destruct;
- (void)_updatePredictionsForTouch:(id)arg1 weight:(float)arg2;
- (id)description;
- (id)descriptionFromIndex:(int)arg1 toIndex:(int)arg2 includeHeader:(_Bool)arg3 includeDetailedConfidence:(_Bool)arg4;
- (id)_forceValuePredictor;
- (id)_azimuthValuePredictor;
- (id)_angleValuePredictor;
- (id)_yValuePredictor;
- (id)_xValuePredictor;
- (id)predictedTouchesForTouch:(id)arg1;
- (id)_predictedTouchesAtIndex:(unsigned int)arg1 forTouch:(id)arg2;
- (unsigned int)_dampenedNumPredictionsAtIndex:(unsigned int)arg1;
- (unsigned int)_numPredictionsAtIndex:(unsigned int)arg1 hardLimit:(unsigned int *)arg2;
- (void)addTouch:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTouchPredictor:(id)arg1;
- (id)init;

@end

