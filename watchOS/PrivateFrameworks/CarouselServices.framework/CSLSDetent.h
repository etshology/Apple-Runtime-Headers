//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarouselServices/BSXPCCoding-Protocol.h>
#import <CarouselServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface CSLSDetent : NSObject <BSXPCCoding, NSSecureCoding>
{
    unsigned short _audioSlot;
    unsigned short _hapticSlot;
    int _type;
    double _audioGain;
    double _strongAudioGain;
    double _hapticGain;
    double _strongHapticGain;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) double strongHapticGain; // @synthesize strongHapticGain=_strongHapticGain;
@property(nonatomic) double hapticGain; // @synthesize hapticGain=_hapticGain;
@property(nonatomic) unsigned short hapticSlot; // @synthesize hapticSlot=_hapticSlot;
@property(nonatomic) double strongAudioGain; // @synthesize strongAudioGain=_strongAudioGain;
@property(nonatomic) double audioGain; // @synthesize audioGain=_audioGain;
@property(nonatomic) unsigned short audioSlot; // @synthesize audioSlot=_audioSlot;
@property(nonatomic) int type; // @synthesize type=_type;
- (void)_buildDescriptionWithBuilder:(id)arg1;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)toAPIndexDictionariesWithStrength:(_Bool)arg1;
- (id)toAOPDictionaries;

// Remaining properties
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

