//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICFPSAPContext : NSObject
{
}

- (_Bool)signData:(id)arg1 returningSignatureData:(id *)arg2 error:(id *)arg3;
- (_Bool)processResponseWithSignatureData:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)exchangeWithSAPVersion:(unsigned int)arg1 data:(id)arg2 returningData:(id *)arg3 exchangeStatus:(char *)arg4 error:(id *)arg5;
- (void)dealloc;
- (id)initReturningError:(id *)arg1;

@end

