//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKHealthStore, HKSample, NSString;

@interface HKDataMetadataReportSection : HKDataMetadataSection
{
    HKSample *_sample;
    NSString *_detailedReportName;
    HKHealthStore *_healthStore;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(readonly, nonatomic) NSString *detailedReportName; // @synthesize detailedReportName=_detailedReportName;
@property(readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(_Bool)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)documentImageForXMLFiles;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2;

@end

