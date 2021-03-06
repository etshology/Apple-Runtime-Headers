//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CSLSpriteSheetDescriptor : NSObject
{
    NSString *_name;
    float _frameRate;
    unsigned int _columns;
    unsigned int _rows;
    unsigned int _totalFrames;
    float _spriteDimension;
}

+ (id)descriptorWithName:(id)arg1 frameRate:(float)arg2 columns:(unsigned int)arg3 rows:(unsigned int)arg4 totalFrames:(unsigned int)arg5 dimension:(float)arg6;
- (void).cxx_destruct;
@property(nonatomic) float spriteDimension; // @synthesize spriteDimension=_spriteDimension;
@property(nonatomic) unsigned int totalFrames; // @synthesize totalFrames=_totalFrames;
@property(nonatomic) unsigned int rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned int columns; // @synthesize columns=_columns;
@property(nonatomic) float frameRate; // @synthesize frameRate=_frameRate;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithWithName:(id)arg1 frameRate:(float)arg2 columns:(unsigned int)arg3 rows:(unsigned int)arg4 totalFrames:(unsigned int)arg5 dimension:(float)arg6;

@end

