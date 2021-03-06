//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class MPPlaybackArchiveDisplayProperties, NSData, NSMutableDictionary, NSString;

@interface MPPlaybackArchive : NSObject <NSSecureCoding>
{
    MPPlaybackArchiveDisplayProperties *_displayProperties;
    NSString *_bundleIdentifier;
    unsigned int _supportedOptions;
    unsigned int _copyOptions;
    unsigned int _queueControlOptions;
    NSMutableDictionary *_storage;
    int _type;
    NSString *_playbackSessionIdentifier;
    NSString *_playbackSessionType;
    NSData *_playbackSessionData;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSData *playbackSessionData; // @synthesize playbackSessionData=_playbackSessionData;
@property(readonly, copy, nonatomic) NSString *playbackSessionType; // @synthesize playbackSessionType=_playbackSessionType;
@property(readonly, copy, nonatomic) NSString *playbackSessionIdentifier; // @synthesize playbackSessionIdentifier=_playbackSessionIdentifier;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableDictionary *storage; // @synthesize storage=_storage;
@property(nonatomic) unsigned int queueControlOptions; // @synthesize queueControlOptions=_queueControlOptions;
@property(nonatomic) unsigned int copyOptions; // @synthesize copyOptions=_copyOptions;
@property(readonly, nonatomic) unsigned int supportedOptions; // @synthesize supportedOptions=_supportedOptions;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) MPPlaybackArchiveDisplayProperties *displayProperties; // @synthesize displayProperties=_displayProperties;
- (id)initWithPlaybackSessionIdentifier:(id)arg1 playbackSessionData:(id)arg2 playbackSessionType:(id)arg3 bundleIdentifier:(id)arg4 displayProperties:(id)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithOptions:(unsigned int)arg1;
- (_Bool)boolValueForOption:(int)arg1;
- (void)setBOOLValue:(_Bool)arg1 forOption:(int)arg2;
- (id)initWithType:(int)arg1 sessionIdentifier:(id)arg2 data:(id)arg3 dataType:(id)arg4 bundleIdentifier:(id)arg5 supportedOptions:(unsigned int)arg6 displayProperties:(id)arg7;

@end

