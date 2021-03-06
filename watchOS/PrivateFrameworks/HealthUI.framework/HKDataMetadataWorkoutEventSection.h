//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKWorkout, HKWorkoutDurationNumberFormatter, NSDateComponentsFormatter;

@interface HKDataMetadataWorkoutEventSection : HKDataMetadataSection
{
    HKWorkout *_workout;
    NSDateComponentsFormatter *_dateFormatter;
    HKWorkoutDurationNumberFormatter *_durationFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HKWorkoutDurationNumberFormatter *durationFormatter; // @synthesize durationFormatter=_durationFormatter;
@property(retain, nonatomic) NSDateComponentsFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) HKWorkout *workout; // @synthesize workout=_workout;
- (void)selectCellForIndex:(unsigned int)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned int)arg1 tableView:(id)arg2;
- (unsigned int)numberOfRowsInSection;
- (id)sectionTitle;
- (id)initWithSample:(id)arg1;

@end

