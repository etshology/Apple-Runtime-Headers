//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@interface QCImageView : NSImageView
{
}

- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)_copyImage;
- (void)paste:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)_newImageFromPasteboard:(id)arg1;
- (BOOL)_canCreateImageFromPasteboard:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_loadImage;
- (void)_resetImage;

@end

