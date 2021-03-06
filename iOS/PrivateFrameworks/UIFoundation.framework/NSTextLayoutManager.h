//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>
#import <UIFoundation/NSTextViewportElementProvider-Protocol.h>

@class NSArray, NSLayoutManager, NSOperationQueue, NSString, NSTextContainer, NSTextContentManager, NSTextViewportLayoutController;
@protocol NSTextLayoutManagerDelegate, NSTextLayoutManagerDelegatePrivate;

@interface NSTextLayoutManager : NSObject <NSTextViewportElementProvider, NSSecureCoding>
{
    NSTextContentManager *_textContentManager;
    NSArray *_textContainers;
    NSTextViewportLayoutController *_viewportLayoutController;
    long long _applicationFrameworkContext;
    id <NSTextLayoutManagerDelegatePrivate> _delegate;
    NSLayoutManager *_companion;
    CDStruct_80f920e0 _lastTextContainerEntry;
    CDStruct_80f920e0 *_textContainerEntries;
    CDStruct_80f920e0 *_textContainerEntriesAccessHint;
    unsigned long long _textContainerEntriesSize;
    unsigned long long _textContainerEntriesCount;
    CDStruct_0f015c83 *_textLayoutSegments;
    CDStruct_0f015c83 *_textLayoutSegmentsAccessHint;
    CDStruct_0f015c83 *_softInvalidatedSegmentHead;
    unsigned long long _textLayoutSegmentsSize;
    unsigned long long _textLayoutSegmentsCount;
    _Bool _usesFontLeading;
    _Bool _limitsLayoutForSuspiciousContents;
    NSTextContainer *_templateTextContainer;
    NSOperationQueue *_layoutQueue;
}

+ (_Bool)supportsSecureCoding;
+ (Class)companionLayoutManagerClass;
+ (Class)viewportLayoutControllerClass;
@property(retain) NSOperationQueue *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(retain) NSTextContainer *templateTextContainer; // @synthesize templateTextContainer=_templateTextContainer;
@property _Bool limitsLayoutForSuspiciousContents; // @synthesize limitsLayoutForSuspiciousContents=_limitsLayoutForSuspiciousContents;
@property _Bool usesFontLeading; // @synthesize usesFontLeading=_usesFontLeading;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)replaceCharactersInRange:(id)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(id)arg1 withElements:(id)arg2;
- (void)synchronize;
- (void)finalizeAndPushLastTextContainer;
- (id)enumerateTextLayoutFragmentsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)textLayoutFragmentForLocation:(id)arg1;
- (id)textLayoutFragmentForPosition:(struct CGPoint)arg1 inTextContainerAtIndex:(long long)arg2;
- (void)ensureLayoutForBounds:(struct CGRect)arg1;
- (void)invalidateLayoutForRange:(id)arg1;
- (void)ensureLayoutForRange:(id)arg1;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)updateLayoutWithTextLayoutFragment:(id)arg1;
@property(readonly) struct CGRect usageBoundsForLastTextContainer;
- (struct CGRect)usageBoundsInTextContainerAtIndex:(long long)arg1;
- (id)rangeForTextContainerAtIndex:(long long)arg1;
- (id)textContainerForLocation:(id)arg1;
@property(readonly, copy) NSArray *textContainers; // @dynamic textContainers;
- (void)_removeTextContainersUntilCondition:(CDUnknownBlockType)arg1;
- (void)_removeTextContainer;
- (void)_addTextContainerFromTemplate:(id)arg1;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (long long)applicationFrameworkContext;
- (void)replaceTextContentManager:(id)arg1;
- (void)setTextContentManager:(id)arg1;
@property(readonly) __weak NSTextContentManager *textContentManager; // @dynamic textContentManager;
@property __weak id <NSTextLayoutManagerDelegate> delegate; // @dynamic delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)companionLayoutManager;
- (id)viewportLayoutController;
- (_Bool)_hasLayoutForLocation:(id)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

