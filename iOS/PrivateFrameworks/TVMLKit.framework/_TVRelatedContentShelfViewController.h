//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/__TVShelfViewControllerDelegate-Protocol.h>

@class NSString, _TVShelfViewController;

__attribute__((visibility("hidden")))
@interface _TVRelatedContentShelfViewController : UIViewController <__TVShelfViewControllerDelegate, TVAppTemplateImpressionable>
{
    _TVShelfViewController *_shelfViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _TVShelfViewController *shelfViewController; // @synthesize shelfViewController=_shelfViewController;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (id)preferredFocusEnvironments;
- (void)shelfViewController:(id)arg1 updateRelatedView:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

