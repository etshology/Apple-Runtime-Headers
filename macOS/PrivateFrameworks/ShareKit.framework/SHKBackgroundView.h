//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSView.h>

@protocol SHKClientWindowSyncDelegate;

__attribute__((visibility("hidden")))
@interface SHKBackgroundView : NSView
{
    id <SHKClientWindowSyncDelegate> _delegate;
}

- (void).cxx_destruct;
@property __weak id <SHKClientWindowSyncDelegate> delegate; // @synthesize delegate=_delegate;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

