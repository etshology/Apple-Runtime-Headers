//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OSAComponentInstance : NSObject
{
    struct ComponentInstanceRecord *componentInstance;
}

+ (id)newWithComponentInstance:(struct ComponentInstanceRecord *)arg1;
@property(readonly) struct ComponentInstanceRecord *componentInstance; // @synthesize componentInstance;
- (void)finalize;
- (void)dealloc;
- (id)initWithComponentInstance:(struct ComponentInstanceRecord *)arg1;

@end

