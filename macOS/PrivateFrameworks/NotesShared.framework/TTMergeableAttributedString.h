//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/TTMergeableUndoString.h>

#import <NotesShared/CRCoding-Protocol.h>

@class NSString;

@interface TTMergeableAttributedString : TTMergeableUndoString <CRCoding>
{
}

+ (id)whitelistedTypingAttributes;
+ (id)whitelistedAttributesForStyle;
+ (id)whitelistedAttributesForModel;
+ (void)saveAttributesOfString:(id)arg1 toArchive:(struct String *)arg2;
+ (void)saveAttributes:(id)arg1 toArchive:(struct AttributeRun *)arg2;
+ (id)attributesForRun:(const struct AttributeRun *)arg1;
+ (int)attributeForWritingDirection:(long long)arg1;
+ (long long)writingDirectionForAttribute:(int)arg1;
- (void)setAttributes:(id)arg1 substring:(struct TopoSubstring *)arg2;
- (BOOL)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(char *)arg3;
- (BOOL)attributesEqual:(id)arg1 toRange:(struct _NSRange)arg2 modelEqual:(char *)arg3;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)serialize;
- (void)saveToArchive:(struct String *)arg1;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_c5c053b6 *)arg3 timestamp:(id)arg4;
- (void)encodeWithCRCoder:(id)arg1 string:(struct String *)arg2;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 string:(const struct String *)arg2;
- (id)initWithCRCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

