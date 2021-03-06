//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Carousel/PUICQuickboardViewControllerDelegate-Protocol.h>

@class CUISBulletinClientFactory, NSString, PUICQuickboardMessageViewController, UIViewController;
@protocol CUISBulletinQuickLongLook;

@interface CSLBulletinQuickboardHelper : NSObject <PUICQuickboardViewControllerDelegate>
{
    UIViewController *_presentingController;
    UIViewController<CUISBulletinQuickLongLook> *_requestingController;
    CDUnknownBlockType _textInputCompletion;
    PUICQuickboardMessageViewController *_quickboardController;
    CUISBulletinClientFactory *_factory;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUISBulletinClientFactory *factory; // @synthesize factory=_factory;
@property(retain, nonatomic) PUICQuickboardMessageViewController *quickboardController; // @synthesize quickboardController=_quickboardController;
@property(copy) CDUnknownBlockType textInputCompletion; // @synthesize textInputCompletion=_textInputCompletion;
@property(retain, nonatomic) UIViewController<CUISBulletinQuickLongLook> *requestingController; // @synthesize requestingController=_requestingController;
@property(nonatomic) __weak UIViewController *presentingController; // @synthesize presentingController=_presentingController;
- (void)quickboard:(id)arg1 languageDidChange:(id)arg2;
- (void)quickboardInputCancelled:(id)arg1;
- (void)quickboard:(id)arg1 textEntered:(id)arg2;
- (void)_presentQuickboard:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestsTextInputWithController:(id)arg1 factory:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isQuickboardPresented;
- (id)initWithPresentingController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

