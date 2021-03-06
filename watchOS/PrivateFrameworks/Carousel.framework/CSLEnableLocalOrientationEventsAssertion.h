//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Carousel/CSLEnableOrientationEventsAssertion.h>

@protocol CSLEnableOrientationEventsAssertionDelegate;

@interface CSLEnableLocalOrientationEventsAssertion : CSLEnableOrientationEventsAssertion
{
    id <CSLEnableOrientationEventsAssertionDelegate> _delegate;
}

+ (id)takeLocalAssertionWithIdentifier:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak id <CSLEnableOrientationEventsAssertionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_releaseAssertion;
- (void)_takeAssertion;
- (void)_deviceOrientationDidChange:(id)arg1;
- (void)_crownOrientationDidChange:(id)arg1;
- (void)_updateEffectiveOrientation;
- (id)description;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

