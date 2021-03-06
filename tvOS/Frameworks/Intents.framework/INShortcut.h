//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSItemProviderReading-Protocol.h>
#import <Intents/NSItemProviderWriting-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INIntent, NSArray, NSData, NSString, NSUserActivity;

@interface INShortcut : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying>
{
    NSData *_activityData;
    INIntent *_intent;
    NSUserActivity *_userActivity;
    INImage *_activityImage;
    NSString *_activitySubtitle;
    NSString *_activityBundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;
+ (id)writableTypeIdentifiersForItemProvider;
+ (id)readableTypeIdentifiersForItemProvider;
+ (id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *activityBundleIdentifier; // @synthesize activityBundleIdentifier=_activityBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySubtitle; // @synthesize activitySubtitle=_activitySubtitle;
@property(readonly, copy, nonatomic) INImage *activityImage; // @synthesize activityImage=_activityImage;
@property(readonly, nonatomic) NSUserActivity *userActivity; // @synthesize userActivity=_userActivity;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSString *_associatedAppBundleIdentifier;
@property(readonly, nonatomic) NSString *_subtitle;
@property(readonly, nonatomic) NSString *_title;
@property(readonly, copy, nonatomic) NSData *activityData; // @synthesize activityData=_activityData;
- (id)shortcutWithActivityBundleIdentifier:(id)arg1;
- (id)shortcutWithActivityImage:(id)arg1;
- (id)initWithActivityData:(id)arg1 activityImage:(id)arg2 activitySubtitle:(id)arg3 activityBundleIdentifier:(id)arg4;
- (id)initWithUserActivity:(id)arg1 bundleIdentifier:(id)arg2;
- (id)initWithUserActivity:(id)arg1;
- (id)_initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@end

