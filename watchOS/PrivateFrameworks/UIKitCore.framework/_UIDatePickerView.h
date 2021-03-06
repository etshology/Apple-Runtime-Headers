//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIPickerView.h>

#import <UIKitCore/UIPickerViewDataSource-Protocol.h>
#import <UIKitCore/UIPickerViewDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerViewComponent-Protocol.h>

@class NSCalendar, NSLocale, NSString, UIColor, UIDatePicker, UIFont, UILabel, _UIDatePickerDataModel, _UIDatePickerMode;

__attribute__((visibility("hidden")))
@interface _UIDatePickerView : UIPickerView <UIPickerViewDelegate, UIPickerViewDataSource, _UIDatePickerViewComponent>
{
    int _loadingDate;
    _Bool _allowsZeroTimeInterval;
    _UIDatePickerMode *_mode;
    UILabel *_hourLabel;
    UILabel *_minuteLabel;
    int _expectedAMPM;
    struct {
        unsigned int staggerTimeIntervals:1;
        unsigned int loadingDateOrTime:1;
        unsigned int highlightsToday:1;
        unsigned int usesBlackChrome:1;
    } _datePickerFlags;
    UIDatePicker *_datePicker;
    _UIDatePickerDataModel *_data;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (int)datePickerMode;
@property(readonly, nonatomic, getter=_hrMinFont) UIFont *hrMinFont; // @dynamic hrMinFont;
- (id)_hoursStringForHour:(int)arg1;
- (id)_minutesStringForHour:(int)arg1 minutes:(int)arg2;
- (int)_selectionBarRowInComponent:(int)arg1;
- (_Bool)hasDefaultSize;
- (_Bool)_updateDateOrTime;
@property(readonly, nonatomic, getter=_amPmValue) int amPmValue; // @dynamic amPmValue;
- (id)_existingLabelForCalendarUnit:(unsigned int)arg1;
- (id)_labelTextForCalendarUnit:(unsigned int)arg1;
- (id)_selectedTextForCalendarUnit:(unsigned int)arg1;
@property(nonatomic) _Bool highlightsToday; // @dynamic highlightsToday;
- (_Bool)staggerTimeIntervals;
- (id)_viewForSelectedRowInComponent:(int)arg1;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
@property(nonatomic, getter=_usesBlackChrome, setter=_setUsesBlackChrome:) _Bool usesBlackChrome;
- (void)_setHidesLabels:(_Bool)arg1;
- (void)_resetSelectionOfTables;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (id)shadowColor;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (float)pickerView:(id)arg1 widthForComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
@property(readonly, nonatomic) float contentWidth; // @dynamic contentWidth;
@property(nonatomic) double timeInterval;
- (void)_updateEnabledCellsIncludingWMDCells:(_Bool)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (void)_fadeLabelForCalendarUnit:(unsigned int)arg1 toText:(id)arg2 animated:(_Bool)arg3;
- (void)_updateTextColorForCalendarUnitLabel:(id)arg1;
- (id)_makeNewCalendarUnitLabel;
- (id)_contentViewForSizingLabelForPositioningInComponent:(int)arg1;
- (void)_positionLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 relativeTo:(id)arg3 order:(int)arg4;
- (void)_setLabel:(id)arg1 forCalendarUnit:(unsigned int)arg2 animated:(_Bool)arg3;
- (id)_labelForCalendarUnit:(unsigned int)arg1 createIfNecessary:(_Bool)arg2;
- (void)_UIAppearance_setTextColor:(id)arg1;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
- (void)_updateLabelColors;
- (void)_updateLabels:(_Bool)arg1;
- (_Bool)_updatedLastSelectedComponentsByValidatingSelectedDateWithLastManipulatedComponent:(int)arg1;
- (id)_componentsSelectedAfterEnforcingValidityOfComponents:(id)arg1 withLastManipulatedComponent:(int)arg2;
- (int)_selectedMinuteForColumn:(int)arg1;
- (int)_selectedHourForColumn:(int)arg1;
- (void)_selectRow:(int)arg1 inComponent:(int)arg2 animated:(_Bool)arg3 notify:(_Bool)arg4;
- (void)_loadDateAnimated:(_Bool)arg1;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)didChangeMinuteInterval;
- (void)didChangeMode;
- (void)_setMode:(id)arg1;
@property(readonly, nonatomic, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode; // @dynamic isTimeIntervalMode;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)didChangeMaximumDate;
- (void)didChangeMinimumDate;
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;
- (void)didChangeCalendar;
- (void)didChangeTimeZone;
- (void)didChangeLocale;
@property(readonly, nonatomic) int datePickerStyle;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_showingDate;
- (void)_doneLoadingDateOrTime;
- (id)_orientationImageSuffix;
- (id)pickerImageNamePrefix;
- (float)_tableRowHeight;
- (void)_datePickerReset:(id)arg1;
- (void)_todayChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) NSCalendar *calendar; // @dynamic calendar;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(readonly, nonatomic) NSLocale *locale; // @dynamic locale;
@property(retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property(readonly) Class superclass;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;

@end

