//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class NSMutableArray;

@interface ILNinePartImageRep : NSImageRep
{
    NSMutableArray *slices;
    struct CGRect slicingRect;
}

+ (id)ninePartImageRepForImage:(id)arg1 slicingRect:(struct CGRect)arg2;
@property(retain) NSMutableArray *slices; // @synthesize slices;
@property struct CGRect slicingRect; // @synthesize slicingRect;
- (struct CGRect)rectOfPart:(int)arg1 forSlicingRect:(struct CGRect)arg2 inRectOfSize:(struct CGSize)arg3;
- (BOOL)draw;
- (void)dealloc;
- (id)initWithImage:(id)arg1 slicingRect:(struct CGRect)arg2;

@end

