//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNAnalyzing-Protocol.h>

@class MLModel, NSString, SNSystemConfiguration;

__attribute__((visibility("hidden")))
@interface SNVGGFeatureExtractor : NSObject <SNAnalyzing>
{
    shared_ptr_f6ac7592 _graph;
    MLModel *_mlModel;
    SNSystemConfiguration *_systemConfiguration;
    float _overlapFactor;
    long long _featurePrintType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) float overlapFactor; // @synthesize overlapFactor=_overlapFactor;
@property(nonatomic) long long featurePrintType; // @synthesize featurePrintType=_featurePrintType;
@property(readonly, nonatomic) struct Box *resultsBox;
- (id)resultsFromBox:(struct Box *)arg1 renderedWithFrameCount:(int)arg2;
- (id)sharedProcessorConfiguration;
- (_Bool)adaptToSystemConfiguration:(id)arg1 error:(id *)arg2;
- (id)mlModel;
@property(readonly, nonatomic) shared_ptr_f6ac7592 graph;
- (void)updateGraph;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

