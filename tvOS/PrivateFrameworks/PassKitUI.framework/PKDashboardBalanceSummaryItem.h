//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKDashboardItem-Protocol.h>

@class NSArray, NSString, PKAccount, PKCreditAccountStatement, PKCreditAccountSummary, PKPaymentPass, PKPaymentTransactionGroup, PKPaymentWebService;

@interface PKDashboardBalanceSummaryItem : NSObject <PKDashboardItem>
{
    PKAccount *_account;
    PKPaymentPass *_paymentPass;
    PKPaymentWebService *_webService;
    unsigned long long _type;
    PKPaymentTransactionGroup *_transactionGroup;
    PKCreditAccountStatement *_statement;
    PKCreditAccountSummary *_summary;
    NSArray *_statements;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *statements; // @synthesize statements=_statements;
@property(retain, nonatomic) PKCreditAccountSummary *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) PKCreditAccountStatement *statement; // @synthesize statement=_statement;
@property(retain, nonatomic) PKPaymentTransactionGroup *transactionGroup; // @synthesize transactionGroup=_transactionGroup;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(retain, nonatomic) PKPaymentPass *paymentPass; // @synthesize paymentPass=_paymentPass;
@property(retain, nonatomic) PKAccount *account; // @synthesize account=_account;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

