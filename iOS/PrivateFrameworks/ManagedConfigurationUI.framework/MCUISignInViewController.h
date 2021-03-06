//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ManagedConfigurationUI/MCSectionBasedTableViewController.h>

#import <ManagedConfigurationUI/AKInlineSignInViewControllerDelegate-Protocol.h>

@class AKAppleIDAuthenticationInAppContext, MCSignInPageAuthenticationSectionController, MCSignInPageTitleSectionController, NSString;
@protocol MCUISignInViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MCUISignInViewController : MCSectionBasedTableViewController <AKInlineSignInViewControllerDelegate>
{
    _Bool _signInButtonTapped;
    _Bool _authenticationFinished;
    id <MCUISignInViewControllerDelegate> _delegate;
    MCSignInPageTitleSectionController *_titleSectionController;
    MCSignInPageAuthenticationSectionController *_authSectionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCSignInPageAuthenticationSectionController *authSectionController; // @synthesize authSectionController=_authSectionController;
@property(retain, nonatomic) MCSignInPageTitleSectionController *titleSectionController; // @synthesize titleSectionController=_titleSectionController;
@property(nonatomic) _Bool authenticationFinished; // @synthesize authenticationFinished=_authenticationFinished;
@property(nonatomic) _Bool signInButtonTapped; // @synthesize signInButtonTapped=_signInButtonTapped;
@property(nonatomic) __weak id <MCUISignInViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)signInViewController:(id)arg1 didAuthenticateWithResults:(id)arg2 error:(id)arg3;
- (void)signInViewController:(id)arg1 willPerformAuthenticationWithContext:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSString *orgName;
@property(retain, nonatomic) AKAppleIDAuthenticationInAppContext *context;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

