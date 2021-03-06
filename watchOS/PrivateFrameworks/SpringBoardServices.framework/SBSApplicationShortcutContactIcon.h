//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardServices/SBSApplicationShortcutIcon.h>

@class NSData, NSString;

@interface SBSApplicationShortcutContactIcon : SBSApplicationShortcutIcon
{
    NSString *_contactIdentifier;
    NSString *_firstName;
    NSString *_lastName;
    NSData *_imageData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (unsigned int)hash;
- (_Bool)isEqual:(id)arg1;
- (id)_initForSubclass;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageData:(id)arg3;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2;
- (id)initWithContactIdentifier:(id)arg1;

@end

