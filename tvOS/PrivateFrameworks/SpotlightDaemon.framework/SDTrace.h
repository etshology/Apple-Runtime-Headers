//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SDTraceItem;

@interface SDTrace : NSObject
{
    SDTraceItem *_items[32];
    int _current;
    NSString *_title;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) int current; // @synthesize current=_current;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;
- (id)items;
- (long long)addLabel:(id)arg1 identifier:(long long)arg2 duration:(double)arg3 string:(id)arg4 data:(id)arg5;
- (id)initWithTitle:(id)arg1;
- (id)init;

@end

