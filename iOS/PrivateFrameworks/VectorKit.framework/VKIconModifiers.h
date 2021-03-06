//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VKIconModifiers : NSObject
{
    struct IconModifiers _iconModifiers;
    _Bool _interactive;
    _Bool _nightMode;
    _Bool _navMode;
    _Bool _transitMode;
    _Bool _searchResult;
    long long _zoom;
    unsigned long long _variant;
    unsigned long long _countryCode;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) unsigned long long variant; // @synthesize variant=_variant;
@property(nonatomic) long long zoom; // @synthesize zoom=_zoom;
@property(nonatomic, getter=isSearchResult) _Bool searchResult; // @synthesize searchResult=_searchResult;
@property(nonatomic) _Bool transitMode; // @synthesize transitMode=_transitMode;
@property(nonatomic) _Bool navMode; // @synthesize navMode=_navMode;
@property(nonatomic) _Bool nightMode; // @synthesize nightMode=_nightMode;
@property(nonatomic) _Bool interactive; // @synthesize interactive=_interactive;
- (void)setGlyphOnly:(_Bool)arg1;
- (void)setTransitLineColor:(CDStruct_83984b6f)arg1;
- (void)setText:(id)arg1;
- (struct IconModifiers *)cppModifiers;
- (id)initWithModifiers:(const struct IconModifiers *)arg1;
- (id)init;

@end

