//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKImageCorrectionHandler, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface IKImageCorrection : NSObject
{
    IKImageCorrectionHandler *_imageCorrectionHandler;
    NSString *_className;
    BOOL _correctionEnabled;
    NSMutableDictionary *_minMaxInfo;
}

@property IKImageCorrectionHandler *imageCorrectionHandler; // @synthesize imageCorrectionHandler=_imageCorrectionHandler;
@property BOOL correctionEnabled; // @synthesize correctionEnabled=_correctionEnabled;
@property(copy) NSString *className; // @synthesize className=_className;
- (double)identValueForKey:(id)arg1;
- (double)maxValueForKey:(id)arg1;
- (double)minValueForKey:(id)arg1;
@property(readonly) BOOL isIdentity;
- (id)processedImage:(id)arg1 ciContext:(id)arg2 cgContext:(struct CGContext *)arg3;
- (id)attributes;
@property(readonly) NSString *name;
- (void)setDefaults;
- (id)initWithClassName:(id)arg1 identifier:(id)arg2;

@end

