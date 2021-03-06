//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBCurrencyAmountValue, _INPBDateTimeRange, _INPBFinancialAccountValue, _INPBPaymentAmountValue;

@protocol _INPBTransferMoneyIntentResponse <NSObject>
@property(readonly, nonatomic) _Bool hasTransferFee;
@property(retain, nonatomic) _INPBCurrencyAmountValue *transferFee;
@property(readonly, nonatomic) _Bool hasTransactionScheduledDate;
@property(retain, nonatomic) _INPBDateTimeRange *transactionScheduledDate;
@property(readonly, nonatomic) _Bool hasTransactionNote;
@property(copy, nonatomic) NSString *transactionNote;
@property(readonly, nonatomic) _Bool hasTransactionAmount;
@property(retain, nonatomic) _INPBPaymentAmountValue *transactionAmount;
@property(readonly, nonatomic) _Bool hasToAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *toAccount;
@property(readonly, nonatomic) _Bool hasFromAccount;
@property(retain, nonatomic) _INPBFinancialAccountValue *fromAccount;
@end

