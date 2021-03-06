//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RTVisitHyperParameter : NSObject
{
    unsigned long long _version;
    NSString *_uuid;
    unsigned long long _maxBurstNoiseLength;
    double _maxHorizontalAccuracy;
    double _maxNonFlankDistance;
    double _minNoiseToLeftFlankDistance;
    double _maxGapInVisit;
    unsigned long long _smootherKernelWidth;
    unsigned long long _timeIntervalBetweenSmoothedPoints;
    unsigned long long _maxDistanceBetweenAdjacentPoints;
    double _minSpeedToFilter;
    unsigned long long _movingWindowSizeForSpeed;
    unsigned long long _completeVisitMargin;
    double _decoderEntryCost;
    double _decoderExitCost;
    unsigned long long _featureDimension;
    double _featureDistanceMax;
    double _featureDistanceMin;
    double _featureDwellnessLogMax;
    double _featureDwellnessLogMin;
    unsigned long long _featurePaddingValue;
    double _featureRadiusMax;
    double _featureRadiusMin;
    unsigned long long _maxSequenceLength;
    double _minEntryProbability;
    double _minExitProbability;
    unsigned long long _minInferenceInterval;
    double _minNoVisitProbability;
    unsigned long long _minSequenceLength;
    unsigned long long _noVisitMargin;
    unsigned long long _numOfSlide;
    unsigned long long _numOfTimeStepForDistance;
    unsigned long long _numOfTimeStepForDwellness;
    unsigned long long _numOfTimeStepForRadius;
    unsigned long long _numTargetClass;
    unsigned long long _onDeviceInferenceBatchSize;
    unsigned long long _partialVisitMargin;
    unsigned long long _referenceSize;
    unsigned long long _stride;
    unsigned long long _timeStepInterval;
    unsigned long long _visitInferenceResolution;
    unsigned long long _windowInterval;
    unsigned long long _windowSize;
    unsigned long long _binSize;
    unsigned long long _maxNumOfBins;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long maxNumOfBins; // @synthesize maxNumOfBins=_maxNumOfBins;
@property(readonly, nonatomic) unsigned long long binSize; // @synthesize binSize=_binSize;
@property(readonly, nonatomic) unsigned long long windowSize; // @synthesize windowSize=_windowSize;
@property(readonly, nonatomic) unsigned long long windowInterval; // @synthesize windowInterval=_windowInterval;
@property(readonly, nonatomic) unsigned long long visitInferenceResolution; // @synthesize visitInferenceResolution=_visitInferenceResolution;
@property(readonly, nonatomic) unsigned long long timeStepInterval; // @synthesize timeStepInterval=_timeStepInterval;
@property(readonly, nonatomic) unsigned long long stride; // @synthesize stride=_stride;
@property(readonly, nonatomic) unsigned long long referenceSize; // @synthesize referenceSize=_referenceSize;
@property(readonly, nonatomic) unsigned long long partialVisitMargin; // @synthesize partialVisitMargin=_partialVisitMargin;
@property(readonly, nonatomic) unsigned long long onDeviceInferenceBatchSize; // @synthesize onDeviceInferenceBatchSize=_onDeviceInferenceBatchSize;
@property(readonly, nonatomic) unsigned long long numTargetClass; // @synthesize numTargetClass=_numTargetClass;
@property(readonly, nonatomic) unsigned long long numOfTimeStepForRadius; // @synthesize numOfTimeStepForRadius=_numOfTimeStepForRadius;
@property(readonly, nonatomic) unsigned long long numOfTimeStepForDwellness; // @synthesize numOfTimeStepForDwellness=_numOfTimeStepForDwellness;
@property(readonly, nonatomic) unsigned long long numOfTimeStepForDistance; // @synthesize numOfTimeStepForDistance=_numOfTimeStepForDistance;
@property(readonly, nonatomic) unsigned long long numOfSlide; // @synthesize numOfSlide=_numOfSlide;
@property(readonly, nonatomic) unsigned long long noVisitMargin; // @synthesize noVisitMargin=_noVisitMargin;
@property(readonly, nonatomic) unsigned long long minSequenceLength; // @synthesize minSequenceLength=_minSequenceLength;
@property(readonly, nonatomic) double minNoVisitProbability; // @synthesize minNoVisitProbability=_minNoVisitProbability;
@property(readonly, nonatomic) unsigned long long minInferenceInterval; // @synthesize minInferenceInterval=_minInferenceInterval;
@property(readonly, nonatomic) double minExitProbability; // @synthesize minExitProbability=_minExitProbability;
@property(readonly, nonatomic) double minEntryProbability; // @synthesize minEntryProbability=_minEntryProbability;
@property(readonly, nonatomic) unsigned long long maxSequenceLength; // @synthesize maxSequenceLength=_maxSequenceLength;
@property(readonly, nonatomic) double featureRadiusMin; // @synthesize featureRadiusMin=_featureRadiusMin;
@property(readonly, nonatomic) double featureRadiusMax; // @synthesize featureRadiusMax=_featureRadiusMax;
@property(readonly, nonatomic) unsigned long long featurePaddingValue; // @synthesize featurePaddingValue=_featurePaddingValue;
@property(readonly, nonatomic) double featureDwellnessLogMin; // @synthesize featureDwellnessLogMin=_featureDwellnessLogMin;
@property(readonly, nonatomic) double featureDwellnessLogMax; // @synthesize featureDwellnessLogMax=_featureDwellnessLogMax;
@property(readonly, nonatomic) double featureDistanceMin; // @synthesize featureDistanceMin=_featureDistanceMin;
@property(readonly, nonatomic) double featureDistanceMax; // @synthesize featureDistanceMax=_featureDistanceMax;
@property(readonly, nonatomic) unsigned long long featureDimension; // @synthesize featureDimension=_featureDimension;
@property(readonly, nonatomic) double decoderExitCost; // @synthesize decoderExitCost=_decoderExitCost;
@property(readonly, nonatomic) double decoderEntryCost; // @synthesize decoderEntryCost=_decoderEntryCost;
@property(readonly, nonatomic) unsigned long long completeVisitMargin; // @synthesize completeVisitMargin=_completeVisitMargin;
@property(readonly, nonatomic) unsigned long long movingWindowSizeForSpeed; // @synthesize movingWindowSizeForSpeed=_movingWindowSizeForSpeed;
@property(readonly, nonatomic) double minSpeedToFilter; // @synthesize minSpeedToFilter=_minSpeedToFilter;
@property(readonly, nonatomic) unsigned long long maxDistanceBetweenAdjacentPoints; // @synthesize maxDistanceBetweenAdjacentPoints=_maxDistanceBetweenAdjacentPoints;
@property(readonly, nonatomic) unsigned long long timeIntervalBetweenSmoothedPoints; // @synthesize timeIntervalBetweenSmoothedPoints=_timeIntervalBetweenSmoothedPoints;
@property(readonly, nonatomic) unsigned long long smootherKernelWidth; // @synthesize smootherKernelWidth=_smootherKernelWidth;
@property(readonly, nonatomic) double maxGapInVisit; // @synthesize maxGapInVisit=_maxGapInVisit;
@property(readonly, nonatomic) double minNoiseToLeftFlankDistance; // @synthesize minNoiseToLeftFlankDistance=_minNoiseToLeftFlankDistance;
@property(readonly, nonatomic) double maxNonFlankDistance; // @synthesize maxNonFlankDistance=_maxNonFlankDistance;
@property(readonly, nonatomic) double maxHorizontalAccuracy; // @synthesize maxHorizontalAccuracy=_maxHorizontalAccuracy;
@property(readonly, nonatomic) unsigned long long maxBurstNoiseLength; // @synthesize maxBurstNoiseLength=_maxBurstNoiseLength;
@property(readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic) unsigned long long version; // @synthesize version=_version;

@end

