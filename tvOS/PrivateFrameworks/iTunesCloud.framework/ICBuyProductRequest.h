//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSDictionary;

@interface ICBuyProductRequest : ICRequestOperation
{
    ICStoreRequestContext *_requestContext;
    ICStoreURLRequest *_storeURLRequest;
    NSDictionary *_buyParameters;
    _Bool _includeKeybagSyncData;
    id _parsedResponse;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithRequestContext:(id)arg1 buyParametersString:(id)arg2 includeKeybagSyncData:(_Bool)arg3;
- (id)initWithRequestContext:(id)arg1 buyParameters:(id)arg2 includeKeybagSyncData:(_Bool)arg3;

@end

