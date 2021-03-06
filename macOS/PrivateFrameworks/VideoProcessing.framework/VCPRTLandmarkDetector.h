//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VCPRTLandmarkDetector : NSObject
{
    struct LandmarkDetector *_internalLandmarkDetector;
    int _numOfLandmarks;
}

- (void)calculateFaceRectFromPrevLM:(float *)arg1 result:(float *)arg2 numOfLandmarks:(int)arg3;
- (void)detectLandmark:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float *)arg5 prevResult:(float *)arg6 result:(float *)arg7;
- (void)dealloc;
- (id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6;

@end

