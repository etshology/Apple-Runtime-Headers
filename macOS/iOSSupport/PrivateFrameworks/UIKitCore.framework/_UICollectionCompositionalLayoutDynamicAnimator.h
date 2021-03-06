//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIDynamicAnimator.h>

@class NSArray, NSMutableDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutDynamicAnimator : UIDynamicAnimator
{
    CDUnknownBlockType _invalidationHandler;
    NSMutableDictionary *_itemBehaviors;
}

- (void).cxx_destruct;
- (void)updateAllItemsFromCurrentState;
- (void)removeItemBehaviorForIdentifier:(id)arg1;
- (void)addItemBehavior:(id)arg1;
@property(readonly, nonatomic) NSSet *visibleItemIdentifiers;
@property(readonly, nonatomic) NSArray *visibleItems;
@property(readonly, nonatomic) NSArray *visibleItemBehaviors;
- (id)behaviorForIdentifier:(id)arg1;
- (BOOL)_animatorStep:(double)arg1;
- (id)initWithReferenceSystem:(id)arg1 invalidationHandler:(CDUnknownBlockType)arg2;

@end

