//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class TKTonePickerViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNTonePickerController : UINavigationController
{
    TKTonePickerViewController *_tonePicker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) TKTonePickerViewController *tonePicker; // @synthesize tonePicker=_tonePicker;
- (void)cancelButton:(id)arg1;
- (void)doneButton:(id)arg1;
- (id)initWithAlertType:(long long)arg1 activityAlert:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;

@end

