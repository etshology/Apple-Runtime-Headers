//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BoardServices/NSCopying-Protocol.h>

@class NSString;
@protocol OS_xpc_object;

@interface _BSServiceOutgoingEndpoint : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> *_endpoint;
    NSString *_eDesc;
    unsigned int _invalidationGeneration;
}

+ (id)_wrapXPCEndpoint:(id)arg1 withDescription:(id)arg2;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

