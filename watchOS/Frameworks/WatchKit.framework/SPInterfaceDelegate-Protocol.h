//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchKit/NSObject-Protocol.h>

@class NSString, SPInterfaceGroupView;

@protocol SPInterfaceDelegate <NSObject>
- (void)setValue:(id)arg1 forKey:(NSString *)arg2;
- (void)performAction:(NSString *)arg1 withValue:(id)arg2;

@optional
- (void)interfaceGroupViewDidAdjustHeight:(SPInterfaceGroupView *)arg1;
@end

