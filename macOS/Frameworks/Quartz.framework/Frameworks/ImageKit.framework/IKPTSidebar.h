//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableView.h>

#import <ImageKit/NSTableViewDataSource-Protocol.h>
#import <ImageKit/NSTableViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface IKPTSidebar : NSTableView <NSTableViewDataSource, NSTableViewDelegate>
{
    NSMutableArray *_items;
    NSArray *_visibleItems;
}

+ (double)minimalWidthForItemTitles:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)mouseDown:(id)arg1;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (void)highlightSelectionInClipRect:(struct CGRect)arg1;
- (void)setItemHidden:(BOOL)arg1 forTag:(long long)arg2;
- (void)setItemTitle:(id)arg1 forTag:(long long)arg2;
- (long long)indexOfSelectedItem;
- (id)selectedItem;
- (BOOL)selectItemWithTag:(long long)arg1;
- (id)lastItem;
- (id)itemWithTitle:(id)arg1;
- (id)itemAtVisibleIndex:(long long)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)indexOfVisibleItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTag:(long long)arg1;
- (long long)indexOfItemWithTitle:(id)arg1;
- (long long)indexOfItem:(id)arg1;
- (long long)numberOfItems;
- (id)itemArray;
- (void)removeAllItems;
- (void)removeItemAtIndex:(long long)arg1;
- (void)removeItemWithTitle:(id)arg1;
- (void)insertItemWithTitle:(id)arg1 atIndex:(long long)arg2;
- (void)addItemWithTitle:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)reloadData;
- (BOOL)isOpaque;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

