//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class TKToken, TKTokenSession;

@protocol TKTokenDelegate <NSObject>
- (TKTokenSession *)token:(TKToken *)arg1 createSessionWithError:(id *)arg2;

@optional
- (void)token:(TKToken *)arg1 terminateSession:(TKTokenSession *)arg2;
@end

