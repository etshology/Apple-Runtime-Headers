//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ContactsUI/CNContactActionsControllerDelegate-Protocol.h>
#import <ContactsUI/CNQuickActionButtonDelegate-Protocol.h>
#import <ContactsUI/CNQuickActionsManagerDelegate-Protocol.h>
#import <ContactsUI/CNUIUserActionListConsumer-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>

@class CNContact, CNContactActionsController, CNQuickAction, CNQuickActionsManager, NSArray, NSDictionary, NSString, UIAlertController, UICollectionView, UICollectionViewFlowLayout;
@protocol CNQuickActionsViewDelegate;

@interface CNQuickActionsView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, CNQuickActionsManagerDelegate, CNQuickActionButtonDelegate, CNContactActionsControllerDelegate, CNUIUserActionListConsumer>
{
    _Bool _sortsWithDuet;
    _Bool _useDuetIfAvailable;
    _Bool _showTitles;
    _Bool _showBackgroundPlatters;
    CNContact *_contact;
    NSArray *_categories;
    NSDictionary *_titleTextAttributes;
    id <CNQuickActionsViewDelegate> _delegate;
    NSArray *_actions;
    UICollectionViewFlowLayout *_collectionLayout;
    UICollectionView *_collectionView;
    UIAlertController *_alertController;
    CNContactActionsController *_actionsController;
    CNQuickAction *_performingAction;
    CNQuickActionsManager *_actionsManager;
    struct CGSize _cachedContentSize;
}

+ (id)actionsManagerForContact:(id)arg1;
+ (id)defaultCategories;
+ (_Bool)hasActionsForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;
+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) CNQuickActionsManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(retain, nonatomic) CNQuickAction *performingAction; // @synthesize performingAction=_performingAction;
@property(retain, nonatomic) CNContactActionsController *actionsController; // @synthesize actionsController=_actionsController;
@property(retain, nonatomic) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(nonatomic) struct CGSize cachedContentSize; // @synthesize cachedContentSize=_cachedContentSize;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UICollectionViewFlowLayout *collectionLayout; // @synthesize collectionLayout=_collectionLayout;
@property(retain, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property(nonatomic) __weak id <CNQuickActionsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showBackgroundPlatters; // @synthesize showBackgroundPlatters=_showBackgroundPlatters;
@property(nonatomic) _Bool showTitles; // @synthesize showTitles=_showTitles;
@property(nonatomic) _Bool useDuetIfAvailable; // @synthesize useDuetIfAvailable=_useDuetIfAvailable;
@property(copy, nonatomic) NSDictionary *titleTextAttributes; // @synthesize titleTextAttributes=_titleTextAttributes;
@property(nonatomic) _Bool sortsWithDuet; // @synthesize sortsWithDuet=_sortsWithDuet;
@property(copy, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (void)contactActionsController:(id)arg1 didSelectAction:(id)arg2;
- (void)performAction:(id)arg1;
- (void)showDisambiguationControllerWithDataSource:(id)arg1 actionType:(id)arg2 onController:(id)arg3 sourceView:(id)arg4;
- (_Bool)quickActionButton:(id)arg1 performAction:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
@property(readonly, nonatomic) double maximumWidth;
- (double)_widthForButtonCount:(long long)arg1 itemSize:(struct CGSize *)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToWindow:(id)arg1;
- (void)updateContentSize;
- (void)reloadData;
- (void)_updateActions;
@property(nonatomic) double interspace;
- (id)initWithContact:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

