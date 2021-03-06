//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrintKit/PKPaper.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface _UIPKPaperIOSMac : PKPaper
{
    NSDictionary *_paperDict;
}

+ (BOOL)willAdjustMarginsForDuplexMode:(id)arg1;
- (void).cxx_destruct;
- (int)maxHeight;
- (int)minHeight;
- (unsigned long long)bottomMarginInPoints;
- (unsigned long long)topMarginInPoints;
- (int)bottomMargin;
- (int)rightMargin;
- (int)topMargin;
- (int)leftMargin;
- (int)height;
- (int)width;
- (id)mediaTypeName;
- (id)mediaType;
- (unsigned long long)maxCutLength;
- (unsigned long long)minCutLength;
- (BOOL)isRoll;
- (BOOL)isTransverse;
- (BOOL)isBorderless;
- (double)imageableArea;
- (struct CGRect)imageableAreaRect;
- (struct CGSize)paperSize;
- (id)baseName;
- (id)name;
- (id)localizedName;
- (id)initWithDictionary:(id)arg1;

@end

