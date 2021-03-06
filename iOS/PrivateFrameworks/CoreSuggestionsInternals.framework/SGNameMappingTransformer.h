//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/PMLTransformerProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface SGNameMappingTransformer : NSObject <PMLTransformerProtocol>
{
    NSDictionary *_nameMappings;
    NSString *_tokenToIgnore;
    int _minimumConfidence;
    CDUnknownBlockType _confidenceMapper;
}

+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 minimumConfidence:(int)arg4 confidenceMapper:(CDUnknownBlockType)arg5 tokenToIgnore:(id)arg6 andPossessive:(id)arg7;
+ (id)withFullNameMapping:(id)arg1 firstNameMapping:(id)arg2 lastNameMapping:(id)arg3 andPossessive:(id)arg4;
- (void).cxx_destruct;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToNameMappingTransformer:(id)arg1;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)toPlistWithChunks:(id)arg1;
- (_Bool)isPossessive:(id)arg1;
- (id)detectNames:(id)arg1;
- (id)transform:(id)arg1;
- (id)nameMappingForToken:(id)arg1 withConfidence:(int *)arg2;
- (id)initWithNameMappings:(id)arg1 minimumConfidence:(int)arg2 confidenceMapper:(CDUnknownBlockType)arg3 tokenToIgnore:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

