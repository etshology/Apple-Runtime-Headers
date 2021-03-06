//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUIKit/CCUICAPackageView.h>

#import <MediaControls/_UICursorInteractionDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MediaControlsRoutingCornerView : CCUICAPackageView <_UICursorInteractionDelegate>
{
    _Bool _routesAvailable;
    _Bool _routing;
    long long _deviceType;
}

@property(nonatomic, getter=isRouting) _Bool routing; // @synthesize routing=_routing;
@property(nonatomic, getter=routesAreAvailable) _Bool routesAvailable; // @synthesize routesAvailable=_routesAvailable;
@property(nonatomic) long long deviceType; // @synthesize deviceType=_deviceType;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (void)_updateGlyph;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

