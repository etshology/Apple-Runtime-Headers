//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UITableViewDataSource-Protocol.h>

@class NSArray, NSIndexPath, NSString, UITableView;

@protocol UITableViewDataSourcePrivate <UITableViewDataSource>

@optional
- (NSString *)tableView:(UITableView *)arg1 detailTextForHeaderInSection:(long long)arg2;
- (NSArray *)_tableView:(UITableView *)arg1 sectionIndexTitlesTrimmedToCount:(unsigned long long)arg2;
- (NSIndexPath *)tableView:(UITableView *)arg1 indexPathForSectionIndexTitle:(NSString *)arg2 atIndex:(long long)arg3;
@end

