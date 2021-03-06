//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class SFEditableTableViewCell, UIBarButtonItem;
@protocol SFAddPasswordViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SFAddPasswordViewController : UITableViewController
{
    UIBarButtonItem *_cancelBarButtonItem;
    UIBarButtonItem *_doneBarButtonItem;
    SFEditableTableViewCell *_websiteCell;
    SFEditableTableViewCell *_userCell;
    SFEditableTableViewCell *_passwordCell;
    id <SFAddPasswordViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SFAddPasswordViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)_textFieldChanged:(id)arg1;
- (void)_doneBarButtonItemTapped:(id)arg1;
- (void)_cancelBarButtonItemTapped:(id)arg1;
- (void)viewDidLoad;
- (id)init;

@end

