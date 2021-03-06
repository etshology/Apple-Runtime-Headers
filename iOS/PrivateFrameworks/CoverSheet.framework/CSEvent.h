//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface CSEvent : NSObject
{
    _Bool _consumable;
    _Bool _stateless;
    long long _type;
    NSNumber *_value;
}

+ (id)eventWithType:(long long)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumber *value; // @synthesize value=_value;
@property(nonatomic, getter=isStateless) _Bool stateless; // @synthesize stateless=_stateless;
@property(nonatomic, getter=isConsumable) _Bool consumable; // @synthesize consumable=_consumable;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)description;

@end

