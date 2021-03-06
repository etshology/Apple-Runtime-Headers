//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CFNetwork/NSURLRequest.h>

@class NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface NSMutableURLRequest : NSURLRequest
{
}

- (void)setBoundInterfaceIdentifier:(id)arg1;
@property _Bool allowsCellularAccess; // @dynamic allowsCellularAccess;
@property unsigned long long networkServiceType; // @dynamic networkServiceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property _Bool allowsExpensiveNetworkAccess; // @dynamic allowsExpensiveNetworkAccess;
@property _Bool allowsConstrainedNetworkAccess; // @dynamic allowsConstrainedNetworkAccess;
@property(copy) NSURL *mainDocumentURL; // @dynamic mainDocumentURL;
@property double timeoutInterval; // @dynamic timeoutInterval;
@property unsigned long long cachePolicy; // @dynamic cachePolicy;
@property(copy) NSURL *URL; // @dynamic URL;
- (void)setContentDispositionEncodingFallbackArray:(id)arg1;
- (void)_setPayloadTransmissionTimeout:(double)arg1;
- (void)_setIgnoreHSTS:(_Bool)arg1;
- (void)_setPreventHSTSStorage:(_Bool)arg1;
- (void)_setRequiresShortConnectionTimeout:(_Bool)arg1;
- (void)_setStartTimeoutDate:(id)arg1;
- (void)_setTimeWindowDuration:(double)arg1;
- (void)_setTimeWindowDelay:(double)arg1;
- (void)setExpectedWorkload:(unsigned long long)arg1;
@property _Bool HTTPShouldUsePipelining;
- (unsigned long long)requestPriority;
- (void)setRequestPriority:(unsigned long long)arg1;
@property _Bool HTTPShouldHandleCookies;
- (void)setHTTPUserAgent:(id)arg1;
- (void)setHTTPReferrer:(id)arg1;
- (void)setHTTPExtraCookies:(id)arg1;
- (void)setHTTPContentType:(id)arg1;
@property(retain) NSInputStream *HTTPBodyStream;
@property(copy) NSData *HTTPBody;
- (void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy) NSDictionary *allHTTPHeaderFields;
@property(copy) NSString *HTTPMethod;

@end

