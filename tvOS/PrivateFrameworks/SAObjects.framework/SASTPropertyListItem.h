//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SASTTemplateItem-Protocol.h>

@class NSArray, NSString, SAUIDecoratedText, SAUINanoImageResource;

@interface SASTPropertyListItem : AceObject <SASTTemplateItem>
{
}

+ (id)propertyListItemWithDictionary:(id)arg1 context:(id)arg2;
+ (id)propertyListItem;
@property(copy, nonatomic) NSArray *values;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) SAUINanoImageResource *imageResource;
@property(copy, nonatomic) NSArray *decoratedValues;
@property(retain, nonatomic) SAUIDecoratedText *decoratedTitle;
@property(copy, nonatomic) NSString *alignment;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

