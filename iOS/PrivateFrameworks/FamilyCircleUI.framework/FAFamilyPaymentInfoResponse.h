//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class FAFamilyCreditCard;

@interface FAFamilyPaymentInfoResponse : AAResponse
{
    FAFamilyCreditCard *_creditCard;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FAFamilyCreditCard *creditCard; // @synthesize creditCard=_creditCard;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

