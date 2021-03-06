//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/_UICursorInteractionDelegate-Protocol.h>

@class NSMapTable, NSString, UIView, UIWindow, _UICursorInteraction;

@interface SBSystemCursorInteractionManager : NSObject <_UICursorInteractionDelegate>
{
    _UICursorInteraction *_cursorInteraction;
    NSMapTable *_registeredViewsToDelegates;
    UIWindow *_window;
    UIView *_activeCursorRegionView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *activeCursorRegionView; // @synthesize activeCursorRegionView=_activeCursorRegionView;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
- (void)cursorInteraction:(id)arg1 willExitRegion:(id)arg2 withAnimator:(id)arg3;
- (void)cursorInteraction:(id)arg1 willEnterRegion:(id)arg2 withAnimator:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (void)unregisterView:(id)arg1;
- (void)registerView:(id)arg1 delegate:(id)arg2;
- (id)initWithCursorInteractionWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

