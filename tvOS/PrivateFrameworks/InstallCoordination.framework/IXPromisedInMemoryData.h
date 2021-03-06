//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstallCoordination/IXOwnedDataPromise.h>

#import <InstallCoordination/NSSecureCoding-Protocol.h>

@class IXPromisedInMemoryDataSeed;

@interface IXPromisedInMemoryData : IXOwnedDataPromise <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
- (Class)seedClass;
- (id)initWithSeed:(id)arg1;
- (void)resetWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithName:(id)arg1 client:(unsigned long long)arg2 data:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(retain, nonatomic) IXPromisedInMemoryDataSeed *seed; // @dynamic seed;

@end

