//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPSetVisibilityRequest : SKRequest
{
    CDUnknownBlockType _completionHandler;
    long long _visibility;
    NSString *_productId;
    NSString *_bundleId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(nonatomic) long long visibility; // @synthesize visibility=_visibility;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_start;
- (void)_handleReply:(id)arg1;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 bundleId:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithVisibility:(long long)arg1 productId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

