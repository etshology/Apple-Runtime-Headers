//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKEmergencyCardTableItem.h>

@class HKMedicalIDPersonSummaryCell;

@interface HKEmergencyCardSummaryTableItem : HKEmergencyCardTableItem
{
    HKMedicalIDPersonSummaryCell *_cell;
}

- (void).cxx_destruct;
- (struct UIEdgeInsets)separatorInset;
- (void)setData:(id)arg1;
- (id)_cell;
- (id)tableView:(id)arg1 cellForRowAtIndex:(long long)arg2;
- (_Bool)hasPresentableData;
- (void)timeZoneDidChange:(id)arg1;
- (void)localeDidChange:(id)arg1;
- (id)initInEditMode:(_Bool)arg1;

@end

